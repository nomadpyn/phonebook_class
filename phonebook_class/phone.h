#pragma once
#include<iostream>
using namespace std;
class Phone
{
private:
	char * name;
	char home_number[7]{};
	char work_number[7]{};
	char mobile_number[12]{};
	char * contact_data;
public:
	Phone(string nameP,const char homeP[7],const char workP[7],const char mobileP[12],string data) {
		int length= size(nameP)+1;
		int i = 0;
		this->name = new char[length];
		for  (i = 0; i < length; i++) {
			this->name[i] = nameP[i];
		}
		for (i = 0; i < 6; i++) {
			this->home_number[i] = homeP[i];
		}
		for (i = 0; i < 6; i++) {
			this->work_number[i] = workP[i];
		}
		for (i = 0; i < 12; i++) {
			this->mobile_number[i] = mobileP[i];
		}
		length = size(data)+1;
		this->contact_data = new char[length];
		for (i = 0; i < length; i++) {
			this->contact_data[i] = data[i];
		}
	}
	Phone() {
		this->name = nullptr;
		this->contact_data=nullptr;
	}
	Phone(const Phone & other){
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
		length = strlen(other.contact_data) + 1;
		this->contact_data = new char[length];
		for (i = 0; i < length; i++) {
			this->contact_data[i] = other.contact_data[i];
		}
	}
	~Phone() {
		delete[] name;
		delete[] contact_data;
	}
	void print();
	void setName();
	void setHomeN();
	void setWorkN();
	void setMobileN();
	void setContactData();
};

