/* Char */
#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
#include <cctype>

using namespace std;

char* CHAR(string value){
    /* This Function convert string to char */
    char* p = new char;
 
    int i;
    for (i = 0; i < sizeof(p); i++) {
        p[i] = value[i];
    }
    
    return p;
}

char* CHAR(int value){
    /* This Function convert integer to char */
    stringstream strValue;
    strValue << value;

    string str;
    strValue >> str;
    
    char* p = new char;
 
    int i;
    for (i = 0; i < sizeof(p); i++) {
        p[i] = str[i];
    }
    return p;
}


char* CHAR(const char value[]){
    /* This Function convert const char to char */
    string s = value;
    char* p = new char;
 
    int i;
    for (i = 0; i < sizeof(p); i++) {
        p[i] = s[i];
    }
    
    return p;
}
