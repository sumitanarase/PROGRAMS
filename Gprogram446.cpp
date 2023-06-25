#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;


class SinglyCLL
{
    private:
        PNODE Head;
        PNODE Tail;
    
    public:
    SinglyCLL();
    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPos(int no , int iPos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
    void Display();
    int Count();

};

    SinglyCLL :: SinglyCLL()
    {
        Head = NULL;
        Tail =NULL;
    }
    void  SinglyCLL :: InsertFirst(int no)
    {
        PNODE newn = NULL;

        newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        if((Head == NULL) &&(Tail == NULL))
        {
            Head =newn;
            Tail = newn;
        }
        else
        {
            newn->next = Head;
            Head = newn;

        }
        Tail->next = Head;

    }
    void  SinglyCLL ::InsertLast(int no)
    {
        PNODE newn = NULL;

        newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        if((Head == NULL) &&(Tail == NULL))
        {
            Head =newn;
            Tail = newn;
        }
        else
        {
           Tail->next = newn;
           Tail = newn;

        }
        Tail->next = Head;

    }
    void  SinglyCLL :: InsertAtPos(int no , int iPos)
    {
        int iSize =0;

        iSize= Count();

        if((iPos<1)||(iPos>iSize+1))
        {
            return;
        }
        if(iPos ==1)
        {
            InsertFirst(no);
        }
        else if(iPos == iSize+1)
        {
            InsertLast(no);
        }
        else
        {
            PNODE newn = NULL;
            PNODE temp = Head;

            newn = new(NODE);
            newn->data =no;
            newn->next = NULL;

            for(int iCnt =1; iCnt<iPos-1 ;iCnt++)
            {
                temp= temp->next;

            }
           newn->next = temp->next;
           temp->next = newn;
        }

    }
    void  SinglyCLL :: DeleteFirst()
    {
        if((Head == NULL)&&(Tail==NULL))
        {
            return;
        }
        else if(Head == Tail)
        {
            delete Head;
            Head = NULL;
            Tail = NULL;

        }
        else
        {
            Head=Head->next;
            delete Tail->next;
            Tail->next = Head;
        }
        

    }
    void SinglyCLL :: DeleteLast()
    {
       

          if((Head == NULL)&&(Tail==NULL))
        {
            return;
        }
        else if(Head == Tail)
        {
            delete Tail;
            Head = NULL;
            Tail = NULL;

        }
        else
        {
             PNODE temp = Head;
            

            while(temp->next != Tail)
            {
                temp = temp->next;
            }
            delete Tail;
            Tail = temp;

            Tail->next = Head;

        }

    }
    void  SinglyCLL :: DeleteAtPos(int iPos)
    {
         int iSize = Count();

     if((iPos < 1) || (iPos > iSize))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iSize)
    {
        DeleteLast();
    }
    else
    {

            PNODE temp1 = Head;
            int iCnt = 0;

            for(iCnt = 1; iCnt < iPos-1; iCnt++)
            {
                temp1 = temp1->next;
            }
            PNODE temp2 =temp1->next;
            temp1->next = temp2->next;
            delete temp2;
            


    }

    }
    void  SinglyCLL :: Display()
    {
         if((Head == NULL)&&(Tail==NULL))
        {
            return;
        }
        PNODE temp = Head;
        do
        {
            cout<<"|"<<temp->data<<"|->";
            temp = temp->next;
        }while(temp != Head);
       
        cout<<endl;

    }
    int SinglyCLL :: Count()
    {
        int iCnt =0;
         PNODE temp = Head;

          if((Head == NULL)&&(Tail==NULL))
        {
            return 0 ;
        }
        do
        {
            iCnt++;
            temp = temp->next;
        }while(temp != Head);
       
        cout<<endl;
        return iCnt;
    }



int main()
{
   int iChoice = 1;
    SinglyCLL obj;
    int iValue = 0, ipos = 0, iRet = 0;

    while(iChoice != 0)
    {
        cout<<"Enter your choice : "<<endl;
        cout<<"1 : Insert First"<<endl;
        cout<<"2 : Insert Last"<<endl;
        cout<<"3 : Insert at position"<<endl;
        cout<<"4 : Delete First"<<endl;
        cout<<"5 : Delete Last"<<endl;
        cout<<"6 : Delete at position"<<endl;
        cout<<"7 : Display the data"<<endl;
        cout<<"8 : Count number of elements"<<endl;
        cout<<"9 : Terminate the application"<<endl;
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                obj.InsertFirst(iValue);
                break;

             case 2:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                obj.InsertLast(iValue);
                break;

             case 3:
                cout<<"Enter the value to insert"<<endl;
                cin>>iValue;
                cout<<"Enter the position : "<<endl;
                cin>>ipos;
                obj.InsertAtPos(iValue,ipos);
                break;

            case 4:
                obj.DeleteFirst();
               break;

           case 5:
                obj.DeleteLast();
               break;

            case 6:
                cout<<"Enter the position : "<<endl;
                cin>>ipos;
                obj.DeleteAtPos(ipos);
                break;

            case 7:
                obj.Display();
                break;

            case 8:
                iRet = obj.Count();
                cout<<"Number of elements are : "<<iRet<<endl;
                break;

            case 9:
                cout<<"Thank you for using the application"<<endl;
                iChoice = 0;
                break;

                default:
                    cout<<"Please enter proper choice\n";
                    break;
        }   // End of switch
    }// End of while


   

    return 0;
}

