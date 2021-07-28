#include <iostream>

using namespace std;


int main()
{
    int size,a;

    cout<<"Enter the size of array - "<<endl;
    cin>>size;

    int arr[size];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"Enter the element to be searched "<<endl;
    cin>>a;

    for(int i=0;i<size;i++){
        if(a==arr[i]){
            cout<<"Found Element "<<endl;
            return 0;
        }
    }

    return 0;
}
