import java.lang.*;
import java.util.*;

import javax.swing.text.StyledEditorKit;

class Gprogram304
{
    public static void main(String a[])
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of Elements");
        int size = sobj.nextInt();

        int Arr[] = new int[size];

        System.out.println("Enter the elements of array");

        for(iCnt = 0; iCnt< Arr.length ;iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }
        System.out.println("Elements if array are");

        for(iCnt =0; iCnt<Arr.length;iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }

    }
}