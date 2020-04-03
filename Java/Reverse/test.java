import java.util.*;
public class test
{
    public static void main(String[]args)
    {
        Scanner sc = new Scanner(System.in);
        String word;
        System.out.println("please enter the word you would like to reverse ");
        word = sc.next();
        Reverse rs = new Reverse(word);
        rs.reverse();
    }
}
