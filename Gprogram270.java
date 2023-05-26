import java.lang.*;

class Demo
{

    int Add(int i,int j)
    {
        return i+j;
    }
    int Add(int i,int j,int k)
    {
        return i+j+k;
    }

    int Add(int i,int j,int k ,int l)
    {
        return i+j+k+l;
    }

}

class Gprogram270
{
    public static void main(String arg[])
    {
        Demo dobj = new Demo();

        int iret =0;

        iret = dobj.Add(10,20);
        System.out.println(iret);

        iret = dobj.Add(10,20,30);
        System.out.println(iret);
        iret = dobj.Add(10,20,40,30);
        System.out.println(iret);

    }
}