package Assignment2;

import java.util.Scanner;
import java.lang.Math;

public class Q07 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int a = s1.nextInt();
        double area = (Math.sqrt(3)/4) * Math.pow(a, 2);
        System.out.println("Area of Equilateral Triangle : "+ area);
    }
}
