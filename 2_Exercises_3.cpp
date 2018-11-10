#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
/*
	int i = 0;
	while(i < 10){
		i += 1;
		cout << i << endl;
	}
*/
/*
	int i = 11;
	while(i > -5){
		i -= 1;
		cout << i << endl;
	}
*/
/*
	int i = 9;
	int product = 1;
	while(i > 1){
		product *= i;
		i -= 1;
	}
	cout << product << endl;	
*/

	int a; 
	int b;
	cout << "Enter a number: ";
	cin >> a;
	cout << "\nEnter another number: ";
	cin >>b;
	cout << endl;
	if(a > b){
		cout<< a <<" is greater than "<< b << endl;
	}else{
		cout<< b <<" is greater than or equal to "<< a << endl;
	}
	return 0;
}
