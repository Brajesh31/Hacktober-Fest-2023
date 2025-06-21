// 5) Take 2 numbers as input and print the largest number.
package Assignment1;

import java.util.Scanner;

public class Q5 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);

        System.out.println("Enter two numbers:");
        int num1 = s1.nextInt();
        int num2 = s1.nextInt();

        if(num1>num2){
            System.out.println(num1 + " is greater than " + num2);
        }
        else{
            System.out.println(num2 + " is greater than " + num1);
        }
    }
}
