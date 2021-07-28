#include <iostream>

using namespace std;

class Rectangle{
private:
    int length;
    int breadth;

public:
    int getLength(){
        return length;
    }

    int getBreadth(){
        return breadth;
    }

    void setLength(int l)
    {
        length=l;
    }

    void setBreadth(int b)
    {
        breadth=b;
    }

    int area();
    int perimeter();
};

int Rectangle:: area(){
    return getLength()*getBreadth();
    }

int Rectangle:: perimeter(){
    return 2*(getLength()+getBreadth());
}

class Cuboid: public Rectangle{
private:
    int heigth;

public:
    Cuboid(int l=0,int b=0,int h=0)
    {
        setBreadth(b);
        setLength(l);
        setHeight(h);
    }

    void setHeight(int h)
    {
        heigth=h;
    }

    int getHeight(){
        return heigth;
    }


    int volume();
};

int Cuboid::volume(){
    return getBreadth()*getLength()*getHeight();
}

int main()
{
    Rectangle r1;

    r1.setLength(10);
    r1.setBreadth(20);

    cout<<"Length "<<r1.getLength()<<"Breadth "<<r1.getBreadth()<<endl;

    cout<<"Area "<<r1.area()<<endl;

    cout<<"Perimeter "<<r1.perimeter()<<endl;

    Cuboid c1(15,25,30);

    cout<<"Length "<<c1.getLength()<<"Breadth "<<c1.getBreadth()<<"Height "<<c1.getHeight()<<endl;

    cout<<"Volume "<<c1.volume()<<endl;
    return 0;
}
