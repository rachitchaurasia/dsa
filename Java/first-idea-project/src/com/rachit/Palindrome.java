package com.rachit;
//check if a number is a palindrome number or not
import java.util.Scanner;

public class Palindrome {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        int temp =num;
        int ans=0;
        while (temp>0){
            int rem = temp%10;
            temp/=10;
            ans = ans*10 + rem;
        }
        if (ans==num)
            System.out.println(ans+ " is a palindrome number");
        else
            System.out.println(ans+ " is not a palindrome number");
    }
}
