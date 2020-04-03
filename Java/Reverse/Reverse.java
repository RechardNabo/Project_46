import java.util.*;
public class Reverse
{
    private String word;
    public Reverse(String Word)
    {
        word =Word;
    }
    
    public void reverse()
    {
    int Length = word.length();
    String reverse ="";
    for(int i = Length-1 ; i >= 0 ;i--)
    {
       reverse = reverse+word.charAt(i);
    }
    System.out.println(reverse);
     }
}
