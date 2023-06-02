import java.lang.*;
import java.util.*;

class Addition
{

    public int Addition(int iValue1 ,int iValue2)
    {
        int ans = 0;

        ans= iValue1 +iValue2;

        return ans;
    }
}

class Gprogram301
{
    public static void main(String a[])
    {
        int iNo1 = 0 ,iNo2 = 0;

        int iRet= 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first Number");

        iNo1 = sobj.nextInt();

        System.out.println("Enter the Second Number");
        iNo2 = sobj.nextInt();

        Addition obj = new Addition();

        iRet = obj.Addition(iNo1, iNo2);

        System.out.println("Addition is :"+iRet);




    }
}