#include <iostream>
#include <array>

using namespace std;

int main()
{
    std::array<int,5> myarray={1,2,3,5,6};

    for(int i=0;i<5;i++)
        cout<<myarray.at(i)<<" ";
        cout<<endl;

    std::array<int,5> myarray2 {6,7,8,9,10};

    cout<<"Size "<<myarray2.size()<<endl;

    for(int i:myarray2)
        cout<<i<<" ";
        cout<<endl;

    return 0;
}
