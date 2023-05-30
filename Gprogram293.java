import java.lang.*;

abstract class RBI
{
    public int Balance;
    public RBI()
    {
        this.Balance =0;

    }
    public void Credit(int Amount)
    {
        this.Balance = this.Balance + Amount;

    }
    public void Debit(int Amount)
    {
        this.Balance = this.Balance - Amount;
    }

    public abstract int calculate_intrest();

}
class SBI extends RBI
{
    public int AccountNumber;
    public int IFSC;

    public int calculate_intrest()
    {
        return 6;

    }
}
class PNB extends RBI
{
    public int AccountNumber;
    public int IFSC;

    public int calculate_intrest()
    {
        return 9;

    }
}

class Gprogram293
{
    public static void main(String arg[])
    {

    //RBI obj = new RBI();

   SBI sobj = new SBI();

   PNB nobj = new PNB();

   sobj.Credit(990);
   System.out.println(sobj.Balance);

    }
}