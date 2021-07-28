#include <iostream>

using namespace std;

int main()
{
    int a[]={1,2,3,4,5,6};

    /*for(int i=0;i<6;i++){
        cout<<a[i]<<endl;
    }*/

    int *p=a;

    //cout<<p<<endl;

    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;

    /*for(int i=0;i<6;i++){
        cout<<p[i]<<endl;
    }*/
    return 0;
}
