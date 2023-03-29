#pragma once


// Multilevel Inheritance


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
		cout << "School Number : " << number << endl;
	}

	// Destructor

	~Student() = default;
};


class Graduate : protected Student {
protected:
	int graduateYear;
	int graduateScore;
	string graduateDesc;
public:

	Graduate() : graduateYear(0), graduateScore(0), graduateDesc("") { }
	Graduate(string name, string surname, string school, string graduateDesc,
		int age, int avg, int number, int graduateYear, int graduateScore) :
		graduateYear(graduateYear), graduateScore(graduateScore), graduateDesc(graduateDesc),
		Student(name, surname, school, age, avg, number) { }

	// Acsessors

	// Setters

	void setGraduateYear(int graduateYear) { this->graduateYear = graduateYear; }
	void setGraduateScore(int graduateScore) { this->graduateScore = graduateScore; }
	void setGraduateDescription(string graduateDesc) { this->graduateDesc = graduateDesc; }

	// Getters

	const string getGraduateDescription() { return graduateDesc; }
	const int getGraduateYear() { return graduateYear; }
	const int getGraduateScore() { return graduateScore; }

	// Functions

	void show() {
		Student::show();
		cout << "Graduate Description : " << graduateDesc << endl;
		cout << "Graduate Year : " << graduateYear << endl;
		cout << "Graduate Score : " << graduateScore << endl;
	}

	// Destructor

	~Graduate() = default;
};