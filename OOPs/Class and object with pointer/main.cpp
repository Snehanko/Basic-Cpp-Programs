#include <iostream>

using namespace std;

class Rectangle{
    public:
        int length;
        int width;

        int perimeter(){
            return 2*(length+width);
        }

        int area(){
            return length*width;
        }
};

int main()
{
    //Object of a class-
    Rectangle r1;
    r1.length=10;
    r1.width=20;

    cout<<r1.perimeter()<<" "<<r1.area()<<endl;

    //Using Pointer object-
    Rectangle *ptr=&r1;
    cout<<ptr->perimeter()<<" "<<ptr->area()<<endl;

    //Using heap -
    Rectangle *r2=new Rectangle();
    r2->length=15;
    r2->width=25;

    cout<<r2->perimeter()<<" "<<r2->area()<<endl;


    return 0;
}
