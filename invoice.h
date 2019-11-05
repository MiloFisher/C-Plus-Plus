#ifndef INVOICE_H
#define INVOICE_H

#include "time.h";

class Invoice
{
private:
	Time purchase_time;
public:
	Invoice();
	Invoice(int,int,int);
	friend ostream& operator<<(ostream&,Invoice&);
};

#endif
