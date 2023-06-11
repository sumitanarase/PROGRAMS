import java.lang.*;

abstract class RBI
{
    public int Balance;

    public RBI()
    {
        this.Balance = 0;
    }
    public void credit(int amount)
    {
        this.Balance = this.Balance +amount;
    }
    public void debit(int amount)
    {
        this.Balance = this.Balance - amount;
    }
    public abstract int calculate_Intrest();
}
class SBI extends RBI
{
    public int account_number;

    public int calculate_Intrest()
    {
        return 6;
    }
}
class Gprogram332
{
    public static void main(String arg[])
    {
        SBI sobj = new SBI();

        sobj.credit(1000);
        sobj.debit(800);

        System.out.println(sobj.Balance);

    }
}