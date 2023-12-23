package Basics;

import java.util.Scanner;

public class Sum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Value of a: ");
        int a = sc.nextInt();
        System.out.print("Value of b: ");
        int b = sc.nextInt();
        int sum = a+ b;

        System.out.println("The sum of a + b is: "+ sum);
    }
}

//Comments 
/*
 * Multi line
 * comments
 * in Java
 */