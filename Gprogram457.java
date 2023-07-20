import java.lang.*;

import javax.swing.plaf.synth.SynthTextAreaUI;

class Demo
{
    public int i;
    public static int j;

    public static void gun()
    {
        System.out.println("inside static gun");

        j = 11;
        System.out.println(j);
    }
}

public class Gprogram457 {

    static
    {
        System.out.println("inside static main");
    }

    public static void main(String a[])
    {
        Demo.j=10;
        Demo.gun();

    }
    
}
