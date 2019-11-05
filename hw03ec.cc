//=============================
// Programmer: Milo Fisher
// HW03ec
// Professor Kath
// CS1C TTH 12:30-2:50
//=============================

#include "extendedTime.h"
#include "invoice.h"
using namespace std;

int main()
{
	ExtendedTime et(9, 45, 37, PACIFIC);
	Invoice i(12, 0, 1);

	cout << "Extended time object:\n" << et << "\n\n";
	cout << "Invoice object:\n" << i << "\n";

	return 0;
}
