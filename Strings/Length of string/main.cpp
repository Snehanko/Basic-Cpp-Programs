#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str="Hello World!";

    cout<<"using For loop- "<<endl;

    for(int i=0;str[i]!='\0';i++){
        cout<<str[i];
    }

    cout<<endl<<"Iterator- "<<endl;
    string::iterator it;

    for(it=str.begin();it!=str.end();it++){
        cout<<*it;
    }
    return 0;
}
