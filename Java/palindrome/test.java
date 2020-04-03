import java.util.*;
public class test
{
  public static void main(String[]args)
  {
      Scanner sc = new Scanner(System.in);
      System.out.println("please enter the word to check for palindrome ");
      String word;
      word = sc.next();
      Palindrome pl = new Palindrome(word);
      pl.palindrome();
  }
}
