
import java.lang.*;

class Demo
{
    public int i;
    public int j;

    public Demo()
    {
        this.i =11;
        this.j =21;

    }
    public void fun()
    {
        System.out.println("inside fun");
    }
}
class Gprogram456
{
    public static void main(String a[])
    {
        Demo dobj = new Demo();

        dobj.fun();
        

    }


}