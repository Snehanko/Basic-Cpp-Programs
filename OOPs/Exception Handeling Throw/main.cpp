#include <iostream>

using namespace std;

class myException
{
    public:
        myException(){
            cout<<"Exception from class"<<endl;
        }
};

int division(int x,int y)throw(myException)
{
    if(y==0)
        throw myException();
    else{
        int result=x/y;
        cout<<"the Result is "<<result<<endl;
    }
}

int main()
{
    int a,b;
    cin>>a>>b;
    try{
        division(a,b);
    }
    catch(myException e)
    {
        cout<<"Cannot be divided by "<<endl;
    }
    return 0;
}
