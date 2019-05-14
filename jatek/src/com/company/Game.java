package com.company;

import java.util.Arrays;
import java.util.StringTokenizer;
import java.util.Vector;

public class Game {
    private Vector<Room> house;
    private Player player;

    public Game(String name){
        this.house = initializeHouse();
        initializeExits();
        this.player = new Player(name, 0);
    }

    public boolean hasOneValidArgument(Object[] objArr){
        return (objArr[0] != null && objArr[1] == null);
    }

    public boolean hasTwoValidArgument(Object[] objArr){
        return (objArr[0] != null && objArr[1] != null);
    }

    public Object[] initializeObjectArr(Vector<String> tokenizedInstruction){
        Object[] objectArr = new Object[2];

        for(int i = 1; i < tokenizedInstruction.size(); i++){
            objectArr[i-1] = house.elementAt(player.getLocation()).findObject(tokenizedInstruction.elementAt(i));
            if(objectArr[i-1] == null){
                objectArr[i-1] = player.getItem(tokenizedInstruction.elementAt(i));
            }
        }
        return objectArr;
    }

    public Vector<String> tokenizeInstruction(String instruction){
        Vector<String> tokenizedInstruction = new Vector<String>();
        StringTokenizer defaultTokenizer = new StringTokenizer(instruction);

        while(defaultTokenizer.hasMoreTokens()){
            tokenizedInstruction.add(defaultTokenizer.nextToken().toLowerCase());
        }
        return tokenizedInstruction;
    }

    public boolean validInstructionLenght(Vector<String> tokenizedInstruction){
        if(tokenizedInstruction.size() > 0 && tokenizedInstruction.size() < 4){
            return true;
        }
        else if(tokenizedInstruction.size() > 3){
            System.out.println("You entered too many arguments!");
            return false;
        } else if(tokenizedInstruction.isEmpty()){
            System.out.println("You have not given an instruction!");
            return false;
        } else
            return false;
    }

    public Object[] swapObjects(Object[] objArr){
        Object temp;
        if(objArr[0] instanceof Carriable && objArr[1] instanceof Exit){
            temp = objArr[0];
            objArr[0] = objArr[1];
            objArr[1] = temp;
        }
        return objArr;
    }

    public boolean playerInstruction(String instruction){
        int playerLocation = player.getLocation();
        Vector<String> tokenizedInstruction = tokenizeInstruction(instruction);
        Room currentRoom = house.elementAt(playerLocation);

        if(!validInstructionLenght(tokenizedInstruction)) {
            return false;
        }

        String command = tokenizedInstruction.elementAt(0);
        Object[] objectArr = initializeObjectArr(tokenizedInstruction);

        if(command.equals("inspect")){
            if(tokenizedInstruction.size() == 1 || tokenizedInstruction.elementAt(1).equals("room")) {
                currentRoom.showRoom();
            }
            else if(hasOneValidArgument(objectArr)) {
                if (objectArr[0] instanceof Container) {
                    Container temp = (Container) objectArr[0];
                    temp.openContainer();
                }
                objectArr[0].inspectObject();
            }
            else{
                System.out.println("I can't see this object");
            }


        } else if(command.equals("north") || command.equals("east") || command.equals("south") || command.equals("west") && tokenizedInstruction.size() == 1){
                if(currentRoom.isExitDirection(command)){
                    player.move(command);
                    playerLocation = player.getLocation();
                    currentRoom = house.elementAt(playerLocation);
                    System.out.println("You entered into the " + currentRoom.getName());
                }
        }

        else if(command.equals("carry") && hasOneValidArgument(objectArr)) {
            if (objectArr[0] instanceof Carriable) {
                player.carry((Carriable) objectArr[0]);
                if(currentRoom.findContainer(objectArr[0]) != null)
                    currentRoom.findContainer(objectArr[0]).removeObject(objectArr[0]);
                else
                    currentRoom.removeObject(objectArr[0]);
            } else if (!(objectArr[0] instanceof Carriable))
                System.out.println("You cannot carry this item");


        } else if(command.equals("inventory")) {
            player.listInventory();
        }

        else if(command.equals("drop") && hasOneValidArgument(objectArr)){
            if(player.isInInventory((Carriable) objectArr[0])){
                player.drop((Carriable) objectArr[0]);
                currentRoom.addObject(objectArr[0]);
            } else {
                System.out.println("You don't have this item with you");
            }
        } else if(command.equals("open") || (command.equals("close")) && hasTwoValidArgument(objectArr)){
            objectArr = swapObjects(objectArr);
            if((objectArr[1] instanceof Misc) && player.isInInventory((Carriable) objectArr[1]) && (objectArr[0] instanceof Exit)){
                if(((Misc) objectArr[1]).getKeyNumber() == ((Exit)(objectArr[0])).getKeyNumber()) {
                    if(command.equals("open")){
                        ((Exit)(objectArr[0])).open();
                        System.out.println("You opened the " + objectArr[0].getName());
                    }else {
                        ((Exit)(objectArr[0])).close();
                        System.out.println("You closed the " + objectArr[0].getName());
                    }
                }
                else{
                    System.out.println("This key does not open this " + objectArr[0].getName());
                }
            } else if(objectArr[0] instanceof Exit && !(objectArr[1] instanceof Misc)){
                System.out.println("You cannot " + command + " the " + objectArr[0].getName() + " with a " + objectArr[1].getName());
            } else
                System.out.println("A " +  objectArr[0].getName() + " cannot be opened. Not even with a " +  objectArr[1].getName());
        }
        else{
            System.out.println("Invalid command!");
        }
        return false;

    }

    private void initializeExits(){
        Exit door = new Exit("door", 1);
        Breakable window = new Breakable("window", 2);
        window.hide();
        this.house.elementAt(0).addExit("north", window);
        this.house.elementAt(2).addExit("south", window);
        this.house.elementAt(0).addExit("west", door);
        this.house.elementAt(1).addExit("east", door);
    }

    private static Room initializeLivingRoom(){
        Room livingRoom = new Room("living room", 0);
        Movable cupboard = new Movable("cupboard", "window");
        Container box = new Container("box");
        Misc key1 = new Misc("key", 1);
        Carriable toy = new Carriable("toy");
        box.addObject(key1);
        cupboard.addObject(box);
        livingRoom.addObject(cupboard);
        livingRoom.addObject(toy);
        return livingRoom;
    }

    private static Room initializeBathRoom(){
        Room bathRoom = new Room("bathroom", -3);
        Container bathtub = new Container("bathtub");
        Weapon crowbar = new Weapon("crowbar");
        crowbar.hide();
        bathtub.addObject(crowbar);
        bathRoom.addObject(bathtub);
        return bathRoom;
    }

    private static Vector<Room> initializeHouse(){
        Vector<Room> house = new Vector<Room>();
        house.add(initializeLivingRoom());
        house.add(initializeBathRoom());
        Room finish = new Room("finish", 2);
        house.add(finish);
        return house;
    }

}
