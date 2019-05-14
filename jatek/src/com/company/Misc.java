package com.company;

public class Misc extends Carriable {
    private int keyNumber;
    public Misc(String name, int keyNumber){
        super(name);
        this.keyNumber = keyNumber;
    }
    public int getKeyNumber() {
        return keyNumber;
    }
}
