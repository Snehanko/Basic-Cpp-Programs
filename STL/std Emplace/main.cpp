#include <iostream>
#include <set>

using namespace std;

class A{
public:
    int x;
    A(int value=0){x=value;cout<<"constructor"<<endl;}
    A(const A &a){x=a.x;cout<<"copy"<<endl;}
};

bool operator<(const A &lhs, const A &rhs){return lhs.x<rhs.x;}

int main()
{
    std::set<A> Set;
    //A a1(10);
    Set.insert(10);
    Set.emplace(20);

    for(auto&el:Set)
        cout<<el.x<<endl;
    return 0;
}
