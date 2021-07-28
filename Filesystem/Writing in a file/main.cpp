#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("myfile.txt");
    file<<"Snehanko"<<endl;
    file<<"21"<<endl;
    file.close();
    return 0;
}
