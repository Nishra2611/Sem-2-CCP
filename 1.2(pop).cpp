#include<iostream>
using namespace std;
struct inventory
{
    int id;
    string name;
    int quantity,price;

}inv;
int main()
{
    int choice;
    cout<<"Enter"<<endl<<"1. Add a new product"<<endl<<"2. Update quantity of existing product"<<endl<<"3. Get total value of all product"<<endl<<"4. exit"<<endl;
    do{
        cout<<"Enter you choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"Enter id of product:";
            cin>>inv.id;
            cout<<"Enter name of product:";
            cin>>inv.name;
            cout<<"Enter quantity of product:";
            cin>>inv.quantity;
            cout<<"Enter price of product:";
            cin>>inv.price;
            break;
        case 2:
            if(inv.id==false)
            {
                cout<<"ERROR"<<endl;
            }
            else
            {
            cout<<"Enter new quantity:";
            cin>>inv.quantity;
            }
            break;
        case 3:
            int total;
            total=inv.quantity*inv.price;
            cout<<"Your total amount is:"<<total<<endl;

            break;
        default:
            break;

        }
    }while(choice!=4);
}
