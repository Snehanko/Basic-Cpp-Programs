#include <iostream>

using namespace std;

int main()
{
    int x=10;

    int &p=x;

    cout<<sizeof(x)<<endl;
    cout<<sizeof(p)<<endl;

    cout<<&x<<endl;

    cout<<&p<<endl;
    cout<<*(&p)<<endl;

    return 0;
}
