import java.util.*;
public class test
{
    public static void main(String[]args)
    {
         Scanner sc = new Scanner(System.in);
        System.out.println("please enter a word to check if is palindome :");
        String word = sc.next();
         StringBuffer hold = new StringBuffer(word);
         StringBuffer test = new StringBuffer(word);
        
        Palindromes pl = new Palindromes(hold,test);
       
        
        
       
        pl.palindrome();
       
    }
}
