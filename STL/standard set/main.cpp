#include <iostream>
#include <set>
#include <functional>
#include <string>

using namespace std;

class Person{
    public:
        string name;
        int age;

    bool operator<(const Person &p)const
    {
        return age<p.age;
    }
};

int main()
{

    std::set<Person> Set={{"ruspesh",20},{"Aditya",25},{"John",28}};
    for(const auto&i:Set)
        cout<<i.age<<" "<<i.name<<endl;

    std::set<int> arr1={1,2,3,4,5,4,2,5,3,1};

    for(int i:arr1)
        cout<<i<<endl;

    return 0;
}
