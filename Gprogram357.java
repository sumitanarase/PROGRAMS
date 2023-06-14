import java.lang.*;
import java.io.*;

class Gprogram357
{
    public static void main(String ar[])
    {

        String str1 = "HELLO";

        String str2 = "HELLO";
        String str3 = new String("HELLO");

        if(str1 == str3)
        {
            System.out.println("String are same");
        }
        else
        {
            System.out.println("String are different");
        }
        if(str1.equals(str3))
        {
            System.out.println("Strings are same");
        }
        else
        {
            System.out.println("Strings are differents");
        }
    }
}