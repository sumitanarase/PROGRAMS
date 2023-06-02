import java.lang.*;
import java.util.*;

import javax.swing.text.StyledEditorKit;

class AgeInvalid extends Exception
{
    public AgeInvalid(String str)
    {
        super(str);
    }
}

class Gprogram308
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter your age");
        int age = sobj.nextInt();

        try
        {
            if(age < 18)
            {
                throw new AgeInvalid("age is below 18");
            }
        }
        catch(AgeInvalid obj)
        {
            System.out.println("Inside catch");
            System.out.println(obj);
        }
    }
}