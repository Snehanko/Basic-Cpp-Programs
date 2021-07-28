#include <iostream>

using namespace std;

class Test{
public:
    const int x=10;
    int y=20;

    void display()
    {
        x++;
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    Test t1;
    t1.display();
    return 0;
}
