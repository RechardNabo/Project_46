
public class MAX3
{
    private int a ;
    private int b ;
    private int c;
    public MAX3(int A , int B , int C)
    {
        a = A;
        b = B;
        c = C;
    }
   
    public int Max()
    {
        if(a>b && a >c)
        {  System.out.println(a+" maximum value ");
            return a ;}
        else if(b>a && b > c)
        {  System.out.println(b+" maximum value ");
            return b;}
        else if (c>a && c > b)
        {  System.out.println(c+" is the maximum value ");
            return c;}
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
