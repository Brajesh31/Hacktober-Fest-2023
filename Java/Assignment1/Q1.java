// 1) Write a program to print whether a number is even or odd, also take input from the user.
package Assignment1;

import java.util.Scanner;

public class Q1 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = s1.nextInt();

        if(number % 2 == 0){
            System.out.println("Even Number");
        }
        else{
            System.out.println("Odd Number");
        }
    }
}
