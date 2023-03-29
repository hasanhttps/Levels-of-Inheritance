#pragma once


// Hierarchical Inheritance


class Person {
protected:
	string name;
	string surname;
	int age;
public:

	Person() : name(""), surname(""), age(0) { }
	Person(string name, string surname, int age) : name(name), surname(surname), age(age) { }

	// Accsessors

	// Setters

	void setName(string name) { this->name = name; }
	void setSurname(string surname) { this->surname = surname; }
	void setAge(int age) { this->age = age; }

	// Getters

	const string getName() { return name; }
	const string getSurname() { return surname; }
	const int getAge() { return age; }

	// Functions

	void show() {
		cout << "Name : " << name << endl;
		cout << "Surname : " << surname << endl;
		cout << "Age : " << age << endl;
	}

	// Destructor

	~Person() = default;

};


class Student : protected Person {
protected:
	int avg;
	int number;
	string school;
public:

	Student() : avg(0), number(0), school("") { }
	Student(string name, string surname, string school, int age, int avg, int number) :
		avg(avg), number(number), school(school), Person(name, surname, age) { }

	// Acsessors

	// Setters

	void setSchool(string school) { this->school = school; }
	void setAge(int avg) { this->avg = avg; }
	void setNumber(int number) { this->number = number; }

	// Getters

	const string getSchool() { return school; }
	const int getAvg() { return avg; }
	const int getNumber() { return number; }

	// Functions

	void show() {
		Person::show();
		cout << "School Name : " << school << endl;
		cout << "Avarage Score : " << avg << endl;
		cout << "School Number : " << number << "\n\n";
	}

	// Destructor

	~Student() = default;
};


class Teacher : protected Person {
protected:
	int experienceYear;
	int salary;
	string subject;
public:

	Teacher() : experienceYear(0), salary(0), subject("") { }
	Teacher(string name, string surname, string subject, int age, int experienceYear, int salary) :
		experienceYear(experienceYear), salary(salary), subject(subject), Person(name, surname, age) { }

	// Acsessors

	// Setters

	void setSubject(string subject) { this->subject = subject; }
	void setExperianceYear(int experienceYear) { this->experienceYear = experienceYear; }
	void setSalary(int salary) { this->salary = salary; }

	// Getters

	const string getSubject() { return subject; }
	const int getExperianceYear() { return experienceYear; }
	const int getSalary() { return salary; }

	// Functions 

	void show() {
		Person::show();
		cout << "Subject : " << subject << endl;
		cout << "Salary : " << salary << endl;
		cout << "Experiance Year : " << experienceYear << "\n\n";
	}

	// Destrucors

	~Teacher() = default;
};

