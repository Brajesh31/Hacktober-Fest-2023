package Assignment3_Functions;
// Define two methods to print the maximum and the minimum number
// respectively among three numbers entered by the user.

import java.util.Scanner;

public class Q1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter 1st Number: ");
        int a = in.nextInt();
        System.out.print("Enter 2nd Number: ");
        int b = in.nextInt();
        System.out.print("Enter 3rd Number: ");
        int c = in.nextInt();

        System.out.println("Minimum Number: "+Min(a, b, c));
        System.out.println("Maximum Number: "+Max(a, b, c));
    }
    static int Min(int a, int b, int c){
        if(a>b){
            if(b<c){
                return b;
            }
            else{
                return c;
            }
        }
        else {
            if (a < c) {
                return a;
            }
            else{
                return c;
            }
        }
    }

    static int Max(int a, int b, int c){
        if(a>b){
            if(a>c){
                return a;
            }
            else{
                return c;
            }
        }
        else {
            if (b > c) {
                return b;
            }
            else{
                return c;
            }
        }
    }
}
