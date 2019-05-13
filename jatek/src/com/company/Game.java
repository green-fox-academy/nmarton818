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
    public boolean playerInstruction(String instruction){
        int playerLocation = player.getLocation();
        Vector<String> tokenizedInstruction = new Vector<String>();
        StringTokenizer defaultTokenizer = new StringTokenizer(instruction);

        while(defaultTokenizer.hasMoreTokens()){
            tokenizedInstruction.add(defaultTokenizer.nextToken().toLowerCase());
        }
        if(tokenizedInstruction.size() > 3){
            System.out.println("You entered too many arguments!");
            return false;
        } else if(tokenizedInstruction.isEmpty()){
            System.out.println("You have not given an instruction!");
            return false;
        }

        String command = tokenizedInstruction.elementAt(0);
        Object[] objectArr = new Object[2];
        Arrays.fill(objectArr, null);

        if(tokenizedInstruction.size() > 1)
            objectArr[0] = house.elementAt(playerLocation).findObject(tokenizedInstruction.elementAt(1));

        if(tokenizedInstruction.size() > 2)
            objectArr[1] = house.elementAt(playerLocation).findObject(tokenizedInstruction.elementAt(2));

        if(command.equals("inspect")){
            if(tokenizedInstruction.size() == 1 || tokenizedInstruction.elementAt(1).equals("room")) {
                house.elementAt(playerLocation).showRoom();
                return true;
            }
            else if(objectArr[0] != null && objectArr[1] == null) {
                if (objectArr[0] instanceof Container) {
                    Container temp = (Container) objectArr[0];
                    temp.openContainer();
                }
                objectArr[0].inspectObject();
            }
            else{
                System.out.println("I can't see what you are talking about!");
            }


        } else if(command.equals("north") || command.equals("east") || command.equals("south") || command.equals("west") && objectArr[0] == null && objectArr[1] == null){
                if(house.elementAt(playerLocation).isExitDirection(command)){
                    player.move(command);
                    System.out.println("You entered this room: "+ house.elementAt(playerLocation).getName());
                }
        }

        else if(command.equals("carry") && objectArr[0] != null && objectArr[1] == null) {
            if (objectArr[0] instanceof Carriable) {
                player.carry((Carriable) objectArr[0]);

            } else if (!(objectArr[0] instanceof Carriable))
                System.out.println("You cannot carry this item");
        } else if(command.equals("inventory")){
            player.listInventory();
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
        Misc key2 = new Misc("key", 2);
        box.addObject(key2);
        cupboard.addObject(box);
        livingRoom.addObject(cupboard);
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
