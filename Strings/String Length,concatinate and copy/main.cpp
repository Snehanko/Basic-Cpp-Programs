#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    //String Length-
    char S[100];

    cout<<"Enter the string "<<endl;
    cin.getline(S,100);

    cout<<S<<endl;
    cout<<"Length "<<strlen(S)<<endl;

    //String Concatination-
    char s1[100];
    char s2[100];

    cout<<"Enter two string "<<endl;
    cin.getline(s1,100);
    cin.getline(s2,100);

    strcat(s1,s2);
    cout<<s1<<endl;

    //String Copy-
    char s3[100];

    strcpy(s3,s2);
    cout<<s3<<endl;
    return 0;
}
