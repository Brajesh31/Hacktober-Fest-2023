// 2) Take name as input and print a greeting message for that particular name.
package Assignment1;

import java.util.Scanner;

public class Q2 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);

        System.out.print("Enter your name: ");
        String name = s1.nextLine();
        System.out.println("Hello! " + name);
    }
}
