import java.lang.*;

class Display
{
    int icnt =0;
   public void Display(int i)
    {

        for(icnt =0; icnt<5;icnt++)
        {
            System.out.println("Hello");
        }
       


    }
}
class Gprogram275
{
    public static void main(String a[])
    {
        Display obj = new Display();

        obj.Display(5);

    }
}