#include <iostream>
#include <string>

using namespace std;

class Human{
private:
    string name;
    int age;
    bool is_human;

public:
    void getData(string str,int x,bool b){
        name=str;
        age=x;
        is_human=b;
    }

    void showData();
};

void Human::showData(){
    cout<<"Name :"<<name<<endl;
    cout<<"age :"<<age<<endl;
    cout<<"Yes? :"<<is_human<<endl;
}

int main()
{

    Human me;

    me.getData("Snehanko",21,true);

    me.showData();
    return 0;
}
