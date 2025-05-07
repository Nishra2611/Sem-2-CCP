#include<iostream>
using namespace std;
class BankAccount
{
    char AccountHolderName[30];
    long int AccountNumber;
    double CurrentBalance;

public:
    void CreateAccount()
    {
        int choice;
       a: cout<<"Select your choice."<<endl<<"1]With no intial balance."<<endl<<"2]With intial balance."<<endl;
       cin>>choice;
        switch(choice)
        {
        case 1:
            {
                cout<<"Enter your name:";
                cin>>AccountHolderName;
                cout<<"Account number:";
                cin>>AccountNumber;
                break;
            }
        case 2:
            {
                cout<<"enter your name:";
                cin>>AccountHolderName;
                cout<<"Account number:";
                cin>>AccountNumber;
                CurrentBalance=3000;
                break;
            }
        default:
            {
                cout<<"Invalid choice"<<endl;
                goto a;
                break;
            }

        }
    }
    void DepositeCash(long int i)
    {
        long int DAmount;
        if(AccountNumber==i)
        {
            cout<<endl<<"Enter the amount that you want to deposite:";
            cin>>DAmount;
            CurrentBalance+=DAmount;
            cout<<endl<<"CurrentBalance"<<CurrentBalance;
        }
    }
    void WithdrawCash(long int i)
    {
        long int WAmount;
        if(AccountNumber==i)
        {
            cout<<endl<<"Enter the amount that you want to withdraw:";
            cin>>WAmount;
            CurrentBalance-=WAmount;
            cout<<endl<<"CurrentBalance"<<CurrentBalance;
        }
    }
    void DispalyAccountDetail(long int i)
    {
        if(AccountNumber==i)
        {
            cout<<endl<<"Account Holder Name:"<<AccountHolderName;
            cout<<endl<<"Your current balance:"<<CurrentBalance;
            cout<<endl<<"Account Number:"<<AccountNumber;
        }
    }

};

int main()
{
    BankAccount b[2];
    int Choice,i=0;
    cout<<"Select your choice."<<endl<<"1]Create New Account."<<endl<<"2]Deposite Cash."<<endl<<"3]Withdraw Cash."<<endl<<"4]Display Account Detail."<<endl<<"5]Exit"<<endl;
   b: cout<<"Enter your choice:";
    cin>>Choice;
    switch(Choice)
    {
    case 1:
        {
            b[i].CreateAccount();
            i++;
            break;
        }
    case 2:
        {
            long int i;
            cout<<"Enter your account number:";
            cin>>i;
            b[i].DepositeCash(i);
            break;
        }
    case 3:
        {
            long int i;
            cout<<"Enter your account number:";
            cin>>i;
            b[i].WithdrawCash(i);
            break;
        }
    case 4:
        {
            long int i;
            cout<<"Enter your account number:";
            cin>>i;
            b[i].DispalyAccountDetail(i);
            break;
        }
    case 5:
        {
            goto c;
            break;
        }
    default:
        {
            cout<<"Invalid choice!!!"<<endl;
            goto b;
            break;
        }
    }
    goto b;
    c:cout<<"24ce031
    return 0;
}
