#include <iostream>

using namespace std;

class Complex{
    private:
        int real;
        int imag;

    public:
        Complex(int r=0,int i=0){
            real=r;
            imag=i;
        }

        friend Complex operator+(Complex , Complex);

        void showData(){
            cout<<"Real "<<real<<" & Imaginary "<<imag<<endl;
        }
};

 Complex operator +(Complex c1,Complex c2){
            Complex temp;

            temp.real=c1.real+c2.real;
            temp.imag=c1.imag+c2.imag;

            return temp;
        }

int main()
{
    Complex c1(2,4),c2(3,6);

    Complex c3;

    //Operator Overloading-
    c3=c1+c2;

    c3.showData();

    return 0;
}
