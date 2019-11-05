#include "extendedTime.h"

ExtendedTime::ExtendedTime() : Time(), time_zone(PACIFIC)
{}

ExtendedTime::ExtendedTime(int h, int m, int s, TimeZone z) : Time(h, m, s), time_zone(z)
{}

ostream& operator<<(ostream& stream, const ExtendedTime& et)
{
	stream << Time(et) << " ";
	switch(et.time_zone)
	{
	case 0: stream << "PACIFIC"; break;
	case 1: stream << "MOUNTAIN"; break;
	case 2: stream << "CENTRAL"; break;
	case 3: stream << "EASTERN"; break;
	}
	return stream;
}
