#include <iostream>

using namespace std;

int max(int x,int y){
    return x>y?x:y;
}

int min(int x,int y){
    return x<y?x:y;
}

int main()
{
    int a=10,b=5;

    int (*fp)(int,int);

    fp=max;

    cout<<(*fp)(a,b);

    fp=min;

    cout<<(*fp)(a,b);

    return 0;
}
