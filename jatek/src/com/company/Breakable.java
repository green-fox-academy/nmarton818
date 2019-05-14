package com.company;

public class Breakable extends Exit {
    private boolean isBroken;

    public Breakable(String name, int keyNumber){
        super(name, keyNumber);
        this.isBroken = false;
    }
    public void breakExit(){
        this.isBroken = true;
        this.isOpen = true;
    }
    public boolean broken(){
        return this.isBroken;
    }
}
