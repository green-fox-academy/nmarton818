package com.company;
import java.util.Scanner;
import java.util.Vector;

public class Main {

    public static void main(String[] args) {

        System.out.println("Please give me your name!");
        Scanner scanner = new Scanner(System.in);
        String instruction;
        instruction = scanner.nextLine();
        Game game = new Game(instruction);
        game.welcomeText();
        do{
            instruction = scanner.nextLine();
        }while (!game.playerInstruction(instruction));
    }
}
