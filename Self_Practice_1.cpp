#include<algorithm>
#include<iostream>
#include<iomanip>
#include<vector>
#include<string>
#include<ios>


using std::sort;
using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::streamsize;
using std::setprecision;

int main(){
	/*
	vector<double> numbers;
	typedef vector<double>::size_type size;
	for(int i = 0 ; i != 10; ++i){
	numbers.push_back(i);
	}

	size sz = numbers.size();

	cout << "Size of this vector is " << sz  << endl;

	int j =0;
	while(j != sz){
	cout << numbers[j] << endl;
	++j;
	}
	*/
	
	streamsize prec = cout.precision();

	cout <<  setprecision(4) << 1.12345678 << "   " <<1.12345678 << setprecision(2)<< "   " <<1.12345678 <<endl;
	cout << setprecision(prec) << 1.12345 << endl;

	return 0;



}
