import java.time.chrono.ThaiBuddhistChronology;

class Demo
{
    public int i;
    public static int j=11;

    public static void gun()
    {
        System.out.println("inside gun");

        System.out.println(j);

        
    }

}
class Gprogram324
{
    static
    {
        System.out.println("inside main  static");
    }
    public static void main(String arg[])
    {
        Demo.gun();

    }
}