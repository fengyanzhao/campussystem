#include<iostream>
#include"Time.h"
using namespace std;
Time::Time(int YEAR,int MONTH,int DAY){
	year=YEAR;
	month=MONTH;
	day=DAY;
	cout<<"Time类的有参构造函数"<<endl;
}
Time::Time(){
	year=0;
	month=0;
	day=0;
	cout<<"Time类的无参构造函数"<<endl;
}
Time::~Time(){
	cout<<"Time类的析构函数"<<endl;
}
void Time::show(){
	cout<<"year:  "<<year<<endl;
	cout<<"month: "<<month<<endl;
	cout<<"day:   "<<day<<endl;
	cout<<"Time类的show函数"<<endl;
}