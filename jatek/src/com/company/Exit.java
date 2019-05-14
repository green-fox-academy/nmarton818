package com.company;

import java.util.Map;

public class Exit extends Furniture {
    protected boolean isOpen;
    protected int keyNumber;

    public Exit(String name, int keyNumber){
        super(name);
        this.isOpen = false;
        this.keyNumber = keyNumber;
    }

    @Override
    public void inspectObject() {
        if(isOpen)
            System.out.println("This " + this.name + " is open.");
        else
            System.out.println("This " + this.name + " seems locked.");
        System.out.println("There is a small '" + this.keyNumber + "' painted on it.");
    }

    public int getKeyNumber() {
        return keyNumber;
    }

    public void open(){
        this.isOpen = true;
    }
    public void close(){
        this.isOpen = false;
    }
}
