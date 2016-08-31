#include"Undergraduate.h"
using namespace std;

Undergraduate::Undergraduate(int ID,int AGE,string NAME,int YEAR,int MONTH,int DAY,int EDUYEAR,int SCORE1,int SCORE2,int CREDITS):Student(ID,AGE,NAME,YEAR,MONTH,DAY,EDUYEAR,SCORE1,SCORE2){
	credits=CREDITS;
	cout<<"派生类Undergraduate的有参构造函数"<<endl;
}
Undergraduate::Undergraduate(){
	credits=0;
	cout<<"派生类Undergraduate的无参构造函数"<<endl;
}
Undergraduate::~Undergraduate(){
	cout<<"派生类Undergraduate的析构函数"<<endl;
}
void Undergraduate::show(){
	cout<<"name: "<<name<<endl;
	cout<<"age: "<<age<<endl;
	cout<<"id: "<<id<<endl;
	cout<<"eduyear: "<<eduyear<<endl;
	cout<<"score1:  "<<score1<<endl;
	cout<<"score2:  "<<score2<<endl;
	cout<<"credits: "<<credits<<endl;
	cout<<"派生类Undergraduate的show函数"<<endl;
}
void Undergraduate::sk(){
	cout<<"我是派生类Undergraduate(本科生)的纯虚函数sk"<<endl;
}
