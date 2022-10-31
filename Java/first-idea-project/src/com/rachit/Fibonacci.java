package com.rachit;

import java.util.Scanner;

//To calculate Fibonacci Series up to n numbers.
public class Fibonacci {
    static int fib(int n){
        if (n<=1)
            return n;
        return fib(n-1)+fib(n-2);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num= in.nextInt();
        for (int n=0;n<=num;n++){
            System.out.print(fib(n)+" ");
        }

    }
}
