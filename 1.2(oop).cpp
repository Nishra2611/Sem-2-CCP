#include<iostream>
using namespace std;
class inventory
{
    private:
    int id;
    string name;
    int quantity,price;
    public:
      void add_Product()
        {
            cout<<"Enter id of product:";
            cin>>id;
            cout<<"Enter name of product:";
            cin>>name;
            cout<<"Enter quantity of product:";
            cin>>quantity;
            cout<<"Enter price of product:";
            cin>>price;
        }
        void update_quantity()
        {
            if(id==false)
            {
                cout<<"ERROR"<<endl;
            }
            else
            {
            cout<<"Enter new quantity:";
            cin>>quantity;
            }
        }
        void total()
        {
            int total;
            total=quantity*price;
            cout<<"Your total amount is:"<<total<<endl;
        }

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
            inv.add_Product();
            break;
        case 2:
           inv.update_quantity();
            break;
        case 3:
            inv.total();
            break;
        default:
            break;

        }
    }while(choice!=4);
}
