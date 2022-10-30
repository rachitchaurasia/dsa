package com.rachit;

import java.util.Scanner;

public class Temperature {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter the temperature in C: ");
        float tempC= input.nextFloat();
        float tempF = (tempC * 9/5) + 32;

        System.out.println("The temperature in degree F is: " + tempF);
    }
}
