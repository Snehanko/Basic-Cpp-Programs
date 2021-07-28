#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char str1[]="235";
    char str2[]="54.78";

    long x=strtol(str1,NULL,10);
    cout<<x<<endl;

    float y=strtof(str2,NULL);
    cout<<y<<endl;

    return 0;
}
