#include<iostream>
#include<fstream>

using namespace std;

// Read File

void test()
{

    // 1. Include fstream header

    // 2. Create stream object
    ifstream ifs;

    // 3. Open file, and check if successful
    ifs.open("../out/test.txt", ios::in);

    if (!ifs.is_open())
    {
        cout << "Error opening the file!" << endl;
        return;
    }

    // 4. Read data
    
    // Method 1
    // char buf[1024] = {0};
    // while( ifs >> buf )
    // {
    //     cout << buf << endl;
    // }

    // // Method 2
    // char buf[1024] = {0};
    // while(ifs.getline(buf, sizeof(buf))) 
    // {
    //     cout << buf << endl;
    // }


    // Method 3
    string buf;
    while(getline(ifs, buf))
    {
        cout << buf << endl;
    }


    // // Method 4 (NOT Recommended!!)
    // char c;
    // while ( (c = ifs.get()) != EOF )
    // {
    //     cout << c;
    // }


    // 5. Close file
    ifs.close();



}


int main()
{
    test();
    return 0;
}