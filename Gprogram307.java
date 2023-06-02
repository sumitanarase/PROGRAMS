import java.lang.*;
import java.util.*;

import javax.swing.text.StyledEditorKit;

class Demo
{
    public int Division(int iNo1 , int iNo2) throws ArithmeticException
    {
        return iNo1/iNo2;
    }
}
class Gprogram307
{
    public static void main(String ar[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the second Number");
        int iNo2 =  sobj.nextInt();
        Demo dobj = new Demo();

        try
        {

            int iret = dobj.Division(iNo1, iNo2);
            System.out.println("Division is :"+iret);
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Inside catch");
            
        }
    }
}