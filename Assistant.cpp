#include<iostream>
#include<string>
#include"Assistant.h"
using namespace std;


Assistant::Assistant(int ID,int AGE,string NAME,int YEAR,int MONTH,int DAY,int EDUYEAR,int SCORE1,int SCORE2,int WORKYEAR,int SALARY,int CREDITS,int SCHOOLTIME):Undergraduate(ID,AGE,NAME,YEAR,MONTH,DAY,EDUYEAR,SCORE1,SCORE2,CREDITS),Teacher(ID,AGE,NAME,WORKYEAR,SALARY),Student(ID,AGE,NAME,YEAR,MONTH,DAY,EDUYEAR,SCORE1,SCORE2),Person(ID,AGE,NAME){
	schooltime=SCHOOLTIME;
	cout<<"派生类Assistant的有参构造函数"<<endl;
}
Assistant::Assistant(){
	schooltime=0;
	cout<<"派生类Assistant的无参构造函数"<<endl;
}
Assistant::~Assistant(){
	cout<<"派生类Assistant的析构函数"<<endl;
}
void Assistant::show(){
	cout<<"name: "<<name<<endl;
	cout<<"age: "<<age<<endl;
	cout<<"id: "<<id<<endl;
	cout<<"workyear: "<<workyear<<endl;	
	cout<<"eduyear: "<<eduyear<<endl;
	cout<<"score1:  "<<score1<<endl;
	cout<<"score2:  "<<score2<<endl;
	cout<<"credits: "<<credits<<endl;
	cout<<"schooltime: "<<schooltime<<endl;
	cout<<"派生类Undergraduate的show函数"<<endl;
}
void Assistant::sk(){
	cout<<"我是派生类Assistant的纯虚函数sk"<<endl;
}
