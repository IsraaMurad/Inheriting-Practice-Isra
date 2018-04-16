#include <iostream>

using namespace std;

class student
{
public:
	char name[20];
	int student_number;
	bool attendance;
	float student_markes;
    int number_of_students;


    virtual void students_info()
	{
	for (int i=0; i>=number_of_students; i++)
		{
			cout<< "student 1:"<<endl;
			cout<< "name"<<endl;
			cin>> name[20];
			cout<< name[20] << " number"<<endl;
			cin>> student_number;
			cout<< "attendance(if here 1, if not 0)"<<endl;
			cin>> attendance;
			cout<< name[20] << " marke for todays class"<<endl;
		}
	}
};

class Grade
{
public:
    student students[100];
};

class Grade_1: public students
{
public:

    cout<< "how many studentes are in grade 1?" <<endl;
	cin>> number_of_students;
	void students_info();
};

class Grade_2: public students
{
public:

	cout<< "how many studentes are in grade 2?" <<endl;
	cin>> number_of_students;
	void students_info();

};

class Grade_3: public students
{
public:

	cout<< "how many studentes are in grade 3?" <<endl;
	cin>> number_of_students;
	void students_info();
};

class Grade_4: public students
{
public:

	cout<< "how many studentes are in grade 4?" <<endl;
	cin>> number_of_students;
	void students_info();

};

int main ()
{
	Grade_1 grade_1;
	grade_1.students_info();
	Grade_2 grade_2;
	grade_2.students_info();
	Grade_3 grade_3;
	grade_3.students_info();
	Grade_4 grade_4;
	grade_4.students_info();

    return 0;
}
