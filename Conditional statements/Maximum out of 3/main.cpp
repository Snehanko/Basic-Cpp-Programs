#include <iostream>

using namespace std;

int maxNum(int a,int b,int c){
    if(a>b){
        if(a>c){
            return a;
        }else{
            return c;
        }
    }else{
        if(b>c){
          return b;
        }else{
            return c;
        }
    }
}

int main()
{
    int a,b,c;

    cout<<"Enter Three Numbers to compare-"<<endl;
    cin>>a>>b>>c;

    cout<<"The Maximum amongst the three-"<<maxNum(a,b,c);
    return 0;
}
