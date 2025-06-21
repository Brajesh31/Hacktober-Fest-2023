package Assignment2;

import java.util.Scanner;

public class Q08 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int radius = s1.nextInt();
        double perimeter = 2 * 3.14 * radius;
        System.out.println("Perimeter of Circle : "+ perimeter);
    }
}
