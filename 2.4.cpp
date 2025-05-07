#include<iostream>
#include<string.h>
using namespace std;

class stock
{
    int id,StockQuantity;
    char name[50];
    float price;

public:
    void AddItem()
    {
        cout<<"Enter the data of your stock"<<endl;
        cout<<"Id:";
        cin>>id;
        cout<<"Name of the product:";
        cin>>name;
        cout<<"Price of the product:";
        cin>>price;
        cout<<"Stock of the product:";
        cin>>StockQuantity;
    }
    void DisplayItem(int i)
    {
        cout<<"Product list"<<endl;


            cout<<"Product"<<i<<endl;
            cout<<"Id:"<<id<<endl;
            cout<<"Name of the product:"<<name<<endl;
            cout<<"Price of the product:"<<price<<endl;
            cout<<"Current Stock:"<<StockQuantity<<endl;

    }
    void SearchItem()
    {
        int id1;
        cout<<"Enter the id of the product that you want to search:";
        cin>>id1;
        if(id==id1)
        {
            cout<<"Id:"<<id1;
            cout<<"Name:"<<name;
            cout<<"price:"<<price;
            cout<<"Available Quantity:"<<StockQuantity;
        }
    }
    void AddStock()
    {
        int id2,SQuantity;
       cout<<"Enter the Id of your product:";
       cin>>id2;
       if(id==id2)
       {
           cout<<"enter the stock quantity:";
           cin>>SQuantity;
           StockQuantity+=SQuantity;
           cout<<"StockQuantity:"<<StockQuantity;
       }

    }
    void DeleteStock()
    {
        int id3,Squantity;
         cout<<"Enter the Id of your product:";
       cin>>id3;
       if(id==id3)
       {
           cout<<"enter the stock quantity:";
           cin>>Squantity;
           StockQuantity-=Squantity;
           cout<<"StockQuantity:"<<StockQuantity;
       }


    }
};

int main()
{
    stock s[3];
    int choice,i=1;
    a:cout<<"Select Your Choice:"<<endl<<"1.Add New Stock"<<endl<<"2.Display Existing Stock"<<endl<<"3.Search Stock."<<endl<<"4.Add Stock"<<endl<<"5.Remove Stock"<<endl<<"6.EXIT"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;

    switch(choice)
    {
    case 1:
        {
            s[i].AddItem();
            i++;
            break;
        }
    case 2:
        {
            for(i=1;i<=3;i++)
            {
                s[i].DisplayItem(i);
            }
            break;
        }
    case 3:
        {
            for(i=1;i<=3;i++)
            {
                s[i].SearchItem();
            }
            break;
        }
    case 4:
        {
            s[i].AddStock();
            break;
        }
    case 5:
        {
            s[i].DeleteStock();
            break;
        }
    default:
        {
            goto b;
            break;
        }

    }
    goto a;
    b: cout<<"24ce031";
    return 0;
}
