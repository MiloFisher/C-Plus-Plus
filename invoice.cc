#include "invoice.h"

Invoice::Invoice() : purchase_time(0,0,0)
{}

Invoice::Invoice(int h, int m, int s) : purchase_time(h,m,s)
{}

ostream& operator<<(ostream& stream, Invoice& i)
{
	stream << i.purchase_time;
	return stream;
}
