#ifndef TIME_H
#define TIME_H 0
class Time{
	private:
	   int year;
	   int month;
	   int day;
	public:
	   Time(int YEAR,int MONTH,int DAY);
	   Time();
	   ~Time();
	   void show();
};
#endif
