#include<iostream>
#include<vector>
using namespace std;
class student
{
protected:
    float marks;
    public:
        void setmark(float m)
        {
            marks=m;
        }
        virtual string grading()= 0;
};
class undergraduate: public student
{
public:
    string grading() override
    {
        if(marks>=85)return "A";
        else if(marks>=70)return "B";
        else if(marks>=55)return "C";
        else return "F";

    }
};

class postgraduate: public student
{
public:
    string grading() override
    {
        if(marks>=95)return "A";
        else if(marks>=80)return "B";
        else if(marks>=65)return "C";
        else return "F";

    }
};
int main()
{
    vector<student> stud;
    int n;
    cout<<"Enter number of students";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int type;
        cout<<"Enter the type of student(1=undergraduate,2=postgraduate):";
        cin>>type;
        float m;
        cout<<"Enter marks";
        cin>>m;
        student* s=nullptr;
        if(type==1)
        {
            s=new undergraduate();

        }
        else if(type==2)
        {
            s=new postgraduate();
        }
        else{cout<<"Invalid choice";}
        s->setmark(m);
        stud.push_back(s);

    }
     for(size_t i=0;i<student.size();i++)
        {
            cout<<"student"<<i+1<<"Grade:"<<grading(m);
        }

    return 0;
}
