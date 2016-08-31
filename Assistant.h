#ifndef ASSISTANT_H
#define ASSISTANT_H 0
#include"Undergraduate.h"
#include"Teacher.h"
#include<string>

class Assistant:public Teacher,public Undergraduate{
	public:
	    int schooltime;
		Assistant(int ID,int AGE,string NAME,int YEAR,int MONTH,int DAY,int EDUYEAR,int SCORE1,int SCORE2,int WORKYEAR,int SALARY,int CREDITS,int SCHOOLTIME);
		Assistant();
		~Assistant();
		void show();
		virtual void sk();
};
#endif
