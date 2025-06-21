package Assignment2;

import java.util.Scanner;

public class Q09 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int side = s1.nextInt();
        double perimeter = 3 * side;
        System.out.println("Perimeter Of Equilateral Triangle : "+ perimeter);
    }
}
