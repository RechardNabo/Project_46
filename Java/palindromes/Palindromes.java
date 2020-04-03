import java.util.*;
public class Palindromes
{
    private StringBuffer word = new StringBuffer();
    private StringBuffer wordtest = new StringBuffer();
    public Palindromes(StringBuffer test,StringBuffer Tester)
    {
        word = test;
        wordtest = Tester;
    }
    
    public void palindrome()
    {
        word.append(word);
        wordtest.append(wordtest);
        word = word.reverse();
        if(wordtest == word)
        {
            System.out.println("True the word is palindrome ");
        }
        else{System.out.println("false");}
        
    }
}
