import java.io.*;

class Gprogram311
{
    public static void main(String a[]) throws IOException
    {
        InputStreamReader  iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);

        System.out.println("Enter the String");
        String str = bobj.readLine();

        System.out.println("Enter Number");
        int no = Integer.parseInt(bobj.readLine());

        // dhudh ana parse basundhi 
        // string yenar parse sagal means int double float

        System.out.println("Enter float");
        float f = Float.parseFloat(bobj.readLine());

        System.out.println("Enter double");
        double d = Double.parseDouble(bobj.readLine());

        System.out.println("Data is :"+str);
        System.out.println("Data is :"+no);
        System.out.println("Data is :"+f);
        System.out.println("Data is :"+d);

    }
}