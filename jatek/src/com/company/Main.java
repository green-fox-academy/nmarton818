package com.company;
import java.util.Scanner;
import java.util.Vector;

public class Main {

    public static void main(String[] args) {

        Game game = new Game("Marci");
        Scanner scanner = new Scanner(System.in);
        String command;
        do{
            command = scanner.nextLine();
        }while (!game.playerInstruction(command));
    }
}
