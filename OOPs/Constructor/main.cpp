#include <iostream>

using namespace std;

class Data{
private:
    int a;
    int b;

public:
    int setValue(int x,int y)
    {
        a=x;
        b=y;
    }

    //Default Contructor
    Data(){
        setValue(10,20);
    }

    //Parameterized Constructor
    Data(int x, int y){
        setValue(x,y);
    }

    //Copy Constructor
    Data(Data &d){
        setValue(d.a,d.b);
    }

    void getData(){
        cout<<a<<" & "<<b<<endl;
    }

};

int main()
{
    Data d1;

    d1.getData();

    Data d2(25,35);

    d2.getData();

    Data d3(d2);

    d3.getData();

    return 0;
}
