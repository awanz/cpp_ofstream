#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream f;
    f.open("awan.txt");
    f << "Hello \n";
    f << "My name is ";
    f.seekp(7);
    f.put('A');
    f.put('W');
    f.put('A');
    f.put('N');
    f << "\n";
    cout << "write to text success, total char write is " << f.tellp() << endl;
    f.close();
    return 0;
}
