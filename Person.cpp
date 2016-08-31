#include<iostream>
#include<string>
#include "Person.h"
using namespace std;
Person::Person(int ID,int AGE,string NAME){
	name=NAME;
	age=AGE;
	id=ID;
	cout<<"基类Person的有参构造函数"<<endl;
}
Person::Person(){
	name="nothing";
	age=0;
	id=0;
	cout<<"基类Person的无参构造函数"<<endl;
}
void Person::show(){
	cout<<"name: "<<name<<endl;
	cout<<"age: "<<age<<endl;
	cout<<"id: "<<id<<endl;
}
Person::~Person(){
	cout<<"基类Person的析构函数"<<endl;
	cout<<"destruct one object"<<endl;
}
