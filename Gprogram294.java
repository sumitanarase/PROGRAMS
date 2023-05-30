import java.lang.*;

interface Circle
{
    float PI = 3.14f; 

    float CalculateArea(float Radius);
    float CalculateCircumfarance(float Radius);
}
class Area implements Circle
{
    public float CalculateArea(float Radius)
    {
        return(PI * Radius * Radius);
    }
   public float CalculateCircumfarance(float Radius)
    {
        return(2*PI*Radius);

    }

}
class Gprogram294
{
    public static void main(String arg[])
    {
        Area obj = new Area();
        float fRet = 0.0f;

        //Circle.PI = 6.14f;

        fRet = obj.CalculateArea(10.5f);
        System.out.println("Area is :"+fRet); ///  concact hot consider don dore jodne  value of PI is STring and aslo area is stringg + operator is concate each other

        fRet = obj.CalculateCircumfarance(10.5f);
        System.out.println("circumference  is :"+fRet);

    }

}