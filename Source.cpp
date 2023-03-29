#include <iostream>
using namespace std;
//#include "Single Level Inheritance.h"
//#include "Multilevel Inheritance.h"
//#include "Multiple Inheritance.h"
//#include "Hierarchical Inheritance.h"


// Muellim lazim olduqca bir-bir size lazim olan header file'lari commentden cixararaq ve size lazim olan inheritance
// check'i mainden comment'den acaraq yoxluya bilersiz.


int main() {
	// Single Level Inheritance

	//Student hesen("Hesen", "Abdullazade", "Ataturk Lisesi 28", 14, 85, 514);
	//hesen.show();

	// Multilevel Inheritance

	//Graduate hesen("Hesen", "Abdullazade", "Ataturk Lisesi 28", "He is very intelligent and deligent student.", 18, 90, 514, 2026, 1550);
	//hesen.show();

	// Multiple Inheritance

	// Multiple Inheritance ile isleyerken qarsima cixan problemin adi Diamond problemidir. Problem Bir base classdan torenmis iki
	// derived class ve bunlardan torenmis basqa bir derived class yazmaq isteyende qarsima cixdi. Problemin adi situasiyani
	// sxem uzerinde gosdersek diamonda oxsadigi ucundur. Problemin sebebi base class'i iki defe yaradaraq bir class daxilinde 
	// ikisinin base class'i dublikasiya yaratmasidir. Bu problemi aradan qaldirmaq ucun virtual keywordunu base class'dan
	// torenmis her hansi class'in qarsisina virtual yazaraq aradan qaldira bilerik. Virtual bise derived classlar yaranarken 
	// bir yer ayirir ve base class'i yaradir eger ikinci defe hemin class'dan basqa bir derived class toredirikse virtual space'deki
	// yaranmis objecte gore yeniden ikinci derived class ucun yaratmir.

	//Teacher* teachers = new Teacher[2]{};
	//Teacher t1("Aynur", "Xelilzade", "Sat Verbal", 21, 3, 2000);
	//Teacher t2("Nahid", "Nahidzade", "Math", 20, 2, 1500);
	//teachers[0] = t1;
	//teachers[1] = t2;

	//Student* students = new Student[2]{};
	//Student s1("Kenan", "Rehimov", "Ataturl Lisesi 28", 14, 65, 412);
	//Student s2("Ferhad", "Xesimov", "Ataturl Lisesi 28", 14, 75, 310);
	//students[0] = s1;
	//students[1] = s2;

	//School ataturk("Baku, 28 may, Semed Vurgun Parki", 1990, 2);
	//ataturk.setTeachers(teachers, 2);
	//ataturk.setStudents(students, 2);
	//ataturk.show();

	// Hierarchical Inheritance

	//Teacher t1("Aynur", "Xelilzade", "Sat Verbal", 21, 3, 2000);
	//t1.show();

	//Student s1("Kenan", "Rehimov", "Ataturl Lisesi 28", 14, 65, 412);
	//s1.show();


}