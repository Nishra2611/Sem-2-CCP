#include<iostream>
#include<vector>
using namespace std;
class calc
{
public:
    int add(int a,int b)
    {
        return a+b;
    }
    double add(double a,double b)
    {
        return a+b;
    }
    double add(int a,double b)
    {
        return a+b;
    }
};
int main()
{
    calc c;
    double results[3];
    int i1,i2,i3;
    double d1,d2,d3;
    cout<<"Enter two integers:"<<endl;
    cin>>i1>>i2;
    cout<<"Enter two double numbers:"<<endl;
    cin>>d1>>d2;
    cout<<"Enter one integer and one double number:"<<endl;
    cin>>i3>>d3;

    results[0]= c.add(i1,i2);
    results[1]= c.add(d1,d2);
    results[2]= c.add(i3,d3);
    for(int i=0;i<3;i++)
    {
        cout<<"Result of"<<i+1<<"="<<results[i];
        cout<<endl;
    }
    cout<<"24ce031";
    return 0;
}

