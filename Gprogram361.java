import java.lang.*;

class Marvellous implements Runnable
{
    public void run()
    {
        for(int i = 0 ;i<=1000;i++)
        {
        System.out.println("inside thread :"+Thread.currentThread().getName());
        }
    }
}
class Gprogram361
{
    public static void main(String a[])
    {
        Marvellous mobj1 = new Marvellous();

        Thread t1 = new Thread(mobj1,"First");

        Marvellous mobj2 = new Marvellous();

        Thread t2 = new Thread(mobj2 , "Second");

        t1.start();
        t2.start();


    }
}