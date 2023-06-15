import java.lang.*;

class Marvellous extends Thread
{
    public void run()
    {
        System.out.println("inside Thread"+currentThread().getName());

    }
}
class Gprogram363
{
    public static void main(String ar[])
    {
        Marvellous mobj = new Marvellous();

        Thread t1 = new Thread(mobj,"First");

        t1.start();


    }
}