#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
using namespace std;
class Student
{
	private:
		int id;
		string name;
		int mark1,mark2,mark3,total;
		double percent;
	public:
		Student();
		Student(int id, string name,int mark1,int mark2,int mark3);
		
		void setId(int id);
		int getId();
		void setName(string name);
		string getName();
		void setMark1(int m1);
		void setMark2(int m2);
		void setMark3(int m3);
		int getMark1();
		int getMark2();
		int getMark3();
		void calcPercent();
		void display();
		
		
};

#endif
