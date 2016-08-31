#include<iostream>
#include"Teacher.h"
using namespace std;
Teacher::Teacher(int ID,int AGE,string NAME,int WORKYEAR,int SALARY):Person(ID,AGE,NAME){
	workyear=WORKYEAR;
	salary=SALARY;
	cout<<"派生类Teacher的有参构造函数"<<endl;
}
Teacher::Teacher(){
	workyear=0;
	salary=0;
	cout<<"派生类Teacher的无参构造函数"<<endl;
}
Teacher::~Teacher(){
	cout<<"派生类Teacher的析构函数"<<endl;
}
void Teacher::show(){
	cout<<"name: "<<name<<endl;
	cout<<"age: "<<age<<endl;
	cout<<"id: "<<id<<endl;
	cout<<"workyear: "<<workyear<<endl;
	cout<<"salary: "<<salary<<endl;
	cout<<"派生类Teacher的show函数"<<endl;
}
void Teacher::sk(){
	cout<<"我是派生类Teacher的纯虚函数sk"<<endl;
}