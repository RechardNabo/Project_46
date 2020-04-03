import java.util.*;
public class test
{
    public static void main (String[]args)
    {
        Scanner sc= new Scanner(System.in);
        System.out.print("please enter a name or string ");
        String name = sc.next();
     Length len = new Length(name); 
     len.Lengths();
     }
}
