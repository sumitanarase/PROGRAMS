import java.lang.*;

abstract class RBI 
{
    public int Balance;

    public RBI()
    {
        this.Balance=0;
    }
    public void Credit(int Amount)
    {
        this.Balance =  this.Balance + Amount;
    }
    public void Debit(int Amount)
    {
        this .Balance =  this.Balance - Amount;
    }

    public abstract int CalculateIntrest();
}
class PNB extends RBI
{
    public int accountNumber;
    public int IFSC;

    public int CalculateIntrest()
    {
        return 6;
    }
}
class SBI extends RBI
{
    public int accountNumber;
    public int IFSC;

    public int CalculateIntrest()
    {
        return 7;
    }
}
class Gprogram273
{
    public static void main(String ar[])
    {
        SBI sobj = new SBI();
        PNB pobj = new PNB();                                                     

        sobj.Credit(1000);
        sobj.Debit(10);

        System.out.println(sobj.Balance);

    }
}