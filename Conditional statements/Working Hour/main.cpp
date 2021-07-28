#include <iostream>

using namespace std;
int checkWorkHour(int x){
    if(x>=9&&x<=17){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int hr;

    cout<<"Enter the Hour you are thinking-"<<endl;
    cin>>hr;

    if(checkWorkHour(hr)){
        cout<<"The time is in Working Hour"<<endl;
    }else{
        cout<<"the is not in working Hour"<<endl;
    }
    return 0;
}
