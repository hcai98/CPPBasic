#include <iostream>
#include <fstream> // header for io

using namespace std;

// Three Types of File Operation:
//  1. ofstream：write => output file stream
//  2. ifstream： read => input file stream
//  3. fstream ： both write and read => general file stream

void test()
{
    // 1. Include fstream header

    // 2. Create stream object
    ofstream ofs;

    // 3. open file
    ofs.open(
        "../out/test.txt", // file name
        ios::out    // mode
    );

    // 4. write to file
    ofs << "Hello world" << endl;
    ofs << "This is some text output by the program" << endl;

    // 5. close the file
    ofs.close();
}

int main()
{

    test();
    return 0;
}