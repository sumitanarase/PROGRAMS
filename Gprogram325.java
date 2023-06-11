import java.lang.*;

class Base
{
    public int i;
    public int j;

    public void fun()
    {
        System.out.println("Inside fun");
    }
}
class Derived extends Base
{
    
    public void run()
    {

    
    super.fun();
    }
}

class Gprogram325
{
    public static void main(String arg[])
    {
        Derived dobj = new Derived();

        dobj.fun();

    }
}