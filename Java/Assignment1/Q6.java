// 6) Input currency in rupees and output in USD.
package Assignment1;

import java.util.Scanner;

public class Q6 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);

        double rupees = s1.nextDouble();
        double usd = rupees * 0.012;
        System.out.println(usd);
    }
}
