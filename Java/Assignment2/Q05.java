package Assignment2;
import java.util.Scanner;

public class Q05 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int base = s1.nextInt();
        int height = s1.nextInt();
        float area = base * height;
        System.out.println("Area of Parallelogram : "+ area);
    }
}
