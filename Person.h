#ifndef PERSON_H
#define PERSON_H 0
#include<string>
#include<iostream>
using namespace std;
class Person{
public:
     int id;
	 int age;
	 string name;
	 Person(int ID,int AGE,string NAME);
	 Person();
	 ~Person();
	 void show();
	 friend ostream &operator<<(ostream &output,Person &per);
	 friend istream &operator>>(istream &input,Person &per);
	 virtual void sk()=0;
};
#endif
