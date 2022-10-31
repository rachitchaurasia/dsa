package com.rachit;
//Write a program to print whether a number is even or odd, also take input from the user.

import java.util.Scanner;

public class Evenodd {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter a number to check: ");
        int num = in.nextInt();
        if (num%2==0)
            System.out.println(num + " is an even number");
        else
            System.out.println(num + " is an odd number");
    }
}
