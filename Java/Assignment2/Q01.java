package Assignment2;
import java.util.Scanner;

public class Q01 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int radius = s1.nextInt();
        float pi = 3.14f;
        float area = pi * radius * radius;
        System.out.println("Area of Circle : "+ area);
    }
}
