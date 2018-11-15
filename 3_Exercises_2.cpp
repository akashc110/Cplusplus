#include<string>
#include<iostream>
#include<ios>
#include<iomanip>
#include<algorithm>
#include<vector>

using std::cout;
using std::cin;
using std::sort;
using std::string;
using std::streamsize;
using std::endl;
using std::setprecision;
using std::vector;
using std::count;

int main(){

vector <string> values;

string line;
int max = 0;
int min = 100;
string word;
string word_short;

cout << "Please enter a word: " ; 	

while(cin >> line){
	cout << "Please enter a word: " ; 	
	values.push_back(line);
}

typedef vector <string> ::size_type vectorSize;

sort(values.begin(),values.end());

vectorSize size = values.size();

for(int i = 0; i < size; ++i){
	
	if(values[i].size() > max){
		
		word = values[i];	
		max = values[i].size();

	}
	if(values[i].size() < min){

		word_short = values[i];
		min = values[i].size();
	}

	cout << "The word "<< values[i] << " appears " << count(values.begin(),values.end(),values[i])<< endl;
	
}

cout << "The length of longest string is " << max << ". The string is " << word << endl;	
cout << "The length of shortest string is " << min << ". The string is " << word_short << endl;	



return 0;
}
