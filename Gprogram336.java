import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.lang.*;

class Gprogram336
{
    public static void main(String a[]) throws Exception
    {

        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        System.out.println("Enter string :");
        String str = bobj.readLine();

        System.out.println("Enter the Number :");
        int no = Integer.parseInt(bobj.readLine());

        System.out.println("String is "+str);
        System.out.println("Number is :"+no);


    }
}