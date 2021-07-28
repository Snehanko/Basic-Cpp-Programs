#include <iostream>
#include <fstream>

using namespace std;

class Student{
public:
    string name;
    int roll;
    string branch;

    friend ofstream &operator<<(ofstream &ofs,Student &s);
    friend ifstream &operator>>(ifstream &ifs,Student &s);
};

ifstream &operator>>(ifstream &ifs,Student &s)
{
    ifs>>s.name>>s.roll>>s.branch;
    return ifs;
}

ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.roll<<endl;
    ofs<<s.branch<<endl;
}

int main()
{
    //Writing object into a file
    Student s1;
    /*s1.name="Snehanko";s1.roll=198;s1.branch="Ecse";
    ofstream file("myfile.txt");
    file<<s1;

    file.close();*/

    ifstream file("myfile.txt");
    if(!file.is_open())
        cout<<"File not opening";
    else{
        file>>s1;
        cout<<"Name: "<<s1.name<<endl;
        cout<<"Roll: "<<s1.roll<<endl;
        cout<<"Branch: "<<s1.branch<<endl;

        file.close();
    }

    return 0;
}
