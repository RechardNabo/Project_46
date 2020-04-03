import java.util.Scanner;
public class Test
{
    public static void main(String[]args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("please insert a word you would like to translate ");
        String word = sc.next(); 
        StringBuilder hold = new StringBuilder(word);
        Translate tl = new Translate(hold);
        tl.translate();
        
    }
}
