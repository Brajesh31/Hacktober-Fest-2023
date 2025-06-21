// 8) To find out whether the given String is Palindrome or not.
package Assignment1;

import java.util.Scanner;

public class Q8 {
    public static void main(String[] args) {
        Scanner s1 = new Scanner(System.in);

        System.out.print("Enter a String: ");
        String str = s1.nextLine();

        boolean isPalindrome = true;

        for(int i=0; i<str.length()/2; i++){
            if(str.charAt(i) != str.charAt(str.length()-1-i)){
                isPalindrome = false;
                break;
            }
        }
        if(isPalindrome){
            System.out.println(str + " is Palindrome");
        }
        else{
            System.out.println(str + " is not Palindrome");
        }
    }
}
