//Code for product of two numbers through user input

package Basics;

import java.util.Scanner;

public class Product {
    public static void main(String[] args) {
        //Creating sc object in Scanner class
        Scanner sc = new Scanner(System.in);

        System.out.print("Value of a: ");
        float a = sc.nextFloat();

        System.out.print("Value of b: ");
        float b = sc.nextFloat();
        
        float p = a * b;
        System.out.println("The product of a and b is: " + p);
    }
}
