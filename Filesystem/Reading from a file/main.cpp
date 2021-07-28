#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile;
    infile.open("myfile.txt");
    if(!infile.is_open())
        cout<<"File is not opening"<<endl;

    else{
        string name;
        int age;
        infile>>name>>age;
        infile.close();
        cout<<"Name :"<<name<<endl;
        cout<<"Age :"<<age<<endl;
        }

    return 0;
}
