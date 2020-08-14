
public class Palindrome_Num
{
    int number , n , rev; 
    public Palindrome_Num(){
     }
    
    public Palindrome_Num(int number){
        this.number = number;
    }
    
     public void reverse_num(){
        n = this.number;
        while(n !=0x00){
            rev = (rev * 0x0A) +(n % 0x0A);
            n/=0x0A;
         }
         if(this.number == rev){
            System.out.printf("\nThe number is a palindrom : %d ",this.number);
        }
         else{
         System.out.printf("\nThe number is not palindrome : %d ", this.number);
         }
    
     }
    
}
