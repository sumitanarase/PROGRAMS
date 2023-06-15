import java.lang.*;
import java.text.NumberFormat.Style;


class Gprogram369
{
    public static void main(String arg[])
    {
        System.out.println("Number of command line arguments are :"+arg.length);

        System.out.println("First number is :"+arg[0]);
        System.out.println("Second Number is: "+arg[1]);

        int ans = Integer.parseInt(arg[0])+Integer.parseInt(arg[1]);

        System.out.println("Addition is :"+ans);


    }
}