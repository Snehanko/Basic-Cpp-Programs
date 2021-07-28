#include <iostream>

using namespace std;

void swap(const int &x, int &y)//'const' keyword allow us only to read
{
    int temp;
    temp=x;
    x=y;
    y=temp;

    cout<<x<<" "<<y<<endl;
}

int main()
{
    int a,b;
    cin>>a>>b;

    swap(a,b);

    return 0;
}
