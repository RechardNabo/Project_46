
public class Histagram
{
    private int [] mylist = new  int [3];
    private String chara = "*";
   public Histagram( int [] Mylist )
   {
        mylist = Mylist;
    }
    
    public void Draw()
    {
        for(int i = 0 ; i < mylist.length ;i++)
        {
            System.out.print("\n ");
            for(int z =0 ; z < mylist[i] ; z++)
            {
            System.out.print(chara);
            }

        }
    }
}
