#include <iostream>

using namespace std;

class Base{
public:
   virtual void func(){cout<<"Function of Base class"<<endl;}
};

class Derived:public Base{
public:
    void func(){cout<<"Function of Derived class"<<endl;}
};

int main()
{
    Base b;
    b.func();

    Derived d;
    d.func();

    Base *p=new Derived();
    p->func();//using virtual class we can call the function of derived class
    return 0;
}
