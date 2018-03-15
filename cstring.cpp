#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char name[6] = "Bobby";
	char last[8] = "Rockers";
	char copy[8];
	
	strncpy(copy, last, 4);
	
	cout << "Firstname: " << name << " Lastname: " << copy << endl;
}