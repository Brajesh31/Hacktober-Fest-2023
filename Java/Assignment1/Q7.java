// 7) To calculate Fibonacci Series up to n numbers.
package Assignment1;

import java.util.Scanner;

public class Q7 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int num1 = 0, num2 = 1;
        System.out.print("Enter Limit upto which Fibonacci Series you want: ");
        int n = s1.nextInt();

        for(int i=1;i<=n;i++){
            System.out.print(num1+" ");
            int next = num1 + num2;
            num1 = num2;
            num2 = next;
        }

    }
}
