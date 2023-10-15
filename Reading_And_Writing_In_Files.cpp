#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream object;
    string var;
    object.open("Second_Text_File.txt");
    while (object.eof() == 0)
    {
        string temp;
        object >> temp;
        var += temp;
        var += " ";
    }
    cout << var << endl;
    ofstream Object_2;
    Object_2.open("Third_Text_File.txt");
    Object_2 << "So The Written String Is -->" << var << "<-- Which Was Red From The Second File";
    return 0;
}