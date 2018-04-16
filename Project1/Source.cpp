#include<ctime>
#include"Student.h"
#include"counter.h"

int main() {
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int k;
	cout << "Enter tasks number:";
	cin >> k;

	switch (k) {
	case 1: {
		int n;
		string name;
		int age;
		Student *ss;
		cout << "Enter number of students:" << endl;
		cin >> n;
		cin.ignore();
		ss = new Student[n];
		for (int i = 0;i < n;i++)
		{
			cout << "Enter name:" << endl;
			getline(cin, name);
			age = 15 + rand() % 50;
			ss[i].setName(name);
			ss[i].setAge(age);
		}
		for (int i = 0;i < n;i++)
		{
			cout << ss[i].getName() << "\t" << ss[i].getAge() << endl;
		}
	}break;

	case 2: {
		Counter c;
		c.setValue(30);
		while (true) {
			c.increment();
			cout << c.getValue() << endl;
		}
	}break;
	}
	system("pause");
	return 0;
}