#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    try{
        if(b==0)
            throw b;
        else{
            int result=a/b;
            cout<<"the Result is "<<result<<endl;
        }
    }
    catch(int e)
    {
        cout<<"Cannot be divided by "<<e<<endl;
    }
    return 0;
}
