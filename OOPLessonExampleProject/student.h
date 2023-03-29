#pragma once
#include "main.h"

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;

	// default-constructor (with no-args)
	Student() {
		cout << "default-constructor" << endl;
		name = "no name";
		surname = "no surname";
		age = 16;
		avg_mark = 4;
	}

	// constructor with params (with args)
	Student(string n, string sname, int a, float mark) {
		cout << "constructor with params" << endl;
		name = n;
		surname = sname;
		age = a;
		avg_mark = mark;
	}

	Student(string n, string sname) {
		cout << "constructor with params" << endl;
		name = n;
		surname = sname;
	}

	Student(int a) {
		cout << "constructor with params" << endl;
		age = a;
	}

	Student(float mark) {
		cout << "constructor with params" << endl;
		avg_mark = mark;
	}

	~Student() {
		cout << "called Student destructor" << endl;
	}

	void init(string n, string sname, int a, float mark) {
		name = n;
		surname = sname;
		age = a;
		avg_mark = mark;
	}

	void init_default() {
		name = "no name";
		surname = "no surname";
		age = 0;
		avg_mark = 0;
	}

	string convert_to_string() {
		return name + " " + surname + " (age = " + to_string(age)
			+ ", average mark = " + to_string(avg_mark) + ")";
	}
};