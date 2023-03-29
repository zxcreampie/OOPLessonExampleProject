#pragma once
#include "main.h"

class Student {
private:
	string name;
	string surname;
	int age;
	float avg_mark;

public:

	const int MIN_AGE = 0;
	const int MAX_AGE = 160;

	const int MIN_MARK = 0;
	const int MAX_MARK = 10;


	string get_name() {
		return name;
	}

	void set_name(string n) {
		name = n;
	}

	string get_surname() {
		return name;
	}

	void set_surname(string n) {
		surname = n;
	}

	int get_age() {
		return age;
	}

	void set_age(int a) {
		if (a > MIN_AGE && a < MAX_AGE) {
			age = a;
		}
	}

	float get_avg_mark() {
		return avg_mark;
	}

	void set_avg_mark(float mark) {
		if (mark >= MIN_MARK && mark <= MAX_MARK) {
			avg_mark = mark;
		}
	}

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