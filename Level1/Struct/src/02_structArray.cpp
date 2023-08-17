#include<iostream>
using namespace std;

struct Student
{
	string name; 
	int age;  
	int grade; 
};


int main() {
	
    // definition
    struct Student studentArr[] = {
        {"John", 12, 99},
        {"Jack", 20, 100}
    };
    
    int size = sizeof(studentArr) / sizeof(studentArr[0]);

    for (int i = 0; i < size; i++) 
    {
        cout << "Name: " << studentArr[i].name 
        << " Age: " << studentArr[i].age
        << " Grade: " << studentArr[i].grade
        << endl;
    }

	return 0;
}