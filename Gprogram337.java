import java.lang.*;
import java.sql.SQLSyntaxErrorException;
import java.io.*;
import java.util.*;

import javax.lang.model.util.ElementScanner14;
import javax.swing.Icon;

class Number
{
    public int iNo ;

    public Number()
    {
        this.iNo = 0;
    }
    public int Addition(int iNo1 ,int iNo2)
    {
        int ans =0;
        ans = iNo1 +iNo2;

        return ans;
    }
    public void DisplayName(int iNo)
    {
         int iCnt = 0;

        for(iCnt = 1; iCnt<=iNo;iCnt++)
        {
            System.out.println("Marvellous");
        }
    }
    public void DisplayF(int iNo)
    {
        int iCnt =0;

        for(iCnt = 1 ; iCnt<=iNo ; iCnt++)
        {
            System.out.println(iCnt);
        }
    }
    public void DisplayB(int iNo)
    {
        int iCnt =0;

        for(iCnt =  iNo ; iCnt>=1 ; iCnt--)
        {
            System.out.println(iCnt);
        }
    }
    public void DisplayFactor(int iNo)
    {
        int iCnt =0;

        for(iCnt = 1 ; iCnt<=(iNo/2) ; iCnt++)
        {
            if((iNo % iCnt)==0)
            {
                System.out.println(iCnt);
            }
        }
    }
    public int SumFactor(int iNo1)
    {
        int iCnt = 0;
        int iSum = 0;
        for(iCnt =1 ; iCnt<=(iNo1/2);iCnt++)
        {
            if((iNo1 % iCnt) == 0)
            {
                iSum = iSum  + iCnt;
                
            }
        }
        return iSum;

    }
    public void DisplayNonFactor(int iNo)
    {
        int iCnt = 0;
      //  int iSum = 0;

        for(iCnt = 1 ; iCnt< (iNo);iCnt++)
        {
            if((iNo % iCnt) != 0)
            {
                System.out.println(iCnt);
            }
        }
    }
    public boolean CheckPerfect(int iNo)
    {
        int iRet =0;
       iRet =  SumFactor(iNo);

        if(iRet == iNo)
        {
            return true;


        }
        else
        {
            return false;
        }

    }
    public int MultFact(int iNo)
    {
        int iCnt =0;
        int iMult =1;

        for(iCnt = 1; iCnt<=(iNo/2); iCnt++)
        {
            if((iNo  % iCnt )==0)
            {
                iMult = iMult * iCnt;
            }

        }
        return iMult;
    }
    public void DecreaseFactor(int iNo)
    {
        int iCnt =  0 ;
         
        for(iCnt = (iNo/2);iCnt>=1;iCnt--)
        {
            if((iNo % iCnt) == 0)
            {
            System.out.println(iCnt);
            }
        }
    }
    public int SumNonFactors(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt< iNo ; iCnt++)
        {
            if((iNo % iCnt) != 0)
            {
                iSum = iSum+iCnt;
            }
        }
        return iSum;
    }

    public int DiffernceofFactors(int iNo)
    {
        int iCnt = 0;
        int iSum2=0;
        int iSum =0;
        
        for(iCnt =1;iCnt<=(iNo/2);iCnt++)
        {
            if((iNo % iCnt)==0)
            {
                
                iSum = iSum+iCnt;
            }
        }
        for(iCnt = 1 ; iCnt < iNo ; iCnt++)
        {
            if((iNo % iCnt)!= 0)
            {
                iSum2 = iSum2+iCnt;
                
            }

        }
        return iSum - iSum2;
    }
    public void PrintEven(int iNo)
    {
        int iCnt =0;

        for(iCnt = 1 ; iCnt<=iNo;iCnt++)
        {
            System.out.println(iCnt*2);
        }

    }
    public void EvenFactor(int iNo)
    {
        int iCnt =0;

        for(iCnt = 1 ;iCnt<=(iNo/2);iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                if((iCnt % 2)==0)
                {
                    System.out.println(iCnt);
                }
            }
        }
    }


    public boolean CheckPrime(int iNo)
    {
        int iCnt = 0;
        int iFcnt = 0;
        boolean bFlag =  true;

        for(iCnt = 2; iCnt<=(iNo/2);iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                bFlag= false;
                
            break;

               
            }
            
        }
        return bFlag;
        
        
    }
    public int CountFactor(int iNo)
    {
        int iCnt =0;
        int FactCnt =0;

        for(iCnt = 1; iCnt<=(iNo/2);iCnt++)
        {
            if((iNo % iCnt)==0)
            {
                FactCnt++;
            }
        }
        return FactCnt;
    }
    public boolean Check(int iNo)
    {
         int iDigit =0;
        int iDigCnt =0;
         int iTemp=0;
         int iSum=0;
         int iMult =0;

        iTemp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iDigCnt++;
            iNo = iNo/10;
        }
        iNo = iTemp;

        while(iNo !=0)
        {
            iMult = 1;
            iDigit = iNo %10;

            for(int iCnt =1;iCnt<=iDigCnt ; iCnt++)
            {
                iMult = iMult * iDigit;

            }
            iSum = iSum + iMult;

            iNo = iNo /10;


        }
        if(iSum == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
}

