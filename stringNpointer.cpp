#include<iostream>
using namespace std;

int main(){
	char word[] = "asdf";
	
	cout << word << endl;
	
	cout << word[0] << " " << *(word) << endl;
	
	cout << word[1] << " " << *(word+1) << endl;
	
	char* p = word;
	
	cout << p << endl;
	
	cout << p[0] << " " << *(p) << endl;
	cout << p[1] << " " << *(p+1) << endl;
	
	string text = "text";
	// c_str() return a const pointer to the start of the text char array
	const char* textCopy = text.c_str();
	
	cout << textCopy << endl;
	
	return 0;
}
