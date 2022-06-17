#include "phone.h"

using namespace std;

void Phone::print() {
	if (this->name == nullptr) {
		cout << "Name is empty" << endl;
	}
	else {
		cout << "Name - " << this->name << endl;
	}
	if (this->home_number[0] == 0) {
		cout << "Home number is empty" << endl;
	}
	else {
		cout << "Home Number - " << this->home_number << endl;
	}
		
		//cout << "Work Number - " << this->work_number << endl;
		//cout << "Mobile Number - " << this->mobile_number << endl;
		//cout << "About Contact - " << this->contact_data << endl;
	//}
}

void Phone::setName() {
	string nameP;
	cout << "Enter name ";
	cin >> nameP;
	delete[]this->name;
	int length = size(nameP)+1;
	this->name = new char[length];
	for (int i = 0; i < length; i++) {
		this->name[i] = nameP[i];
	}
	cin.ignore();
}

void Phone::setHomeN() {
	char homeP[7]{};
	cout << "Enter Home Number with 6 numbers ";
	cin.getline(homeP, 7);
	strcpy_s(this->home_number, homeP);
}
