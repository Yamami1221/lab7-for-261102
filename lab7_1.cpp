#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    string input;
    cout << "Input text: "; cin >> input;
    cout << "Reversed text: ";
    cout << func1(input) << endl;
    cout << "Palindrome: ";
    if(func2(input) == func2(func1(input))){
    	cout << "Yes" << endl;
	}else{
    	cout << "No" << endl;
	}
    return 0;
}
