#include<iostream>
#include<string>
using namespace std;

string mixText(string x,string y){
	string a;
	int L = x.size();
	int l = y.size();
	
	int i = 0;
	if(L == l){
		while(i<L){
			a = a+x[i]+y[i];
			i++;
		}
	
	}else{
		return "E";
	}
	return a;
}



int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
