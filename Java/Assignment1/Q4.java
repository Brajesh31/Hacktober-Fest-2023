// 4) Take in two numbers and an operator (+, -, *, /) and calculate the value. (Use if conditions)
package Assignment1;

import java.util.Scanner;

public class Q4 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);

        System.out.print("Enter the first number: ");
        int num1 = s1.nextInt();
        System.out.print("Enter the second number: ");
        int num2 = s1.nextInt();
        System.out.print("Enter the operator (+, -, *, /): ");
        char operator = s1.next().charAt(0);

        if(operator == '+'){
            System.out.println(num1+num2);
        }
        else if(operator == '-'){
            System.out.println(num1-num2);
        }
        else if (operator == '*'){
            System.out.println(num1*num2);
        }
        else if (operator == '/'){
            System.out.println(num1/num2);
        }
        else{
            System.out.println("Wrong Operator");
        }
    }
}