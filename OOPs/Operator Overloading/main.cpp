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

        Complex operator +(Complex c){
            Complex temp;

            temp.real=real+c.real;
            temp.imag=imag+c.imag;

            return temp;
        }

        void showData(){
            cout<<"Real "<<real<<" & Imaginary "<<imag<<endl;
        }
};

int main()
{
    Complex c1(2,4),c2(3,6);

    Complex c3;

    //Operator Overloading-
    c3=c1+c2;

    c3.showData();

    return 0;
}
