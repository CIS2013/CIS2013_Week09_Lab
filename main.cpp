#include <fstream>
#include <iostream>
using namespace std;

int main(){
	int As = 0;
	int Fs = 0;
	int as = 0;
	int bs = 0;
	int total = 0;
	
	ifstream in_a;
	
	in_a.open("info.dat");
	if(in_a.fail()){
		cout << "Something really aweful happened here with info.dat";
		exit(1);
	}
	
	for(int i = 0; i<=9190; i++){
			char x;
			in_a >> x;
			if(x == 'A'){ As++; }
			else if(x == 'F'){ Fs++; }
			else if(x == 'a'){ as++; }
			else if(x == 'b'){ bs++; }
			total++;
	}
	
	cout << "Total A: " << As << endl;
	cout << "Total F: " << Fs << endl;
	cout << "Total a: " << as << endl;
	cout << "Total b: " << bs << endl;
	cout << "All Total: " << total << endl;
	
}