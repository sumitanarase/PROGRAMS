import java.lang.*;
class Demo
{
    public int i;
    public int j;
    public static int k;

   

    public Demo()
    {
        System.out.println("inside constructor");
        this.i = 0;
        this.j= 0;
    }

    public Demo(int x ,int y)
    {
        System.out.println("inside parametised constructor"); 
    }

    public void fun()
    {
        System.out.println("inside non static");
        System.out.println(this.i);
        System.out.println(this.j);
        System.out.println(this.k);
        
    }
    public static void gun()
    {
        System.out.println("inside staitc gun");
        System.out.println(k);
    }
}
class Dem
{
static 
{
    System.out.println("inside static block");
 
}
}

class Gprogram265
{

    public static void main(String Arr[])
    {
        Demo.gun();
        System.out.println("Inside main");

        Demo obj;                           
        obj = new Demo();

       obj.fun();

        System.out.println(obj.i);
        System.out.println(obj.j);
         
    }
}