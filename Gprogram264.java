import java.lang.*;

class Demo
{
    public int i;
    public int j;

    public Demo()
    {
        this.i =0;
        this.j = 0;

        
    }
    public Demo(int x ,int y)
    {
        this.i = x;
        this.j = y;

    }
    public void fun()
    {
        System.out.println("inside fun");

    }
    public void gun()
    {
        System.out.println("inside gun");
    }
    
}
class Gprogram264
{
    public static void main(String arg[])
    {
        System.out.println("Inside main");

       Demo obj= new Demo();
       obj.fun();
       obj.gun();

       System.out.println(obj.i);
       System.out.println(obj.j);

       Demo obj1 =  new Demo(11,21);

       System.out.println(obj1.i);
       System.out.println(obj1.j);
       
       
    

    }
}