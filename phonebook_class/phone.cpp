#include "phone.h"

using namespace std;

void Phone::print() {
	if (this->name == nullptr) {
		cout << "Name is empty" << endl;
	}
	else {
		cout << "Name - " << this->name << endl;
	}
	cout << "Home Number - " << this->home_number << endl;
	cout << "Work Number - " << this->work_number << endl;
	cout << "Mobile Number - " << this->mobile_number << endl;
	if (this->contact_data == nullptr) {
		cout << "Contacta data is empty" << endl;
	}
	else {
		cout << "About Contact - " << this->contact_data << endl;
	}
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

void Phone::setWorkN() {
	char workP[7]{};
	cout << "Enter Work Number with 6 numbers ";
	cin.getline(workP, 7);
	strcpy_s(this->work_number, workP);
}

void Phone::setMobileN() {
	char mobileP[12]{};
	cout << "Enter Mobile Number with 12 numbers ";
	cin.getline(mobileP, 12);
	strcpy_s(this->mobile_number, mobileP);
}

void Phone::setContactData() {
	string data;
	cout << "Enter data about contact ";
	cin >> data;
	delete[]this->contact_data;
	int length = size(data) + 1;
	this->contact_data = new char[length];
	for (int i = 0; i < length; i++) {
		this->contact_data[i] = data[i];
	}
	cin.ignore();
}