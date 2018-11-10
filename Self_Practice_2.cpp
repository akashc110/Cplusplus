#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<ios>
#include<vector>

using std::cout;
using std::cin;
using std::vector;
using std::setprecision;
using std::sort;
using std::string;
using std::streamsize;
using std::endl;

int main(){

streamsize prec = cout.precision();

cout << 1.12345 << setprecision(2) << endl <<1.12345 << endl;

cout.precision(prec);

typedef vector<double>::size_type akash;

vector<double> myVec;

for(int i = 0; i < 5; ++i){
	
	myVec.push_back(i);
}

akash awesome = myVec.size();

cout << "The size of the vector is " <<  awesome << endl;

int ant = 1.12345;

cout << ant << endl;







return 0;
}
