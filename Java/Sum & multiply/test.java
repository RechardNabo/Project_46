import java.util.Scanner;
public class test
{
    public static void main(String[]args)
    {
        try{
        int a,b,c,d;
        Scanner sc = new Scanner(System.in);
        System.out.println("please enter the first value");
        a = sc.nextInt();
        System.out.println("please enter the second value");
        b = sc.nextInt();
        System.out.println("please enter the third value");
        c = sc.nextInt();
        System.out.println("please enter the last value");
        d = sc.nextInt();
        }catch(NumberFormatException e){
            System.out.println("please enter numeric numbers [0,1,2,3,4,5,6,7,8,9]")
        }
        Math m = new Math(a,b,c,d);
        m.Sum();
        m.Multi();
    }
}
