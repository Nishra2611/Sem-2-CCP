#include<iostream>
using namespace std;
class account
{ public:
    string name;
    int acc_no;
    long int balance;
}ac;
int main()
{
   long int deposit,withdraw;
   cout<<"Enter you name:";
   cin>>ac.name;
   cout<<"Enter you account number:";
   cin>>ac.acc_no;
   cout<<"Enter the amount you want to deposit:";
   cin>>deposit;
   cout<<"Enter the amount you want to withdraw:";
   cin>>withdraw;
   if(withdraw<deposit)
   {
       ac.balance=deposit-withdraw;
       cout<<"Your balance is:"<<ac.balance<<endl;
   }
   else
   {
     cout<<"ERROR"<<endl;
   }
}
