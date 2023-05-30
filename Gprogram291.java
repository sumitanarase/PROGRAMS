import java.lang.*;
import java.time.chrono.ThaiBuddhistChronology;

import javax.swing.text.StyledEditorKit;

class Demo
{
    public int x;
    public int y;
    public static int z;

    static 
    {
        System.out.println("inside satatic");
        z =11;

    }

    public void gun()
    {
        System.out.println("inside static");
        this.x = 21;
        this.y = 52;

    }
    public static void fun()
    {
        System.out.println("inside static");

        System.out.println(z);
    }
}

class Gprogram291
{
    public static void main(String a[])
    {
       obj.gun();

    }
}