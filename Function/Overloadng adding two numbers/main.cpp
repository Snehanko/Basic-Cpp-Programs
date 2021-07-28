#include <iostream>

using namespace std;

int add(int x, int y){
    return x+y;
}

int add(int a,int b, int c){
    return a+b+c;
}
int main()
{
    int a=5,b=6,c;
    c=add(a,b);
    cout<<"- "<<c<<endl;
    int d=add(a,b,c);
    cout<<"- "<<d<<endl;
    return 0;
}
