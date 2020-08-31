#include "HeaderTestFile.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv)
{
    cout << "Hello World" << std::endl;
    cout << "testing this out" << endl;
    cout << "wtf";
    cout << "ok";

    for(int count = 0; count < 5; count++)
        cout << "test" << endl;

    cout << "dinosau" << endl;
    cout << "\n\n";

    HeaderTest test1;

    fstream fileOpener;
    ofstream fileCreater("numbers_test.txt");
    string numbers;
    fileOpener.open("numbers.txt");
    while(fileOpener >> numbers)
        cout << numbers << endl;

    return 0;
}
