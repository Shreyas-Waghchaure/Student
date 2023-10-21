#include <iostream>
#include "Student.h"
int main() {
	int id;
	string name;
	int mark1,mark2,mark3;
	Student s1;
	s1.display();
	cout<<"Enter id name marks of 3 subs:";
	cin>>id>>name>>mark1>>mark2>>mark3;
	
	Student s2(id,name,mark1,mark2,mark3);
	
	s2.display();

	
	return 0;
}
