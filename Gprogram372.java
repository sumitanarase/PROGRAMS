import java.lang.*;

class Demo
{}

class Gprogram372
{
    public static void main(String arg[])
    {
        Demo obj =  new Demo();

      Class cref = obj.getClass();
      System.out.println("class name of obj is :"+cref.getName());

      String str = "Marvellous ";
      Class cref1 = str.getClass();
      System.out.println("Class name of str is :"+cref1.getName());
    }
}