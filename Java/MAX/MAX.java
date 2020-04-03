
public class MAX
{
    private int a ;
    private int b ;
    public MAX(int A , int B)
    {
        a = A;
        b = B;
    }
   
    public int Max()
    {
        if(a>b)
        {  System.out.println(a+" maximum value ");
            return a ;}
        else if(b>a)
        {  System.out.println(b+" maximum value ");
            return b;}
        else
        {  System.out.println(a+" they are equal ");
            return a;}
    }
    
    public void Max2()
    {
        if(a>b)
        { System.out.println(a+" maximum value ");
         }
        else if(b>a)
        {System.out.println(b+" maximum value ");
           }
        else
        {System.out.println(a+" they are equal ");
           }
    }
    
  
}
