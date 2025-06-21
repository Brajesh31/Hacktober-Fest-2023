package Assignment2;
import java.util.Scanner;

public class Q04 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int base = s1.nextInt();
        int height = s1.nextInt();
        float area = 0.5f * base * height;
        System.out.println("Area of Isosceles Triangle : "+ area);
    }
}
