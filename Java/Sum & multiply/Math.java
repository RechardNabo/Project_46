
/**
 * Write a description of class Math here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Math
{
    private int a,b,c,d;
   public Math(int A , int B , int C , int D)
   {
       a=A;
       b=B;
       c=C;
       d=D;
    }
    
    public void Sum()
    {
        int answer = (a+b+c+d);
        System.out.println("answer of all sumed numbers is "+answer);
    }
    
    public void Multi()
    {
        int answer = (a*b*c*d);
        System.out.println("multipliction of all numbers is "+answer);
    }
}
