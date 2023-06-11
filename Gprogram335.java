import java.lang.*;
import java.util.Scanner;

class Gprogram335
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number :");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the number : ");
        int iNo2 = sobj.nextInt();

        int ans = 0;

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
        System.out.println("Ans is :"+ans);
    }
}