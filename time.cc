#include "time.h"

Time::Time() : hours(0), minutes(0), seconds(0)
{}

Time::Time(int hrs, int min, int sec) : hours(hrs), minutes(min), seconds(sec)
{}

ostream& operator<<(ostream& stream, const Time& t)
{
	string h,m,s;
	if(t.hours < 10)
		h = "0";
	if(t.minutes < 10)
		m = "0";
	if(t.seconds < 10)
		s = "0";
	stream << h << t.hours << ":" << m << t.minutes << ":" << s << t.seconds;
	return stream;
}
