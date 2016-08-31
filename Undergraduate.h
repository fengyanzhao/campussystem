#ifndef UNDERGRADUATE_H
#define UNDERGRADUATE_H 0
#include"Student.h"
class Undergraduate:virtual public Student{
	public:
	    int credits;
	    Undergraduate(int ID,int AGE,string NAME,int YEAR,int MONTH,int DAY,int EDUYEAR,int SCORE1,int SCORE2,int CREDITS);
	    Undergraduate();
	    ~Undergraduate();
	    void show();
	    virtual void sk();
};
#endif
