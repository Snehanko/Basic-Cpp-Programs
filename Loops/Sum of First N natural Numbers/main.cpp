#include <iostream>

using namespace std;

int main()
{
    int n,sum=0;

    cout<<"Enter the Number upto which you want to find the sum"<<endl;
    cin>>n;

    for(int i=0;i<=n;i++){
            sum+=i;
    }

    cout<<"The Sum of numbers-"<<sum<<endl;

    return 0;
}
