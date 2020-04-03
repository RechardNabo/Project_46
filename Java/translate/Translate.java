import java.util.*;
public class Translate
{
   // Stringbuilder modified during runtime
    StringBuilder myword = new StringBuilder();
    public Translate(StringBuilder My)
    {
        myword = My;
    }
    public void translate()
    {
        for(int i = 1 ; i < myword.length();i+=2)
        {
           myword.insert(i,"0");
        }
        System.out.println("new translated word "+myword);
    }
    
}
