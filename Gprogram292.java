import java.lang.*;

class Base
{
    public int x;
    public int y ;


    public void fun()
    {
        System.out.println("inside gun");
        this.x=11;
        this.y = 21;

    }
    public void gun()
    {
        System.out.println("inside gun");

    }
}
class Dervied extends Base
{
    public int j;
    public int k;

    public void run()
    {
        System.out.println("inside fun");

        fun();
        gun();

    }

}

class Gprogram292
{
    static
    {
        System.out.println("inside stativ");

    }
    public static void main(String arg[])
    {
        Dervied dobj = new Dervied();

        dobj.run();

    }
}