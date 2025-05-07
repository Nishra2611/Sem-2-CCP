#include<iostream>
using namespace std;
class rectangle
{
    private:
    int length, breadth,area,perimeter;
    public:
        void get_data()
        {
            cout<<"Enter the length of rectangle:";
            cin>>length;
            cout<<"Enter the breadth of rectangle:";
            cin>>breadth;
        }
        void area_rectangle()
        {
            area=length*breadth;

        }
        void peri()
        {
            perimeter=2*(length+breadth);

        }
        void change()
        {
            get_data();
           area_rectangle();
           peri();
        }
        void display()
        {
            cout<<"Area:"<<area<<"Perimeter:"<<perimeter<<endl;
        }

};
int main()
{
    int n,i,no;
    char choice;
    cout<<"How many reactangles you want to find area and perimeter of?";
    cin>>n;
    rectangle r[n];
    for(i=0;i<n;i++)
    {
        r[i].get_data();
        r[i].area_rectangle();
        r[i].peri();
    }
    cout<<"Do you want to change any value(y/n):";
    cin>>choice;
    if(choice=='y')
    {
        cout<<"Enter which number rectangle you want to change";
        cin>>no;
        r[no].change();
        for(i=0;i<n;i++)
        {
            r[i].display();
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            r[i].display();
        }
    }
    cout<<"24ce031";
}
