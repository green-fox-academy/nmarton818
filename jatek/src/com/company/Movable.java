package com.company;

public class Movable extends Container {
    private boolean isMoved;
    private String hides;
    public Movable(String name, String hides){
        super(name);
        this.hides = hides;
        this.isMoved = false;
    }
    public void move(){
        this.isMoved = !isMoved;
    }
    public boolean ismoved(){
        return this.isMoved;
    }

    public String getHides() {
        return this.hides;
    }
}
