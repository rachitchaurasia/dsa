package com.rachit;

import java.util.Scanner;

public class Inputs {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Please enter your age: ");
        int age = input.nextInt();
        System.out.println("Your are "+ age + " years old.");
    }
}
