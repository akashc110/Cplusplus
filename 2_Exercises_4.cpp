#include<iostream>
#include<string>

using std::cin;
using std::cout;
using std::string;
using std::endl;

int main()
{
	const int rows = 2;
	const int columns = rows*2 + 1;
	cout << endl;	
	for(int i = 0; i != rows; ++i){
		cout << '\t';	
		for(int j = 0; j != columns; ++j){		
			cout << '*';
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
