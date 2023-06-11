import java.lang.*;

final class Base
{
    public void fun()
    {
        System.out.println("inside fun");
    }

}
class Derived
{
    public Base bobj = new Base();
    
    public void gun()
    {


        System.out.println("inside gun");
    }
}

class Gprogram326
{
    public static void main(String arg[])
    {
        Derived dobj = new Derived();

        dobj.bobj.fun();

    }
}