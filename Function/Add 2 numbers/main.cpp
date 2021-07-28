#include <iostream>

using namespace std;

int addNumber(int a,int b){
    int c=a+b;
    return c;
}
int main()
{
    int x,y;

    cout<<"Enter Two Numbers -"<<endl;
    cin>>x>>y;

    cout<<"Result -"<<addNumber(x,y);
    return 0;
}
