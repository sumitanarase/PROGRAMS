import java.lang.*;
import java.util.*;

import javax.swing.text.StyledEditorKit;

class Gprogram302
{
    public static void main(String a[])
    {
        int ans =0 , iNo1=0, iNo2 =0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first Number");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the Second Number");
        iNo2 = sobj.nextInt();

        try
        {
            ans = iNo1 / iNo2;

        }
        catch(ArithmeticException obj)
        {
            System.out.println("Exception occured :"+obj);
        }
        finally
        {
            sobj.close();
        }
        System.out.println("Division is :"+ans);
    }
}