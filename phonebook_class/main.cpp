#include<iostream>
#include"phone.h"


using namespace std;

void setObj(Phone& a) {
	a.setName();
	a.setHomeN();
	a.setWorkN();
	a.setMobileN();
	a.setContactData();

}

int main() {

	Phone arr[3]{};

	for (int i = 0; i < 3; i++)
		setObj(arr[i]);

	for (int i = 0; i < 3; i++) {
		arr[i].print();
		cout << "-------------------------" << endl; 
	}


	return 0;
}