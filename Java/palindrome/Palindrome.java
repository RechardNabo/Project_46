import java.util.*;
public class Palindrome
{
    private String word;
    private String reverse = "";
    public Palindrome(String Word)
    {
        word =Word;
    }
    public void palindrome()
    {
    int Length = word.length();
    for(int i = Length-1 ; i >= 0 ;i--)
    {
        reverse = reverse+word.charAt(i);
    }
    if(word.equalsIgnoreCase(reverse))
    {
        System.out.println("true it is palindrome  "+reverse);
    }
      else{System.out.println("false its not !!!! "+reverse);}
    
     }
}
