import java.lang.*;
import java.io.*;

class Gprogram313
{
    public static void main(String a[])
    {
        String str1="Hello";
        String str2 = "World";

        System.out.println(str1);
        System.out.println(str1.length());

        String  str3 = str1+str2;
        System.out.println(str3);
        String str4 = "Hello";

        String str5 = new String("Hello");
        String str6 = new String("World");
        String str7 = new String("Hello");
    }
}