package com.rachit;

//Take in two numbers and an operator (+, -, *, /) and calculate the value. (Use if conditions)
import java.util.Scanner;

public class CalcOp {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the first number: ");
        double num1 = in.nextDouble();
        System.out.println("Enter the second number: ");
        double num2 = in.nextDouble();
        System.out.println("Enter the operation that you want to perform (+,-,*,/): ");
        char op = in.next().charAt(0);
        if(op == '+'){
            System.out.println(num1 + num2);
        } else if (op == '-') {
            System.out.println(num1 - num2);
        } else if (op == '*') {
            System.out.println(num1 * num2);
        } else if (op == '/') {
            System.out.println(num1 / num2);
        }
        else
            System.out.println("Wrong operation, try again");
    }
}
