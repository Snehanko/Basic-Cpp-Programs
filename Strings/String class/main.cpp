#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cout<<"Enter a string-"<<endl;
    /*cin>>str;*/

    getline(cin,str);

    cout<<str<<endl;
    return 0;
}
