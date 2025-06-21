package Assignment2;

import java.util.Scanner;

public class Q11 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int l = s1.nextInt();
        int b = s1.nextInt();
        int perimeter = 2* (l + b);

        System.out.println("Perimeter of Rectangle: "+ perimeter);
    }
}
