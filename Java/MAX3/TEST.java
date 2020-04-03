
import java.util.Scanner;
public class TEST
{
    public static void main()
    {
        try{
        Scanner sc = new Scanner(System.in);
        System.out.println();
        int a ;
        int b ;
        int c;
        System.out.println("please enter the first value");
        a = sc.nextInt();
        System.out.println("please enter the second value");
        b = sc.nextInt();
        System.out.println("please enter the third value ");
        c = sc.nextInt();
        }catch(NumberFormatException e){
            System.out.println("please enter only numbers [0,1,2,3,4,5,6,7,8,9]");
        }
      MAX3 myx = new MAX3(a,b ,c);
      myx.Max();
    }
}

