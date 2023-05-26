import java.lang.*;

class Base
{
    public int i,j;
@Override
    public void fun()
    {
        System.out.println("Base fun");
    }
    public void gun()
    {
        System.out.println("Base gun");
    }
    public void sun()
    {
        System.out.println("Base sun");
    }
}
class Derived extends Base
{

    public int x ,y;

    public void fun()
    {
        System.out.println("DEr fun");
    }
    public void sun()
    {
        System.out.println("Der sun");
    }
    public void run()
    {
        System.out.println("Base run");
    }

}


class Gprogram269
{
    public static void main(String a[])
    {
        Base dobj = new Derived();

        dobj.fun();
        dobj.gun();
        dobj.sun();
      //  dobj.run();

    }
}