#include "phone.h"

using namespace std;
// перегрузка оператора = для копирования
Phone& Phone::operator=(const Phone& other) {
	if (this->name != nullptr) {
		delete this->name;
	}
	int length = strlen(other.name) + 1;
	int i = 0;
	this->name = new char[length];
	for (i = 0; i < length; i++) {
		this->name[i] = other.name[i];
	}
	for (i = 0; i < 6; i++) {
		this->home_number[i] = other.home_number[i];
	}
	for (i = 0; i < 6; i++) {
		this->work_number[i] = other.work_number[i];
	}
	for (i = 0; i < 12; i++) {
		this->mobile_number[i] = other.mobile_number[i];
	}
	if (this->contact_data != nullptr) {
		delete this->contact_data;
	}
	length = strlen(other.contact_data) + 1;
	this->contact_data = new char[length];
	for (i = 0; i < length; i++) {
		this->contact_data[i] = other.contact_data[i];
	}
	return *this;
}
//перегрузка оператора = для перемещения
Phone& Phone::operator=(Phone&& other) {
	if (!(this == &other)) {
		delete[]this->name;
		this->name = other.name;
		other.name = nullptr;
		delete[]this->contact_data;
		this->contact_data = other.contact_data;
		other.contact_data = nullptr;
		strcpy_s(this->home_number, other.home_number);
		strcpy_s(this->work_number, other.work_number);
		strcpy_s(this->mobile_number, other.mobile_number);
	}
	return *this;
}
// метод вывода данных о контакте
void Phone::print() const {
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
// сеттер для имени контакта
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
// сеттер для домашнего номера телефона
void Phone::setHomeN() {
	char homeP[7]{};
	cout << "Enter Home Number with 6 numbers ";
	cin.getline(homeP, 7);
	strcpy_s(this->home_number, homeP);
}
// сеттер для рабочего номера телефона
void Phone::setWorkN() {
	char workP[7]{};
	cout << "Enter Work Number with 6 numbers ";
	cin.getline(workP, 7);
	strcpy_s(this->work_number, workP);
}
// сеттер для мобильного номера телефона
void Phone::setMobileN() {
	char mobileP[12]{};
	cout << "Enter Mobile Number with 12 numbers ";
	cin.getline(mobileP, 12);
	strcpy_s(this->mobile_number, mobileP);
}
// сеттер для данных о контакте
void Phone::setContactData() {
	char data[256];
	cout << "Enter data about contact ";
	cin.getline(data, 256);
	int length{};
	for (int i = 0; i < 256; i++) {
		length++;
		if (data[i] == '\0')
			break;
	}
	delete[]this->contact_data;
	this->contact_data = new char[length];
	for (int i = 0; i < length; i++) {
		this->contact_data[i] = data[i];
	}
		
}
// перегрузка оператора << вывода данных об объекте в консоль
ostream& operator<<(ostream& output, const Phone& other) {
	if (other.name == nullptr) {
		cout << "Name is empty" << ", ";
	}
	else {
		cout << "Name - " << other.name << ", ";
	}
	cout << "Home Number - " << other.home_number << ", ";
	cout << "Work Number - " << other.work_number << ", ";
	cout << "Mobile Number - " << other.mobile_number << ", ";
	if (other.contact_data == nullptr) {
		cout << "Contacta data is empty" << ", ";
	}
	else {
		cout << "About Contact - " << other.contact_data << ".\n";
	}
	
	return output;
}
// геттер для имени абонента
char* Phone::getName() const {
	return this->name;
}