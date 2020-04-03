import java.util.Scanner;
public class TEST
{
    public static void main(String []args )
    {
        try{
        Scanner sc = new Scanner(System.in);
        System.out.println();
        int a ;
        int b ;
        System.out.print("please enter the first value ");
        a = sc.nextInt();
        System.out.println("please enter the second value ");
        b = sc.nextInt();
        }catch(NumberFormatException e){
            System.out.println("please enter numeric numbers []0,1,2,3,4,5,6,7,8,9");
        }
      MAX myx = new MAX(a,b);
      myx.Max();
    }
}
