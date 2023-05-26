import java.lang.*;

class Base
{
    public int i;
    public int j;

    public void fun()
    {
        System .out.println("Inside Base fun");
    }
}
class Derived extends Base
{
    public int x;
    public int y;

    public void gun()
    {
        System.out.println("inside der gun");
    }
}
class DerivedX extends Derived
{
    public int a;

    public void sun()
    {
        System.out.println("inside sun");
    }
}

class Gprogram268
{
    public static void main(String arg[])
    {
        DerivedX obj= new  DerivedX();
        obj.sun();


    }
}