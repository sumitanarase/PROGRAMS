import java.lang.*;
import java.util.concurrent.ArrayBlockingQueue;

class Demo
{
    public int Arr[];

    public Demo(int size)
    {
        System.out.println("Allocating resource in constructor");
        this.Arr = new int[size];
    }
    protected void finalize()
    {
        System.out.println("Deallocating the resource in finalize");
        this.Arr=null;
    }
}
class Gprogram365
{
    public static void main(String a[])
    {
        Demo dobj = new Demo(10);

        dobj = null;
        System.gc();

        System.out.println("End of main");

    }
}