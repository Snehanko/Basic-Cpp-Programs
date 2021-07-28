#include <iostream>
#include <string>

using namespace std;

string printRoman(int number)
{
    int num[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
    string sym[] = {"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
    string str;
    int i=12;
    while(number>0)
    {
      int div = number/num[i];
      number = number%num[i];
      while(div--)
      {
        str.append(sym[i]);
      }
      i--;
    }

    return str;
}

//Driver program
int main()
{
    int number;

    cout<<"Enter The Number-"<<endl;
    cin>>number;

    cout<<printRoman(number);

    return 0;
}
