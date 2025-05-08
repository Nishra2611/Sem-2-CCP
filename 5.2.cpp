#include<iostream>
using namespace std;

class Complex {
    float Real, Imaginary;
public:
    void InputData(float r, float i){
        Real=r;
        Imaginary=i;
    }

    Complex operator+(Complex &Input) {
        Complex Output;
        Output.Real = this->Real + Input.Real;
        Output.Imaginary = this->Imaginary + Input.Imaginary;

        return Output;
    }

    Complex operator-(Complex &Input) {
        Complex Output;
        Output.Real = this->Real - Input.Real;
        Output.Imaginary = this->Imaginary - Input.Imaginary;

        return Output;
    }

    Complex operator*(Complex &Input) {
        Complex Output;

        Output.Real = this->Real*Input.Real - this->Imaginary*Input.Imaginary;
        Output.Imaginary = this->Real*Input.Imaginary + this->Imaginary*Input.Real;

        return Output;
    }

    void Display() {
        cout<<Real<<" +i("<<Imaginary<<')';
    }
};

int main() {
    int choice=1;
    float Real, Img;
    Complex A, B, C;

    while(choice==1) {
        cout<<"\n\nEnter Complex Number A:-";
        cout<<"\nReal part of A: ";
        cin>>Real;
        cout<<"Imaginary part of A: ";
        cin>>Img;
        A.InputData(Real, Img);
        cout<<"\nEnter Complex Number B:-";
        cout<<"\nReal part of B: ";
        cin>>Real;
        cout<<"Imaginary part of B: ";
        cin>>Img;
        B.InputData(Real, Img);

        cout<<"\nOutput:";
        C = A + B;
        cout<<"\nA + B = ";
        C.Display();
        C = A - B;
        cout<<"\nA - B = ";
        C.Display();
        C = A*B;
        cout<<"\nA x B = ";
        C.Display();

        cout<<"\n\nDo you want to perform operations again on different complex numbers?\nEnter 1 for yes and 0 for no: ";
        cin>>choice;
    }
    cout<<"24ce031";
    return 0;
}
