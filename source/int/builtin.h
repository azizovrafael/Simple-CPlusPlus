/* Integer */
#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>

using namespace std;

int INT(string value){
	/*
	This Function string convert to integer
	*/
	stringstream geek(value);
	int number = 0;
	geek >> number;
	return number;
}


int INT(const char value){
	/*
	This Function const char convert to integer
	*/
	stringstream charValue;
	charValue << value;

	unsigned int intValue;
	charValue >> intValue;

	return intValue;
}

int INT(char value[]){
	/*
	This Function char convert to integer
	*/
	stringstream charValue;
	charValue << value;

	unsigned int intValue;
	charValue >> intValue;

	return intValue;
}

int ABS(int value){
	if(value < 0 ){return value*(-1);}
	else if( value == 0 ){return 0;}
	else{return value;}
}



int LEN(string value){
	/*
	This function return string length
	*/
	return value.length();
}


int LEN(const char value[]){
	/* This function return const char length */
	string str = value;
	return str.length();
}

int LEN(char value[]){
	/* This function return char length */
	std::string s;
	std::stringstream ss;
	ss << value;
	ss >> s;
	return s.length();
}
