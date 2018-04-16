//#pragma once

#ifndef _STUDENT_H_
#define _STUDENT_H_
#include<string>
#include<iostream>
using namespace std;

class Student {
private:
	string name;
	int age;
	int grades[5];
public:
	//mutators- мен€ют
	void setName(const string &name) {
		this->name = name;
	}
	void setAge(const int age) {
		this->age = age;
	}

	//accessors -извлекают
	string getName() { return name; }
	int getAge() { return age; }
	
	void set(const string &name, const int &age) {
		this->name = name;
		this->age = age;
	}
	void print() {
		cout << name << "\t" << age << "\t";
	}
};


#endif
