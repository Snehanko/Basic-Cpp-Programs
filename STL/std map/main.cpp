#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    std::map<int,string,std::greater<>> dict;

    dict[20]="Rajesh";
    dict[22]="Barun";
    dict.insert(std::make_pair(25,"John"));

    for(auto &ell:dict)
        cout<<ell.first<<" "<<ell.second<<endl;

    //Value using key
    cout<<dict[22]<<endl;

    /*dict[20].push_back();

    for(auto &ell:dict)
        cout<<ell.first<<" "<<ell.second<<endl;*/
    return 0;
}
