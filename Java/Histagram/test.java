import java.util.*;
public class test
{
    public static void main(String [] args)
    {
        Scanner sc = new Scanner(System.in);
        try{
        int a,b,c;
        System.out.println("please enter the first data to draw a histagram ");
        a = sc.nextInt();
        System.out.println("please enter the second data to draw a histagram ");
        b = sc.nextInt();
        System.out.println("please enter the last data to draw a histagram ");
        c = sc.nextInt();
        }catch(NumberFormatException e){
            System.out.println("please enter numeric numbers [0,1,2,3,4,5,6,7,8,9]");
        }
        int [] alist = {a,b,c};
        Histagram ht = new Histagram(alist);
        ht.Draw();
    }
}
