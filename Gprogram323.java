
class Demo
{
    public int i;
    public int j;

    public Demo()
    {
        this.i =11;
        this.j = 21;

        System.out.println("inside default constructor");

    }
    public void gun()
    {
        System.out.println("inside gun");
    }
}
class Gprogram323
{
    public static void main(String ar[])
    {
        Demo obj = new Demo();

        obj.gun();

    }
}