#include<iostream>
#include<vector>
using namespace std;
class salary
{
 string name;
 double salry;
 double bonus;
 double tsalary;
 public:
     inline void details()
     {
     cout<<"please enter your name:"<<endl;
     cin>>name;
     cout<<"enter your basic salary:"<<endl;
     cin>>salry;
     cout<<"enter your bonus point of the month:"<<endl;
     cin>>bonus;
    }
int calc(){
         tsalary=salry+(bonus*100);
     return tsalary;
     }
     void display(){
     int n;
     n=calc();
     cout<<"Your total salary of the month is :"<<n<<endl;
     }
};

int main(){
salary e1;
e1.details();
e1.calc();
e1.display();
cout<<"24ce031";
}
