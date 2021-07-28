#include <iostream>

using namespace std;
int oddeven(int x){
    if(x%2==0){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int x;

    cout<<"Enter a number"<<endl;
    cin>>x;

    if(oddeven(x)){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
    return 0;
}
