#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string St;
    cout << "Writing Into A File Using 'ofstream'" << endl;
    ofstream Object("Basic_Text_File.txt");
    Object << "No One Is Here" << endl;
    cout << "Reading From A File Using 'ifstream'" << endl;
    ifstream Object_2("Basic_Text_File.txt");
    getline(Object_2, St);
    Object_2 >> St;
    cout << "This Is The Text Written In The External Text File --> " << St << endl;

    return 0;
}