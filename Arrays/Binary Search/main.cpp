#include <iostream>

using namespace std;

int binarySearch(int arr[100],int size,int first,int last,int key){
    for(int i=0;i<size;i++){
        int mid=(first+last)/2;

        if(key==arr[mid]){
            cout<<"Element found"<<endl;
        }
        else if(key>arr[mid]){
            binarySearch(arr,size,(mid+1),last,key);
        }
        else if(key<arr[mid]){
            binarySearch(arr,size,first,mid,key);
        }

        else{
            cout<<"Element Not Found"<<endl;
        }


        return 0;
    }
}

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

    binarySearch(arr,size,0,(size-1),a);

    return 0;
}
