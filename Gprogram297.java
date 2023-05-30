import java.lang.*;
import java.util.*;

class Gprogram297
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your name");
        String name = sobj.nextLine();

        System.out.println("Please enter your age");
        int age = sobj.nextInt();

        System.out.println("Please enter your percenage");
        float percentage = sobj.nextFloat();

        System.out.println(" your name: " +name);
        System.out.println(" your age :" +age);
        System.out.println("your percentage :" +percentage);

        sobj.close();


    }
}