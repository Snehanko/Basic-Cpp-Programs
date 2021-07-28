#include <iostream>
#include <math.h>

using namespace std;

int exponentNumber(int x, int y){
    int z;
    z=pow(x,y);

    return z;
}

int main()
{
    int a,b;

    cout<<"Enter a number and the power of it -"<<endl;
    cin>>a>>b;

    cout<<exponentNumber(a,b);
    return 0;
}
