//9) To find Armstrong Number between two given number.
//3**3 + 7**3 + 1**3 = 371
package Assignment1;

import java.util.Scanner;

public class Q9 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);
        int num1 = s1.nextInt();
        int num2 = s1.nextInt();

        for(int i = num1; i <= num2; i++){
            int digits = 0, number = i, result =0;

            while (number !=0 ){
                digits++;
                number /= 10;
            }

            number = i;
            while (number !=0){
                int remainder = number % 10;
                result += Math.pow(remainder, digits);
                number /= 10;
            }

            if (result == i){
                System.out.print(i + " ");
            }
        }
    }
}
