import java.util.Scanner;

public class TypeCasting {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        //TypeCasting
        int num = (int)(65.26f);
        System.out.println(num);

        //Automatic type promotion in expression
        int a1 = 257;
        byte b1 = (byte)(a1); //257 % 256 = 1
        System.out.println(b1);

        byte a = 40;
        byte b = 50;
        byte c = 100;
        int d = (a * b) / c;
        System.out.println(d);

        int number = 'a';
        System.out.println(number);


        byte b2 = 42;
        char c2 = 'a';
        short s2 = 1024;
        int i2 = 50000;
        float f2 = 5.67f;
        double d2 = 0.1234;
        double result = (f2 * b2) + (i2 / c2) - (d2 * s2);
        // float + int - double = double
        System.out.println((f2 * b2) + " " + (i2 / c2) + " " + (d2 * s2));
        System.out.println(result);

    }
}
