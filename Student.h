#ifndef STUDENT_H
#define STUDENT_H 0
#include"Person.h"
#include"Time.h"
#include<string>
using namespace std;

class Student:virtual public Person{
       public:
	int eduyear;
	int score1;
	int score2;
	static int num;
	static int sumsco;
	Time time;
	Student(int ID,int AGE,string NAME,int YEAR,int MONTH,int DAY,int EDUYEAR,int SCORE1,int SCORE2);
	Student();
	~Student();
	void show();
	virtual void sk();
	static float getave();
	int operator+(Student &student);
};
#endif
