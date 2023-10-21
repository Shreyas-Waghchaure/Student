#include "Student.h"
#include <iostream>
using namespace std;
Student::Student()
{
	id=100;
	name="Ramesh";
	mark1=85;
	mark2=75;
	mark3=95;
}

Student::Student(int id, string name,int mark1,int mark2,int mark3)
{
	this->id=id;
	this->name=name;
	this->mark1 = mark1;
	this->mark2 = mark2;
	this->mark3 = mark3;

}
	
	void Student::setId(int id){
		this->id = id;
	}
		void Student::setName(string branch){
		this->name = name;
	}
	
	int Student::getId(){
		return id;
	}
	string Student::getName(){
		return name;
	}
		void Student::setMark1(int mark1){
		this->mark1 = mark1;
	}
		void Student::setMark2(int mark2){
		this->mark2 = mark2;
	}
		void Student::setMark3(int mark3){
		this->mark3 = mark3;
	}
	int Student::getMark1(){
		return mark1;
	}
		int Student::getMark2(){
		return mark2;
	}
		int Student::getMark3(){
		return mark3;
	}
	void Student::calcPercent(){
		total = mark1+mark2+mark3;
		percent = (total/300)*100;
	}
	void Student::display(){
		calcPercent();
		cout<<"Id:"<<id<<endl;
		cout<<"Name:"<<name<<endl;
		cout<<"mark of sub 1:"<<mark1<<endl;
		cout<<"mark of sub 2:"<<mark2<<endl;
		cout<<"mark of sub 3:"<<mark3<<endl;
		cout<<"total:"<<total;
		cout<<"percentage:"<<percent;
		
	}

