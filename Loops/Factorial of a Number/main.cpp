#include <iostream>

using namespace std;

int main()
{
    int n,fact=1;

    cout<<"Enter a number you want to find a fact"<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){

        fact*=i;
    }

    cout<<"The factorial of the number "<<fact<<endl;
    return 0;
}
