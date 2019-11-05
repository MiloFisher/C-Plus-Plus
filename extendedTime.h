#ifndef EXTENDED_TIME_H
#define EXTENDED_TIME_H

#include "time.h"

enum TimeZone {PACIFIC, MOUNTAIN, CENTRAL, EASTERN};

class ExtendedTime : public Time
{
private:
	TimeZone time_zone;
public:
	ExtendedTime();
	ExtendedTime(int,int,int,TimeZone);
	friend ostream& operator<<(ostream&,const ExtendedTime&);
};

#endif
