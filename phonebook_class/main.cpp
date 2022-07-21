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

	cout << "Phonebook" << endl;
	int menu{1};
	vector<Phone> book;
	while (menu != 0) {
		cout << "1 - Add abonent, 2 - Show all abonents, 3 - Search by name, 4 - Delete abonent, Any other key - Exit\n";
		cin >> menu;
		switch (menu) {
		case 1: {
			Phone a;
			setObj(a);
			book.push_back(a);
			break;
		}
		case 2: {
			if (book.size() == 0)
				cout << "No contact in book\n";
			for (int i = 0; i < book.size(); i++)
				cout << book[i];
			break;
		}
		case 3: {
			string search{};
			cout << "Enter name to search: ";
			cin >> search;
			if (book.size() == 0)
				cout << "No contact in book\n";
			for (int i = 0; i < book.size(); i++) {
				if (search == book[i].getName())
					cout << book[i];
			}
			break;
		}
		case 4: {
			cout << "You have " << book.size() << " abonents. Which delete?\n";
			int choise{};
			cin >> choise;
			if (choise >= 0 && choise < book.size())
				book.erase(book.begin() + (choise-1));
			break;
		}
		default: {
			cout << "Goodbye!\n";
			menu = 0;
			break;
		}
		}
	}


	return 0;
}