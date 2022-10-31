package com.rachit;

import java.util.Scanner;

public class SimpleInterest {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the principal: ");
        float p = in.nextFloat();
        System.out.println("Enter the time (in years): ");
        float t = in.nextFloat();
        System.out.println("Enter the rate: ");
        float r = in.nextFloat();
        float si = (p*t*r)/100;
        System.out.println("The Simple interest for the provided data is: "+ si);

    }
}
