#include "phone.h"

using namespace std;

void Phone::print() {
	cout << "Name - " << this->name << endl;
	cout << "Home Number - " << this->home_number << endl;
	cout << "Work Number - " << this->work_number << endl;
	cout << "Mobile Number - " << this->mobile_number << endl;
	cout << "About Contact - " << this->contact_data << endl;
}