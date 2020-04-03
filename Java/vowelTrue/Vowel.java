
public class Vowel
{
    private String name;
    public Vowel(String Name)
    {
        name = Name;
        int value = name.length();
        if(value <=1)
        {
            if(name.equalsIgnoreCase("a")||name.equalsIgnoreCase("e")||name.equalsIgnoreCase("i")||name.equalsIgnoreCase("o")||name.equalsIgnoreCase("u")){
                System.out.println("True");
            }else{System.out.println("False");}
        }
        else{
            System.out.println("Not a Vowel");
        }
    }
    
}
