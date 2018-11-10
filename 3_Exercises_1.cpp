#include<algorithm>
#include<vector>
#include<iostream>
#include<string>
#include<iomanip>
#include<ios>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::string;
using std::streamsize;
using std::sort;
using std::vector;

double getMedian();

int main()
{
	cout <<  "Enter the integers: " << endl;
	double number;
	vector<double> num_array;
	typedef vector<double>::size_type vecSize;

	while(cin >> number){
		cout << "Hello Akash! You Rock!" << endl;		
		num_array.push_back(number);
	}

	sort(num_array.begin(),num_array.end());
	
	vecSize size = num_array.size();
	
	if(size == 0){
		cout << "You must enter at least one number. Try again." << endl;
		return 1;
	}

	vecSize mid = size/2;
	cout << "Mid is " << mid << endl;
	double median;
	median = size % 2 == 0 ? (num_array[mid] + num_array[mid - 1]) / 2
				: num_array[mid];
	cout << "The median is " << median << endl;

	vecSize q1 = mid/2;
	vecSize q3 = (mid +q1);

	double quartile1, quartile3;

	quartile1 = (mid) % 2 == 0 ? (num_array[q1] + num_array[q1 - 1]) / 2
				: num_array[q1];
	cout << "The first quartile is " << quartile1 << endl;

	quartile3= (mid) % 2 == 0 ? (num_array[q3] + num_array[q3 - 1]) / 2
				: num_array[q3];
	cout << "The third quartile is " << quartile3 << endl;
	//have to rework the logic here.
	//copy the logic for now until you get a hang of the syntax.
//Checking git functionality.
//git is cool.
	return 0;
}

double getMedian(void){

cout << "Akash, you are doing really well!" << endl;

return 0;
}
