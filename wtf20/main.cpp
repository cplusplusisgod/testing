#include <fstream>
#include <iostream>
using namespace std;
int main(int argc, char** argv)
{
    std::cout << "Hello World" << std::endl;
    fstream fileOpener;
    ofstream fileCreater("numbers_test!!!!.txt");
    string numbers;
    fileOpener.open("weird.txt");
    while(fileOpener >> numbers)
        cout << numbers << endl;
    return 0;
}
