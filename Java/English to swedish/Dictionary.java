import java.util.*;
public class Dictionary
{
    private Map<String,String> ToSwid = new HashMap<String,String>();
    private String word;
    public Dictionary(Map<String,String> ToSwidd , String Word)
    {
        ToSwid = ToSwidd;
        word = Word;
    }
    
    public void Display()
    {
        System.out.print(ToSwid.toString());
        if(ToSwid.containsValue(word))
        {
            System.out.println(ToSwid.get(word));
        }
        else
        {
            System.out.println("thats good thanks for your time ");
        }
        
    }
    
    
}
