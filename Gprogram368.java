import java.lang.*;
import java.security.cert.PKIXBuilderParameters;

class Employee
{
    public int EID;
    public String EName;
    public int ESalary;

    public Employee(int id , String str , int no)
    {
        this.EID= id;
        this.EName = str;
        this.ESalary = no;

    }
    public String toString(){//overriding the toString() method  
        return EID+" "+EName+" "+ESalary;  
       } 
  
}
class Gprogram368
{
    public static void main(String ar[])
    {
        Employee eobj = new Employee(11, "Sumit", 1100);


        System.out.println(eobj.toString());





    }
}