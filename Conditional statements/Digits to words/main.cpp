#include <iostream>

using namespace std;

int main()
{
    int n,sum=0,r;

    cout<<"Enter the Number"<<endl;
    cin>>n;

    while(n>0){
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    n=sum;
    while(n){
        r=n%10;

        switch(r){
        case 1:
            cout<<"one ";
            break;

        case 2:
            cout<<"two ";
            break;

        case 3:
            cout<<"three ";
            break;

        case 4:
            cout<<"four ";
            break;

        case 5:
            cout<<"five ";
            break;

        case 6:
            cout<<"six ";
            break;

        case 7:
            cout<<"seven ";
            break;

        case 8:
            cout<<"eight ";
            break;

        case 9:
            cout<<"nine ";
            break;

        case 0:
            cout<<"zero ";
            break;

        default:
            cout<<"Not found digits";
            break;
        }
        n=n/10;
    }
    return 0;
}