package Assignment2;

import java.util.Scanner;

public class Q10 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int a = s1.nextInt();
        int b = s1.nextInt();
        double perimeter = 2 * (a + b);
        System.out.println("Perimeter Of Parallelogram : "+ perimeter);
    }
}
