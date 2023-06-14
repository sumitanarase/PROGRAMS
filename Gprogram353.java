import java.lang.*;
import javax.naming.InitialContext;
import java.io.*;

interface XDigit
{
    public void DisplayDigit(int iNo);
    public int CountDigit(int iNo);
    public int SumDigit(int iNo);
    public void DisplayEven(int iNo);
    public int CountEven(int iNo);
    public int SumEven(int iNo);
    public boolean CheckPallindrome(int iNo);
    public int Reverse(int iNo);


}
class Digit implements XDigit
{
    public int iNo ; 

    public Digit()
    {
        this.iNo=0;
    }

    public void DisplayDigit(int iNo)
    {
        int iDigit =0;

        while(iNo != 0)
        {
            iDigit = iNo %10;
            System.out.println(iDigit);
            iNo = iNo/10;

        }
    }
    public int CountDigit(int iNo)
    {
        int iDigitCnt =0;
        int iDigit =0;

        if(iNo<0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iDigitCnt++;

            iNo = iNo/10;
        
        }
        return iDigitCnt;
    }

    public int SumDigit(int iNo)
    {
        int iDigit = 0;
        int iSum =0;

        while(iNo != 0)
        {
            iDigit = iNo %10;
            iSum = iSum + iDigit;

            iNo = iNo /10;
        }
        return iSum;
    }

    public void DisplayEven(int iNo)
    {
        int iDigit =0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 ==0)
            {
                System.out.println(iDigit);
            }
            iNo  = iNo /10;
        }
    }
    public int CountEven(int iNo)
    {
        int iDigit = 0;
        int EveCnt = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                EveCnt++;
            }
            iNo = iNo /10;
        }
        return EveCnt;
    }
    public int SumEven(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iNo % 2 ==0)
            {
                iSum = iSum + iDigit;
            }
            iNo = iNo/10;
        }
        return iSum;
    }
    public boolean CheckPallindrome(int iNo)
    {
        int iDigit =0;
        int iRev = 0;
        int iTemp = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        iTemp = iNo;
        while(iNo  != 0)
        {
            iDigit = iNo % 10;
            iRev = iRev *10 + iDigit;
            iNo = iNo /10;
        }

        if(iRev == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public int Reverse(int iNo)
    {
        int iDigit = 0;
        int iRev =0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iRev = iRev *10 + iDigit;

            iNo = iNo /10;
        
        }
        return iRev;
    }
    
}

class Gprogram353
{
    public static void main(String arg[]) throws IOException
    {
        InputStreamReader iobj =  new InputStreamReader(System.in);
        BufferedReader robj = new BufferedReader(iobj);

        System.out.println("Enter the Number :");
        int iValue = Integer.parseInt(robj.readLine());

        Digit dobj = new Digit();

       
        int iRet =0;
        boolean bret =false;
       // int opertion =0;

      
        System.out.println("Please Enter Number which opertion you want perfrom on digit");

        System.out.println("1- Display Digit");
        System.out.println("2- Count Digit");
        System.out.println("3- Sum Digit");
        System.out.println("4- Display Even Digit");
        System.out.println("5- Count Even");
        System.out.println("6- Sum Even");
        System.out.println("7- Pallindrome Number");
        System.out.println("8- Reverse Number");
        
        int opertion = Integer.parseInt(robj.readLine());

        switch (opertion) {
            case 1:
            dobj.DisplayDigit(iValue);       
                break;

                case 2:
                iRet = dobj.CountDigit(iValue);
                System.out.println("count of Digits are :"+iRet);
                 break;
                case 3:
                iRet = dobj.SumDigit(iValue);
                System.out.println("Sum of Digit is :"+iRet);
                break;
                
                case 4:
                dobj.DisplayEven(opertion);
                break;

                case 5:
                iRet = dobj.CountEven(iValue);
                System.out.println("Even number in number"+iRet);
                break;

                case 6:
                iRet = dobj.SumEven(iValue);
                System.out.println("sum of even digit is :"+iRet);
                break;

                case 7:
                bret = dobj.CheckPallindrome(iValue);
                if(bret == true)
                {
                    System.out.println("Number is Pallindrome:"+iValue);
                }
                else
                {
                    System.out.println("Number is Not Pallindrome:"+iValue);
                }
                break;
                case 8:
                iRet = dobj.Reverse(iValue);
                System.out.println("Reverse number is :"+iRet);
                break;


            
            default:
            System.out.println("Invalid Crendential");
                break;
        }









    }
}