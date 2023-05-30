import java.lang.*;
import java.util.*;

class Demo
{

    public void Display(int iNo)
    {
        for(int i  = 1 ; i<=iNo ; i++)
        {
            System.out.println(i);
        }
    }
}

class Gprogram298
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the Number");
        int Number = sobj.nextInt();

        Demo obj = new Demo();

        obj.Display(Number);

    }
}
