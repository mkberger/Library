import java.util.Scanner;
public class HelloWorld{
     public static void main(String []args){
        Scanner keyboard = new Scanner(System.in);
        boolean continue_bool = true;
        int n = 1;
        char continue_char;
        while(continue_bool){
            System.out.print("Enter in N: ");
            n = keyboard.nextInt();
            long f = 1;
            while(n > 1){
                f = f * n;
                n = n - 1;
            }
            System.out.println("Factorial = " + Long.toString(f));
            System.out.print("Do you want to continue? (y/n): ");
            continue_char = keyboard.next().charAt(0);
            if(continue_char == 'n') continue_bool = false;
            System.out.println();
        }
            System.out.println("Have a good day");
     }
}
