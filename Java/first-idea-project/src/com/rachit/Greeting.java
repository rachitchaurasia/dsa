package com.rachit;

//Take name as input and print a greeting message for that particular name

import java.util.Scanner;

public class Greeting {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter your name: ");
        String name = in.next();
        System.out.println("Hey "+ name + ", have a nice day!!");
    }
}
