
class Demo
{
    public int i;
    public final int j=10;
    public final int k;

    public  Demo()
    {
        this.i = 10;
       // this.j = 90;
        this.k = 99;


    }
    public Demo(int i ,int k)
    {
        this.i = i;
        this.k = k;
    }
    public void fun()
    {
        i++;

    }


}
class Gprogram271
{
    public static void main(String arg[])
    { 
        Demo obj = new Demo();

     
        System.out.print(   obj.i);

    }
}
