#pragma once
#include<iostream>
using namespace std;
class Phone
{
private:
	char * name;
	char home_number[6];
	char work_number[6];
	char mobile_number[12];
	char * contact_data;
public:
	Phone(char* nameP, char homeP[6], char workP[6], char mobileP[12], char* data) {
		name = new char[strlen(nameP)+1];
		for (int i = 0; i < strlen(nameP); i++) {
			name[i] = nameP[i];
		}
		name[strlen(nameP) + 1] = '\0';

	};
};

