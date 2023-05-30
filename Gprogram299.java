import java.lang.*;
import java.util.*;

class Gprogram299
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the number");
        int iNo2 = sobj.nextInt();

        int ans = iNo1/iNo2;

        System.out.println("Division is "+ans);
        sobj.close();
    }
}