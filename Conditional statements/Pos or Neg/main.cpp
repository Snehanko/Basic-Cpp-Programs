#include <iostream>

using namespace std;

int checkNum(int x){
    if(x>=0){
        return 1;
    }
    else{
            return 0;
    }
}

int main()
{
    int a;

    cout<<"Enter a number to check its Pos or Neg"<<endl;
    cin>>a;

    if(checkNum(a)){
        cout<<"Positive"<<endl;
    }
    else{
        cout<<"Negative"<<endl;
    }
    return 0;
}
