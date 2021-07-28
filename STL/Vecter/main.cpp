#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v={2,4,6,8};

    v.push_back(10);
    v.push_back(20);


    vector<int>::iterator itr;
    for(itr=v.begin();itr<v.end();itr++)
        cout<<*itr<<" ";
    return 0;
}
