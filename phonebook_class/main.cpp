#include<iostream>
#include"phone.h"


using namespace std;

int main() {

	Phone a;
	a.print();
	a.setName();
	a.setHomeN();
	a.setWorkN();
	a.setMobileN();
	a.print();

	return 0;
}