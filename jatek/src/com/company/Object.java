package com.company;

import java.util.Vector;

public class Object {
    protected String name;
    protected boolean visible;

    public Object(String name){
        this.visible = true;
        this.name = name;
    }
    public String getName(){
        return name;
    }
    public boolean isVisible(){
        return visible;
    }
    public void hide(){
        this.visible = false;
    }
    public void reveal(){
        this.visible = true;
    }
    public void inspectObject(){
        System.out.println(this.name);
    }

}
