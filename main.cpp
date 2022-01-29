#include <iostream>
#include <string>
#include "router.h"

using namespace std;

int main(){
	string b ="11", text="Hello";
	int d = 321;
    char val = 'R';
    cout<<endl<<"String to Integer: "<<INT(b)<<endl;
	cout<<"Integer to String: "<<STR(d)<<endl;
	cout<<"Length String: "<<LEN(b)<<endl;
	cout<<"Upper String: "<<UPPER(text)<<endl;
    cout<<"Integer to Char: "<<CHAR(d)<<endl;

	const char *k = "22";
	const char *text1 = "Hello";
	cout<<endl<<"Const char to integer: "<<INT(k)<<endl;
	cout<<"Const char to String: "<<STR(k)<<endl;
	cout<<"Length Const Char: "<<LEN(k)<<endl;
	cout<<"Upper Const char: "<<UPPER(text1)<<endl;
    
	char m[] = "33";
	char text2[] = "Hello";
	cout<<endl<<"Char to integer: "<<INT(m)<<endl;
	cout<<"Char to string: "<<STR(m)<<endl;
	cout<<"Length Char: "<<LEN(m)<<endl;
	cout<<"UPPER char: "<<UPPER(text2)<<endl;
    cout<<"String to Char: "<<CHAR(text)<<endl;
    
    
    string rr;
    int ee;
    char* ff;
    const char *rd;
    rr = INPUT("String: ");
    ee = INT(INPUT("Integer: "));
    ff = CHAR(INPUT("Char: "));
    rd = CONST_CHAR(INPUT("Const Char: "));
    cout<<endl<<"String input: "<<rr<<endl<<"Integer Inout: "<<ee<<endl<<"Char INput: "<<ff<<endl;
    cout<<"CONst Char Input: "<<rd<<endl;
    
	return 0;
}
