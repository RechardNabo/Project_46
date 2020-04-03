import java.util.Map;
import java.util.HashMap;
import java.util.Scanner;

public class test
{
    public static void main(String[]args)
    {
        Map<String,String> ToSwid = new HashMap<String,String>();
        System.out.println("Welcome to Dictionary of english to swedish language ");
        Scanner sc= new Scanner(System.in);
        System.out.println("Would you like to start enterying keys and  vslues in dictionary ?\n enter [q] when done :");
        String word = sc.next();
        while(!word.equalsIgnoreCase("q"))
        {
            System.out.println("please enter a key word ");
            word = sc.next();
            if(word.equalsIgnoreCase("q"))
            {break;}
            System.out.print("please enter a value of key ");
            String value = sc.next();
            if(word.equalsIgnoreCase("q"))
            {break;}
            ToSwid.put(word ,value );
        }
        
        if(ToSwid.size() >=1)
        {
            System.out.println("thank you for enter words");
            System.out.println("Would you like to check the words inside the dictionary ? no =n / yes = y : ");
            String re = sc.next();
            if(re.equalsIgnoreCase("y"))
            {
                
                System.out.print("please enter a key word you would like to check inside a dicrtionary : ");
                re = sc.next();
                Dictionary dr = new Dictionary(ToSwid,re);
                dr.Display();
            }
            else
            {System.out.println("thank you for your time ! ");}
        }
        else{System.out.println("you did not enter any info ");}
    }
   
}
