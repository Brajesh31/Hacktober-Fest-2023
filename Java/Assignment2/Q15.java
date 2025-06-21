package Assignment2;

import java.util.Scanner;

/*
Volume rectangular prism = (Area rectangle)⋅(height) = ((rectangle base)(rectangle height))⋅(prism height)
=lwh
*/
public class Q15 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int l = s1.nextInt();
        int b = s1.nextInt();
        int h = s1.nextInt();
        int area = l * b;
        double volume = area * h;

        System.out.println("Volume of Rectangular Prism: "+ volume);
    }
}
