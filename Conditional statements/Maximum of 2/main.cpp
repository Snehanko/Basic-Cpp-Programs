#include <iostream>

using namespace std;
int findMax(int,int);

int main()
{
    int x,y;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;

    cout<<"The greatest Number amongst the two: "<<findMax(x,y);
    return 0;
}

int findMax(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
