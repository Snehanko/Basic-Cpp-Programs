#include <iostream>

using namespace std;

int main()
{
    char s[100];
    char s2[200];

    cout<<"enter your name- "<<endl;
    cin.get(s,100);
    cout<<"Welcome "<<s<<endl;

    cin.ignore();//Its just helps to ignore the '\n' character

    cout<<"Enter your name again- "<<endl;
    cin.get(s2,200);
    cout<<"Welcome Again "<<s2<<endl;

    return 0;
}
