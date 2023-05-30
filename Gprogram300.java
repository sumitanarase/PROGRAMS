import java.lang.*;
import java.util.*;

class Gprogram300
{
    public static void main(String a[])
    {
        int ans =0,iNo1=0,iNo2 =0;

        Scanner sobj = new Scanner(System.in);
        

        System.out.println("Enter the first number");
        iNo1 = sobj.nextInt();

        System.out.println("Enter the second number");
        iNo2 = sobj.nextInt();

        try
        {
            ans = iNo1 / iNo2;
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Exception occured as :"+obj);
        }
        finally
        {
            sobj.close();
        }
        System.out.println("Division is :"+ans);

        

        
    }
}