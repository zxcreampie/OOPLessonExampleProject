#include "student.h"

Student get_best_student(Student st1, Student st2, Student st3) {
	return st1.avg_mark > st2.avg_mark && st1.avg_mark > st3.avg_mark ? st1
		: (st2.avg_mark > st3.avg_mark ? st2 : st3);
}

int main() {
	Student st;
	Student st1("Ivan", "Ivanov", 14, 10);
	Student st2("Genrih", "Gurshtinovich");
	Student st3(14);

	cout << st.convert_to_string() << endl;

	cout << st1.convert_to_string() << endl;
	cout << st2.convert_to_string() << endl;
	cout << st3.convert_to_string() << endl;

	return 0;
}
