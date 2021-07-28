#include <iostream>

using namespace std;

class Student{
private:
    int roll;
    int age;

public:
    void setData(int age,int roll){
        this->age=age;
        this->roll=roll;
        admin++;
    }

    void showData(){
        cout<<"Roll "<<roll<<" & Age"<<age<<endl;

    }

    static int admin;

    static int getAdmin(){
        return admin;
    }
};

int Student::admin=1;

int main()
{
    Student s1;
    s1.setData(21,192);

    s1.showData();
    cout<<"Admission Number "<<s1.getAdmin<<endl;
    return 0;
}
