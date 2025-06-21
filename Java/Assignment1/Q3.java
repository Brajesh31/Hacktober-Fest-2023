package Assignment1;
//  3) Write a program to input principal, time, and rate (P, T, R) from the user and find Simple Interest.
import java.util.Scanner;

public class Q3 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);

        System.out.println("Enter Principal, Time(in years) and Rate of Interest: ");
        int principal = s1.nextInt();
        int time = s1.nextInt();
        int rate = s1.nextInt();

        int simple_interest = (principal * time * rate)/100;
        System.out.println("Simple Interest: "+ simple_interest);
    }
}
