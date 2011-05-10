#include "vect.cc"
#include "angle.cc"

using namespace std;

int main (int argc, char * const argv[]) {
	angle a(1.67121);
	degree b(12,45,29);
	angle c(b);
	angle alfa=a+c;
	angle beta=a-c;
		
	cout<<alfa<<endl<<beta<<endl<<endl;
	return 0;
	}
