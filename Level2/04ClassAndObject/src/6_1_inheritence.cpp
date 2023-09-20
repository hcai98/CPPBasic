#include <iostream>
using namespace std;

// class Java
// {

// public:
//     void header()
//     {
//         cout << " This is a header" << endl;
//     }
//     void footer()
//     {
//         cout << "Footer" << endl;
//     }
//     void content()
//     {
//         cout << "Java Course Content" << endl;
//     }
// };

class BasePage
{
public:
    void header()
    {
        cout << "Header" << endl;
    }
    void footer()
    {
        cout << "Footer" << endl;
    }    
};

// class A : public B; 
class Java: public BasePage
{
public:
    void content()
    {
        cout << "Java Course Content" << endl;
    }    
};

class Python: public BasePage
{
public:
    void content()
    {
        cout << "Python Course Content" << endl;
    }    
};

class CPP: public BasePage
{
public:
    void content()
    {
        cout << "CPP Course Content" << endl;
    }    
};

void test()
{
	//Java Page
	cout << "Java Page: " << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.content();
	cout << "--------------------" << endl;

	//Python Page
	cout << "Python Page: " << endl;
	Python py;
	py.header();
	py.footer();
	py.content();
	cout << "--------------------" << endl;

	//C++ Page
	cout << "C++ Page: " << endl;
	CPP cp;
	cp.header();
	cp.footer();
	cp.content();
}

int main()
{
    test();
    return 0;
}