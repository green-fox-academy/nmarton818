package com.company;

import java.security.Key;
import java.util.*;

public class Room {
    private String name;
    private Vector<Object> objects;
    private Map<String, Exit> exits;
    private int roomID;

    public Room(String name, int roomID) {
        this.exits = new HashMap<String, Exit>();
        this.objects = new Vector<Object>();
        this.name = name;
        this.roomID = roomID;
    }
    public String getName(){
        return this.name;
    }
    public void showRoom(){
        System.out.println("You are in the " + this.name + ". In this room there are these things: ");
        for(int i = 0; i < objects.size(); i++){
            if(objects.elementAt(i).isVisible()){
                    objects.elementAt(i).inspectObject();
            }
        }
        for(HashMap.Entry<String, Exit> entry : exits.entrySet()){
            if(entry.getValue().isVisible()){
                System.out.println("There is a " + entry.getValue().getName() + " " + entry.getKey());
            }
        }
    }
    public boolean isExitDirection(String direction){
        Exit exit = exits.get(direction);
        if(exit != null) {
            if (exit.isOpen && exit.visible)
                return true;

            else if (!(exit.isOpen))
                System.out.println("The " + exit.name + " is locked");

            else if (!(exit.visible))
                System.out.println("I cannot see an exit that way");
                return false;
        } else{
            System.out.println("I cannot see an exit that way");
            return false;
        }
    }


    public Object findObject(String object){
        for (int i = 0; i < objects.size(); i++) {
            if (objects.elementAt(i).getName().equals(object) && objects.elementAt(i).isVisible())
                return objects.elementAt(i);
            if(objects.elementAt(i) instanceof Container){
                Container temp = (Container) objects.elementAt(i);
                Object obj = temp.findItem(object);
                if(obj != null)
                    return obj;
            }
        }
        for (HashMap.Entry<String, Exit> entry : exits.entrySet()) {
            if (entry.getValue().getName().equals(object) && entry.getValue().isVisible())
                return entry.getValue();
        }
        return null;
    }
    public Container findContainer(Object object) {
        for (int i = 0; i < objects.size(); i++) {
            if (objects.elementAt(i) instanceof Container) {
                return ((Container) objects.elementAt(i)).contains(object, (Container) objects.elementAt(i));
            }
        }
        return null;
    }
    public void addObject(Object object){
        objects.add(object);
    }
    public void addExit(String direction, Exit exit){
        exits.put(direction, exit);
    }

    public void removeObject(Object object){
      objects.removeElement(object);
    }
}
