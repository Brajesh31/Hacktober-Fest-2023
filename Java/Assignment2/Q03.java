package Assignment2;
import java.util.Scanner;

public class Q03 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int length = s1.nextInt();
        int breadth = s1.nextInt();
        float area = length * breadth;
        System.out.println("Area of Rectangle : "+ area);
    }
}
