import java.lang.*;

class Demo
{

    public int x;
    public int y;

    Demo()
    {
        System.out.println("inside default constructor");

        this.x = 90;
        this.y= 21;

    }

    public void gun()
    {
        System.out.println("inside gun");
    }
}

class Gprogram290
{
    public static void main(String arg[])
    {
        Demo obj = new Demo();

        obj.gun();
        System.out.println(obj.x);
        System.out.println(obj.y);
    }

}