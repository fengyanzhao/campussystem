#include<iostream>
#include<string>
#include"Undergraduate.h"
#include"Assistant.h"
using namespace std;

ostream & operator<<(ostream &output,Person &per){
	output<<per.name<<","<<per.age<<","<<per.id;
	return output;
}
istream& operator>>(istream& input,Person &per){
	input>>per.name>>per.age>>per.id;
	return input;
}
void h1(){//建立Person对象
	Student p1(1,22,"zhangsan",2012,9,1,4,80,90);
	Student p2;
	p1.Person::show();
	cin>>p2;
	cout<<"p2的信息："<<p2<<endl;
}

void h2(){//建立Student对象
	Student p3(2,21,"lisi",2012,9,1,4,79,45);//创建Student类的对象
	p3.show();//调用p3的show函数
	p3.time.show();//调用p3的Time类的子对象的show函数
	
	Person *people;//定义基类Person的对象指针
	people = &p3;//基对象指针指向派生类Student对象
	people->sk();//多态
}

void h3(){//建立Teacher对象
	Teacher p4(4,45,"wangyanwei",10,3000);
	p4.show();
	
	Person *people;
	people = &p4;
	people->sk();
}
void h4(){//建立Undergraduate对象
	Undergraduate p5(5,22,"guoshasha",2011,9,2,4,90,95,16);
	p5.show();
	p5.time.show();
	
	Person *people;
	people = &p5;
	people->sk();
}
void h5(){//建立Assistant对象
	Assistant p8(8,26,"yanwenxiang",2010,8,30,3,88,98,3,1,1500,100);
	p8.show();
	p8.time.show();
	Person *people;
	people = &p8;
	people->sk();
}
void h6(){//多态的实现
	Person *people;
	Student p10;
	people = &p10;
	people->sk();
	
	Teacher p11;
	people = &p11;
	people->sk();
	
	Undergraduate p12;
	people = &p12;
	people->sk();
	
	Assistant p15;
	people = &p15;
	people->sk();
}

int menu_select(){
	cout<<"1,建立Person对象"<<endl;
	cout<<"2,建立Student对象"<<endl;
	cout<<"3,建立Teacher对象"<<endl;
	cout<<"4,建立Undergraduate对象"<<endl;
	cout<<"5,建立Assistant对象"<<endl;
	cout<<"6,多态的实现"<<endl;
	cout<<"7,退出程序"<<endl;
	int menu;
	while(1){
		cin>>menu;
		if(menu<1||menu>7)
			cout<<"输入错误，请重新输入1-12"<<endl;
		else return menu;
	}
}
void handlemenu(){
	while(1){
		switch(menu_select()){
			case 1:
			   h1();
			   break;
			case 2:
			   h2();
			   break;
			case 3:
			   h3();
			   break;
			case 4:
			   h4();
			   break;
			case 5:
			   h5();
			   break;
			case 6:
			   h6();
			   break;
			case 7:
			   return;
		}
	}
}
int main(){
	handlemenu();
	return 0;
}