class Gprogram337
{
    public static void main(String a[]) throws Exception
    {
        int iret = 0;
        //int opertion = 0;
        InputStreamReader iobj = new InputStreamReader(System.in);
        BufferedReader bobj = new BufferedReader(iobj);
        System.out.println("Enter the Number :");
        int no = Integer.parseInt(bobj.readLine());
       // System.out.println("Enter the Number :");
     //   int no1 = Integer.parseInt(bobj.readLine());


        Number nobj = new Number();

        System.out.println("Select a Number which Operation you want perfrom :");
        System.out.println("1 : Perfrom addition on two number");
        System.out.println("2 : Display Name");
        System.out.println("3 : Display Forward ");
        System.out.println("4 : Display Backward ");
        System.out.println("5 : Display Factors ");
        System.out.println("6 : Sum Factors ");
        System.out.println("7 : Display Non Factors ");
        System.out.println("8 : Check Perfect ");
        System.out.println("9 : Multiplication Factors ");
        System.out.println("10 : reverse factors ");
        System.out.println("11 : Sum of Non Factors ");
        System.out.println("12 : Differnce of Non Factors ");
        System.out.println("13 : Display Even ");
        System.out.println("14 : Display Even factors ");
        System.out.println("15 : Check Number is prime or not");
        System.out.println("16 : Count Factors ");
        System.out.println("17 : Check Number is Armstrong or Not");

        int opertion = Integer.parseInt(bobj.readLine());
     //   int iValue1 =0,iValue2=0;

        switch (opertion) {
            case 1:
                //iret = nobj.Addition(no, no1);

                System.out.println("Addition is :"+iret);

                break;

                case 2:
                 nobj.DisplayName(no);

                break;

                case 3:
                 nobj.DisplayF(no);

                break;
                
                case 4:
                 nobj.DisplayB(no);

                break;

                case 5:
                 nobj.DisplayFactor(no);

                break;
                case 6:
                iret = nobj.SumFactor(no);
                System.out.println("Sum of factors are :"+iret);
                break;

                case 7:
                nobj.DisplayNonFactor(no);
                break;

                case 8:
                boolean bret = false;
                bret = nobj.CheckPerfect(no);
                if(bret ==  true)
                {
                    System.out.println("Number is Perfect");
                }
                else 
                {
                    System.out.println("Number is not prime ");
                }
                break;

                case 9:
                iret = nobj.MultFact(no);
                System.out.println("Multiplication is : "+iret);
                break;

                case 10:
                nobj.DecreaseFactor(no);

                break;
                case 11 :
                iret = nobj.SumNonFactors(no);
                System.out.println("Sum of Factors :"+iret);
                break;

                case 12 :
                iret = nobj.DiffernceofFactors(no);
                System.out.println("Diffrence of non factors :"+iret);
                break;

                case 13:
                nobj.PrintEven(no);
                break;

                case 14:
                nobj.EvenFactor(no);
                break;

                case 15:
                bret = nobj.CheckPrime(no);

                if(bret == true)
                {
                    System.out.println("Number is Prime :");
                }
                else 
                {
                    System.out.println("Number is Not Prime : ");
                }
                break;

                case 16 :
                iret = nobj.CountFactor(no);
                System.out.println("Factors are :"+iret);
                break;

                case 17 :
                bret = nobj.Check(no);
                if(bret == true)
                {
                    System.out.println("Number is ArmStrong :");
                }
                else 
                {
                    System.out.println("Number is Not Armstrong : ");
                }

                 break;


            default:
            System.out.println("Invalid Credentials ");
                break;
        }


    
       



    }
}