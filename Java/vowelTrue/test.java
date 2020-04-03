import java.util.Scanner;
public class test
{
    public static void main(String[]args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("please enter a single charactor");
        String name = sc.next();
        Vowel vl = new Vowel(name);
        
    }
}
