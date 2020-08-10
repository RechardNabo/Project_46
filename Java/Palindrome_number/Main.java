import java.util.*;
public class Main
{
    public static void main(String[]args){
        int number;
        Scanner sc = new Scanner(System.in);
        System.out.println("\nPlease enter a number to check if is palindrom ");
        number = sc.nextInt();
        Palindrome_Num pal = new Palindrome_Num(number);
        pal.reverse_num();
    }
}
