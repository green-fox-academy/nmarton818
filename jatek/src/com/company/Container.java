package com.company;

import java.util.Vector;

public class Container extends Furniture {
    protected Vector<Object> objects;
    protected boolean isOpened;

    public Container(String name) {
        super(name);
        this.objects = new Vector<Object>();
        this.isOpened = false;
    }
    public void openContainer(){
        isOpened = true;
    }

    public void addObject(Object object) {
        this.objects.add(object);
    }

    public void removeObject(Object object) {
        this.objects.remove(object);
    }

    public Object findItem(String item){
        for(int i = 0; i < objects.size(); i++){
            if(objects.elementAt(i).getName().equals(item) && objects.elementAt(i).isVisible() && isOpened){
                return objects.elementAt(i);
            } if(objects.elementAt(i) instanceof Container && isOpened){
                Object obj = ((Container) objects.elementAt(i)).findItem(item);
                if(obj != null)
                    return obj;
            }
        } return null;
    }

    public void inspectObject() {
        if (objects.size() != 0 && isOpened) {
            System.out.print("Inside this " + this.name + " there are these things: ");
            for (int i = 0; i < objects.size(); i++) {
                System.out.print(objects.elementAt(i).name);
                objects.elementAt(i).reveal();
            }

            System.out.println("");
        } else if (objects.size() == 0 && isOpened) {
            System.out.println("This " + this.name + " is empty");
        } else if(!isOpened){
            System.out.println("A " + this.name);
        }

    }
}
