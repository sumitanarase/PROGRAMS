import java.lang.*;

class Base
{
    public int i;
    public int j;

    public Base()
    {
        System.out.println("Inside Base constructor");

    }
    public void fun()
    {
        System.out.println("inside base fun");
        
    }
    public void fun(int x)
    {
        System.out.println("inside base fun eith parametr");
    }
    public void gun()
    {
        System.out.println("inside base gun");
    }


}
class Derived extends Base
{
    public int x;
    public int y;

    public Derived()
    {
        System.out.println("Inside dervied constructor");

    }
    public void sun()
    {
        System.out.println("inside der sun");
    }


}

class Gprogram266
{
    static
    {
        System.out.println("Inside static block");
    }
    public static void main(String arg[])
    {
        System.out.println("inside main");

        Derived dobj = new Derived();

        dobj.fun();
        dobj.gun();
        dobj.sun();
        dobj.fun(0);


    }
}