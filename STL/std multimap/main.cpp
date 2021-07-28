#include <iostream>
#include <map>

using namespace std;

int main()
{
    std::multimap<char,int,std::greater<>> store;
    store.insert(make_pair('a',20));
    store.insert(make_pair('a',28));
    store.insert(make_pair('b',22));
    store.insert(make_pair('b',25));
    store.insert(make_pair('b',31));
    store.insert(make_pair('c',22));
    //using pair<>
    store.insert(pair<char,int>('b',35));

    for(auto &ell:store)
        cout<<ell.first<<" "<<ell.second<<endl;

    cout<<"Values with key 'b' "<<endl;
    auto range=store.equal_range('b');
    for(auto i=range.first;i !=range.second;i++)
        cout<<i->first<<" "<<i->second<<endl;
    return 0;
}
