package com.company;
import java.util.Vector;

public class Player {
    private int location;
    private String name;
    private Vector<Carriable> inventory;

    public Player(String name, int location){
        this.name = name;
        this.location = location;
        this.inventory = new Vector<Carriable>();
    }
    public String getName(){
        return this.name;
    }
    public int getLocation(){
        return this.location;
    }

    public void listInventory(){
        if(inventory.size() != 0){
        System.out.print("You have these items in your inventory: ");
        for(int i = 0; i < inventory.size(); i++) {
            System.out.print(inventory.elementAt(i).name + ", ");
        }
        }else
            System.out.println("Your inventory is empty");
    }

    public void move(String direction){
        if(direction.equals("north"))
            this.location += 2;
        else if(direction.equals("south"))
            this.location -= 2;
        else if(direction.equals("east"))
            this.location -= 1;
        else if(direction.equals("west"))
            this.location += 1;
    }

    public void carry(Carriable item){
        inventory.add(item);
        System.out.println("You picked up this item: "+ item.name);
    }

    public void drop(Object object){}
    public void open(Object object){}
    public void pull(Object object){}
    public void crush(Object object){}

}
