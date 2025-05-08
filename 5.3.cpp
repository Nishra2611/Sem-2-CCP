#include<iostream>
using namespace std;

class Point {
    float x, y;
public:

    Point() : x(0), y(0) {}
    Point(float a, float b) : x(a), y(b) {}

    void InputData(float a, float b) {
        x=a;
        y=b;
    }

    void DisplayData() {
        cout<<"(x,y) = ("<<x<<','<<y<<')';
    }

    Point operator-() {  // Point A = - Point B // B unchanged
        return Point(-x, -y);
    }

    Point operator+(Point A) {  // Point C = Point A + Point B // A & B unchanged
        return Point(x+A.x, y+A.y);
    }

    bool operator==(Point A) {  // if(Point A == Point B) // A & B unchanged
        if(x==A.x && y==A.y)
        return true;
        else
        return false;
    }
};

int main() {

    int choice=1;
    float X, Y;
    Point A, B, C;

    while(choice==1) {
        cout<<"\n\nEnter Point A:-";
        cout<<"\nX coordinate of A: ";
        cin>>X;
        cout<<"Y coordinate of A: ";
        cin>>Y;
        A.InputData(X, Y);
        cout<<"\nEnter Poiny B:-";
        cout<<"\nX coordinate of B: ";
        cin>>X;
        cout<<"Y coordinate of B: ";
        cin>>Y;
        B.InputData(X, Y);

        cout<<"\nOutput:";
        C = A + B;
        cout<<"\nA + B = ";
        C.DisplayData();
        C = -B;
        cout<<"\n-B = ";
        C.DisplayData();
        C = -A;
        cout<<"\n-A = ";
        C.DisplayData();
        if(A==B)
        cout<<"\nPoint A is equal to Point B";
        else
        cout<<"\nPoint A is not equal to Point B";

        cout<<"\n\nDo you want to perform operations again on different Points?\nEnter 1 for yes and 0 for no: ";
        cin>>choice;
    }
    cout<<"24ce031";
    return 0;
}
