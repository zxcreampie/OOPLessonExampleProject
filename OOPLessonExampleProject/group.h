#pragma once
#include "main.h"
#include "student.h"

#define DEFAULT_SIZE 10

class Group {
private:
	Student list[DEFAULT_SIZE];
	int size;
	string name;

public:
	Group();
	//Group(Student* ls, int sz, string nm);
	Group(string nm);
	~Group();

	string get_name();
	void set_name(string n);

	bool add(Student student);
	void remove(Student student);
	void remove(int index);
	Student get(int index);
	int get_size();
	string convert_to_string();
	//...


};