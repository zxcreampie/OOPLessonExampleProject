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

	Student();
	Student(string n, string sname, int a, float mark);
	Student(string n, string sname);
	Student(int a);
	Student(float mark);
	~Student();

	string get_name();
	void set_name(string n);
	string get_surname();
	void set_surname(string n);
	int get_age();
	void set_age(int a);
	float get_avg_mark();
	void set_avg_mark(float mark);

	void init(string n, string sname, int a, float mark);
	void init_default();
	string convert_to_string();
};