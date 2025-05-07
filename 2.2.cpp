#include<iostream>
using namespace std;
class student
{
    string name;
    int roll_no;
    int m[3];
public:
    student()
    {
        string name="No name";
        roll_no=0;
        m[0]=m[1]=m[2]=0;
    }
    student(string n,int no,int m1,int m2,int m3)
    {
        roll_no=no;
        name=n;
        m[0]=m1;
        m[1]=m2;
        m[2]=m3;
    }
    double average()
    {
        double avg=(m[0]+m[1]+m[2])/3.0;
        return avg;
    }
    void display()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no"<<roll_no<<endl;
        cout<<"Marks:"<<m[0]<<m[1]<<m[2]<<endl;
    }
};
int main()
{
    student students[3];
    double avg[3];
    for(int i=0;i<3;i++)
    {
        int no,m1,m2,m3;
        string n;
            cout<<"Enter student data"<<endl;
            cout<<"Name:";
            cin>>n;
            cout<<"Roll no.:";
            cin>>no;
            cout<<"Marks of 3 subject"<<endl;
            cin>>m1>>m2>>m3;
            students[i]=student(n,no,m1,m2,m3);
            students[i].display();
            avg[i]=students[i].average();
            cout<<"Average marks:"<<avg[i]<<endl;
        }
        cout<<"24ce031";
    }


