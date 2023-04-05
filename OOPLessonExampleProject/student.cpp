#include "student.h"

string Student::get_name() {
	return name;
}

void Student::set_name(string n) {
	name = n;
}

string Student::get_surname() {
	return name;
}

void Student::set_surname(string n) {
	surname = n;
}

int Student::get_age() {
	return age;
}

void Student::set_age(int a) {
	if (a > MIN_AGE && a < MAX_AGE) {
		age = a;
	}
}

float Student::get_avg_mark() {
	return avg_mark;
}

void Student::set_avg_mark(float mark) {
	if (mark >= MIN_MARK && mark <= MAX_MARK) {
		avg_mark = mark;
	}
}

// default-constructor (with no-args)
Student::Student() {
	//cout << "default-constructor" << endl;
	name = "no name";
	surname = "no surname";
	age = 16;
	avg_mark = 4;
}

// constructor with params (with args)
Student::Student(string n, string sname, int a, float mark) {
	//cout << "constructor with params" << endl;
	name = n;
	surname = sname;
	age = a;
	avg_mark = mark;
}

Student::Student(string n, string sname) {
	//cout << "constructor with params" << endl;
	name = n;
	surname = sname;
}

Student::Student(int a) {
	//cout << "constructor with params" << endl;
	age = a;
}

Student::Student(float mark) {
	//cout << "constructor with params" << endl;
	avg_mark = mark;
}

Student::~Student() {
	//cout << "called Student destructor" << endl;
}

void Student::init(string n, string sname, int a, float mark) {
	name = n;
	surname = sname;
	age = a;
	avg_mark = mark;
}

void Student::init_default() {
	name = "no name";
	surname = "no surname";
	age = 0;
	avg_mark = 0;
}

string Student::convert_to_string() {
	return name + " " + surname + " (age = " + to_string(age)
		+ ", average mark = " + to_string(avg_mark) + ")";
}