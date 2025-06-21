package Assignment2;

import java.util.Scanner;

public class Q06 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        //p and q are diagonals
        int p = s1.nextInt();
        int q = s1.nextInt();
        float area = 0.5f * p * q;
        System.out.println("Area of Rhombus : "+ area);
    }
}
