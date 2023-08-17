#include <iostream>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

struct Teacher
{
	int id;
	string name;
	int age;
	struct Student stu;
};

int main()
{

	struct Teacher t1;
	t1.id = 10000;
	t1.name = "James";
	t1.age = 36;

	t1.stu.name = "Derek";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "Teacher ID： " << t1.id
		 << " Name: " << t1.name
		 << " Age: " << t1.age
		 << endl;

	cout << "Student Name： " << t1.stu.name
		 << " Name: " << t1.stu.age
		 << " Score: " << t1.stu.score
		 << endl;

	return 0;
}