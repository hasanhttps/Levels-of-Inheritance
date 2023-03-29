#pragma once


// Multiple Inheritance

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


class Student : virtual protected Person {
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


class School : protected Student, protected Teacher {
protected:
	string location;
	int estYear; // Establishment Year
	int branchCount; // Filial
	int teacherCount;
	int studentCount;
	Teacher* teachers;
	Student* students;
public:

	School() : location(""), estYear(0), branchCount(0), teacherCount(0), studentCount(0), teachers(NULL), students(NULL) { }
	School(string location, int estYear, int branchCount) :
		location(location), estYear(estYear), branchCount(branchCount), teacherCount(0), studentCount(0),
		teachers(NULL), students(NULL) { }

	// Acsessors

	// Setters

	void setLocation(string location) { this->location = location; }
	void setEstablishYear (int estYear) { this->estYear = estYear; }
	void setBranchCount(int branchCount) { this->branchCount = branchCount; }
	void setTeacherCount(int teacherCount) { this->teacherCount = teacherCount; }
	void setStudentCount(int studentCount) { this->studentCount = studentCount; }
	void setTeachers(Teacher* teachers, int newcount) {
		int len = newcount + teacherCount;
		Teacher* newTeachers = new Teacher[len]{};
		if (this->teachers != NULL) {
			for (int i = 0; i < teacherCount; i++) newTeachers[i] = this->teachers[i];
		}
		for (int i = teacherCount; i < len; i++) newTeachers[i] = teachers[i - teacherCount];
		this->teachers = newTeachers;
		newTeachers = nullptr;
		teacherCount = len;
	}
	void setStudents(Student* students, int newcount) {
		int len = newcount + studentCount;
		Student* newStudents = new Student[len]{};
		if (this->students != NULL) {
			for (int i = 0; i < studentCount; i++) newStudents[i] = this->students[i];
		}
		for (int i = studentCount; i < len; i++) newStudents[i] = students[i - studentCount];
		this->students = newStudents;
		newStudents = nullptr;
		studentCount = len;
	}
	void setAge(int age) { Person::age = age; }
	void showPerson() { Person::show(); }

	// Getters

	const string getLocation() { return location; }
	const int getEstablishYear() { return estYear; }
	const int getBranchCount() { return branchCount; }
	const int setTeacherCount() { return teacherCount; }
	const int getStudentCount() { return studentCount; }
	const Teacher* getTeachers() { return teachers; }
	const Student* getStudents() { return students; }

	// Functions

	void show() {
		cout << "\t\t\tSchool Info\n";
		cout << "Location : " << location << endl;
		cout << "Establish Year : " << estYear << endl;
		cout << "Branch Count : " << branchCount << endl;
		cout << "Teacher Count : " << teacherCount << endl;
		cout << "Student Count : " << studentCount << endl << endl;
		cout << "Teachers\n\n";
		for (int i = 0; i < teacherCount; i++) teachers[i].show();
		cout << "\nStudents\n\n";
		for (int i = 0; i < studentCount; i++) students[i].show();
	}

	// Destructor

	~School() {
		delete[] teachers;
		delete[] students;
	}
};
