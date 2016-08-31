#ifndef TEACHER_H
#define TEACHER_H 0
#include"Person.h"
#include<string>
using namespace std;

class Teacher:virtual public Person{
	public:
	   int workyear;
	   int salary;
	   Teacher(int ID,int AGE,string NAME,int WORKYEAR,int SALARY);
	   Teacher();
	   ~Teacher();
	   void show();
	   virtual void sk();
};
#endif
