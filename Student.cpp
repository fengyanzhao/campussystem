#include<iostream>
#include"Student.h"
#include<string>
using namespace std;

Student::Student(int ID,int AGE,string NAME,int YEAR,int MONTH,int DAY,int EDUYEAR,int SCORE1,int SCORE2):Person(ID,AGE,NAME),time(YEAR,MONTH,DAY){
	eduyear=EDUYEAR;
	score1=SCORE1;
	score2=SCORE2;
	num++;
	sumsco+=score1;
	cout<<"派生类Student的有参构造函数"<<endl;
}
Student::Student(){
	eduyear=0;
	score1=0;
	score2=0;
	cout<<"派生类Student的无参构造函数"<<endl;
}
int Student::num=0;
int Student::sumsco=0;
Student::~Student(){
	cout<<"派生类Student的析构函数"<<endl;
}
float Student::getave(){
	return sumsco/num;
}
void Student::show(){
	cout<<"name: "<<name<<endl;
	cout<<"age: "<<age<<endl;
	cout<<"id: "<<id<<endl;
	cout<<"eduyear: "<<eduyear<<endl;
	cout<<"score1: "<<score1<<endl;
	cout<<"score2: "<<score2<<endl;
	cout<<"派生类Student的show函数"<<endl;
}
void Student::sk(){//纯虚函数的重写
	cout<<"我是派生类Student的纯虚函数sk"<<endl;
}
int Student::operator+(Student &student){//重写+号运算符
	return score1+student.score1;
}
