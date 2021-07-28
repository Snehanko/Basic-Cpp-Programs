#include <iostream>

using namespace std;

int main()
{
    int arr[]={12,3,8,5,11,30,17};

    int max=arr[0];

    for(int i=0;i<7;i++){
        if(max<=arr[i]){
            max=arr[i];
        }
    }

    cout<<"The Max Element From the array- "<<max<<endl;
    return 0;
}
