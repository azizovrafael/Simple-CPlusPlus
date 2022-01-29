#include <iostream>
#include <string>

using namespace std;

string INPUT(string text = "-> "){
    cout<<text;
	string response="" ;
	getline (cin, response);
	return response;
}
