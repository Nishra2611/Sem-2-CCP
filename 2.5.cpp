#include<iostream>
#include<math.h>
using namespace std;

class LoanAccount
{
    int id,Tenuar;
    char name[30];
    int TotalLoanAmount;
    float AnnualInterestRate,EMI;

    void CalculateEMI()
    {

        EMI=(TotalLoanAmount*AnnualInterestRate*pow(1+AnnualInterestRate,Tenuar))/(pow(1+AnnualInterestRate,Tenuar)-1);
        cout<<"EMI:"<<EMI<<endl;
    }


public:
    void AddAccountData()
    {
        cout<<"Enter your account detail:"<<endl;
        cout<<"Id:";
        cin>>id;
        cout<<"Account Holder's Name:";
        cin>>name;
        cout<<"Total Loan Ammount:";
        cin>>TotalLoanAmount;
        cout<<"Annual Interest Rate:";
        cin>>AnnualInterestRate;
        AnnualInterestRate=AnnualInterestRate/12/100;
        cout<<"Tenuar:";
        cin>>Tenuar;
        Tenuar=12*Tenuar;


    }

    void DisplayDetail()
    {
        cout<<"Your loan account detail"<<endl;
        cout<<"ID:"<<id<<endl;
        cout<<"Account Holder's Name:"<<name<<endl;
        cout<<"Total Loan Ammount:"<<TotalLoanAmount<<endl;
        cout<<"Annual Interest Rate:"<<AnnualInterestRate<<endl;
        CalculateEMI();
    }
};

int main()
{
    LoanAccount A;
    A.AddAccountData();
    A.DisplayDetail();
    cout<<"24ce031";
    return 0;
}
