import java.lang.*;

import javax.lang.model.element.Name;
import javax.swing.plaf.synth.SynthStyle;

class Marvellous implements Runnable
{
    public void run()
    {
        System.out.println("inside thread : "+Thread.currentThread().getName());
    }
}
class Gprogram360
{
    public static void main(String arr[])
    {
        Marvellous mobj1 = new Marvellous();
        Thread t1 = new Thread(mobj1,"first");

        Marvellous mobj2 = new Marvellous();
        Thread t2 = new Thread(mobj2,"Second");

        t1.start();
        t2.start();
    }
}