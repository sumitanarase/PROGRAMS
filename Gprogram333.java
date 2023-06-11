
import java.lang.*;

interface Circle
{
    float PI = 3.14f;

    float Calculate_Area(float Radius);
}
class Area implements Circle
{
    public float Calculate_Area(float Radius)
    {
        return(PI * Radius *Radius);

    }
}

class Gprogram333
{
    public static void main(String a[])
    {
        Area obj = new Area();
        float fRet = 0.0f;

        fRet = obj.Calculate_Area(10);

        System.out.println("Area is : "+fRet);



    }
}