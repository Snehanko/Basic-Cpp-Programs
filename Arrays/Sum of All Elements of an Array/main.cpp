#include <iostream>

using namespace std;

int main()
{
    int arr[]={4,6,8,10,12};

    int sum;

    for(int i:arr){
        sum+=i;
    }

    cout<<"Sum of All Elements of Array- "<<sum<<endl;
    return 0;
}
