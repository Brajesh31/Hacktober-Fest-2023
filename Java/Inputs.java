import java.util.Scanner;

public class Inputs {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Please Enter Some Input: ");
        int rollno = input.nextInt();
        System.out.println("Your roll number is "+ rollno);

        String name = input.next();
        System.out.println(name);
    }
}
