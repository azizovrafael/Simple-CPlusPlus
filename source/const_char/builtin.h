/* Const Char */
#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <cctype>
#include "std.h"

using namespace std;

const char* CONST_CHAR(string str){
    /*
    This function convert String to Const Char
    */
    const char * c = str.c_str();
    return c;
}

const char* CONST_CHAR(int value){
    /*
    This function convert Integer to Const Char
    */
    stringstream strValue;
    strValue << value;

    string str;
    strValue >> str;

    const char * c = str.c_str();
    
    return c;
}


const char* CONST_CHAR(char value[]){
    /*
    This function convert Char to Const Char
    */
    std::string s;
    std::stringstream ss;
    ss << value;
    ss >> s;
    
    const char * c = s.c_str();
    return c;
}
