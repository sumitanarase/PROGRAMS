import java.lang.*;

class Base
{
    public void fun()
    {
        System.out.println("inside base fun");
    }
    public final void gun()
    {
        System.out.println("Base gun");
    }
}
class Derived extends Base
{
    public void fun()
    {
        System.out.println("Derived fun");
    }
   /*  public void gun()
    {
        System.out.println("Base gun");

    }*/
}

class Gprogram272
{
    public static void main(String arh[])
    {
        Derived dobj = new Derived();

        dobj.fun();
       // dobj.gun();

    }

}