#include "student.h"

int main() {
	string s;
	Student st;
	Student st1("Ivan", "Ivanov", 14, 10);
	Student st2("Genrih", "Gurshtinovich");
	Student st3(14);

	int age = st.get_age();
	st.set_age(-10);

	cout << st.convert_to_string() << endl;

	cout << st1.convert_to_string() << endl;
	cout << st2.convert_to_string() << endl;
	cout << st3.convert_to_string() << endl;
	return 0;
}