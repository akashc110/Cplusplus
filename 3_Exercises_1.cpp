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
	vector<double> num_array, q1_array, q3_array;
	typedef vector<double>::size_type vecSize;

	while(cin >> number){
		//cout << "Hello Akash! You Rock!" << endl;		
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
	
	//if size of vector is even, split in two halves
	
	if(size % 2 == 0){
		for(int i = 0; i < mid; ++i){
			q1_array.push_back(num_array[i]);
		}
		sort(q1_array.begin(),q1_array.end());
		vecSize length = q1_array.size();		
		vecSize quart = length/2;
		
		double quartile1;
		quartile1 = length % 2 == 0 ? (q1_array[quart] + q1_array[quart - 1]) / 2
				: q1_array[quart];
		cout << "The first quartile is " << quartile1 << endl;
	
		for(int i = mid; i < size; ++i){
			q3_array.push_back(num_array[i]);
		}
		sort(q3_array.begin(),q3_array.end());
		vecSize length_2 = q3_array.size();		
		vecSize quart3 = length_2/2;
		
		double quartile3;
		quartile3 = length_2 % 2 == 0 ? (q3_array[quart3] + q3_array[quart3 - 1]) / 2
				: q3_array[quart3];
		cout << "The third quartile is " << quartile3 << endl;
	}	


	//if size of vector is odd, make two halves excluding median
	else{
		for(int i = 0; i < mid; ++i){
			q1_array.push_back(num_array[i]);
		}
		sort(q1_array.begin(),q1_array.end());
		vecSize length = q1_array.size();		
		vecSize quart = length/2;
		
		double quartile1;
		quartile1 = length % 2 == 0 ? (q1_array[quart] + q1_array[quart - 1]) / 2
				: q1_array[quart];
		cout << "The first quartile is " << quartile1 << endl;
	
		for(int i = mid+1; i < size; ++i){
			q3_array.push_back(num_array[i]);
		}
		sort(q3_array.begin(),q3_array.end());
		vecSize length_2 = q3_array.size();		
		vecSize quart3 = length_2/2;
		
		double quartile3;
		quartile3 = length_2 % 2 == 0 ? (q3_array[quart3] + q3_array[quart3 - 1]) / 2
				: q3_array[quart3];
		cout << "The third quartile is " << quartile3 << endl;


	}

	return 0;
}

double getMedian(void){

cout << "Akash, you are doing really well!" << endl;

return 0;
}
