#include <iostream>

using namespace std;

int main()
{
    int x=10;

    int *p;

    p=&x;

    cout<<"Value of X-"<<x<<endl;
    cout<<"Address of X-"<<&x<<endl;
    cout<<"Value of P-"<<p<<endl;
    cout<<"Address of P-"<<&p<<endl;
    cout<<"Value pointed by P-"<<*p<<endl;
    return 0;
}
