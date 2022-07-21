#include<iostream>
#include"phone.h"
#include<vector>

using namespace std;
// функция задания параметров объекта через сеттеры
void setObj(Phone& a) {
	a.setName();
	a.setHomeN();
	a.setWorkN();
	a.setMobileN();
	a.setContactData();

}

int main() {

	Phone arr[3]{};
	Phone a("Bob", "778899", "445566", "89139132222", "Bob is great");
	cout << a << endl;
	
	return 0;
}