#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str1[]="Programming";
    char str2[]="gram";

    //Similarities of two string
    /*if(strchr(str1,'a')!=NULL)
        {
            cout<<"Match found"<<endl;
            cout<<strstr(str1,str2)<<endl;
        }
    else
        cout<<"Match not found"<<endl;

    */

    char s1[]="hello";
    char s2[]="Hello";

    cout<<strcmp(s1,s2)<<endl;
    return 0;
}
