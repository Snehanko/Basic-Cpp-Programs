#include <iostream>

using namespace std;

class Base{
public:
    void func1(){cout<<"func 1"<<endl;}
    void func2(){cout<<"func 2"<<endl;}
    void func3(){cout<<"func 3"<<endl;}
};

class Derived:public Base{
public:
    void func4(){cout<<"func 4"<<endl;}
    void func5(){cout<<"func 5"<<endl;}
};

int main()
{
    Base *p;
    p=new Derived();

    p->func1();
    p->func2();
    p->func3();

    /*p->func4());
    p->func5();*/

    return 0;
}
