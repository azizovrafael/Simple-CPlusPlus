/* String */
#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <cctype>
#include "std.h"


using namespace std;

string STR(int value){
	/*
	This function convert integer to string
	*/
	stringstream strValue;
	strValue << value;

	string str;
	strValue >> str;
	return str;
}


string STR(const char value[]){
	/* This Function convert const char to string */
	string str = value;
	return str;
}

string STR(char value[]){
	/* This Function convert char to string */
	std::string s;
	std::stringstream ss;
	ss << value;
	ss >> s;
	return s;
}


string UPPER(string sl){
	/*
	This function convert integer to string
	*/
	transform(sl.begin(), sl.end(), sl.begin(), ::toupper);
	return sl;
}


string UPPER(const char value[]){
	/* This Function convert const char to string */
	string su = value;
	transform(su.begin(), su.end(), su.begin(), ::toupper);
	return su;
	
}

string UPPER(char value[]){
	/* This Function convert char to string */
	std::string sl;
	std::stringstream ss;
	ss << value;
	ss >> sl;
	transform(sl.begin(), sl.end(), sl.begin(), ::toupper);
	return sl;
}

string LOWER(string sl){
    /*
    This function convert integer to string
    */
    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
    return sl;
}


string LOWER(const char value[]){
    /* This Function convert const char to string */
    string su = value;
    transform(su.begin(), su.end(), su.begin(), ::tolower);
    return su;
    
}

string LOWER(char value[]){
    /* This Function convert char to string */
    std::string sl;
    std::stringstream ss;
    ss << value;
    ss >> sl;
    transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
    return sl;
}
