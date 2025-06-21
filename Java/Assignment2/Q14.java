package Assignment2;

import java.util.Scanner;

public class Q14 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int r = s1.nextInt();
        int h = s1.nextInt();
        double volume = (3.14 * r * r * h) / 3;

        System.out.println("Volume of Right Circular Cone: "+ volume);
    }
}
