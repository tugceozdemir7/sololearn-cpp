#include <iostream>
#include "Birthday.h"
using namespace std;


int main() {
	Birthday bd(27,06,1998);
	bd.printdate();
	Person p("john",bd);
	p.printinfo();
	
	
	return 0;
}
