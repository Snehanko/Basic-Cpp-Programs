#include <iostream>
#include <set>

using namespace std;



int main()
{
    std::multiset<int,std::greater<int>> set{1,2,2,2,3,3,4,5,5};

    for(const auto &i:set)
        cout<<i<<" ";

    cout<<endl;

    set.insert(12);

    for(const auto &i:set)
        cout<<i<<" ";
    return 0;
}
