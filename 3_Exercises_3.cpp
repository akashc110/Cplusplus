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

int main()
{
	
	cout << "Please enter your first name: " ;
	string name;
	vector<string> Student_names;	
	vector<double> Grades;
	typedef	vector<string>::size_type vector_size; 

	while(cin >> name){
		cout << "Please enter your first name: " ;
		Student_names.push_back(name);

		cout << "Hello, " << name << "!"  << endl;

		cout << "Please enter your midterm and final grades:";
		double midterm, final;
		cin >> midterm >> final;
		
		cout << "Enter all your homework grades, "
			"followed by end-of-file: ";
		double x;
		double counter;
		vector<double> homework;
		counter = 0;
		while(counter < 3){
			cin >> x;
			homework.push_back(x);
			++counter;
		}
		
		typedef vector<double>::size_type vec_sz;

		vec_sz size = homework.size();

		if(size == 0){
			cout << endl << "You must enter your grades. "
				<< "Please try again. " << endl;
		return 1;
		}

		// sort the grades
		sort(homework.begin(), homework.end());

		vec_sz mid = size/2;
		cout << "Mid is " << mid << endl;
		double median ;
		median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2
					: homework[mid];
/*		
		cout << "The median is " << median << endl;
		streamsize prec = cout.precision();

		cout << "0.2 * Midterm" << 0.2*midterm << endl;
		cout << "0.4 * Final" << 0.4*final << endl;
		cout << "Your final grade is " << setprecision(3)
			<< (0.2 * midterm) + (0.4 * final) + (0.4 * median) << setprecision(prec) << endl;
*/
		Grades.push_back((0.2 * midterm) + (0.4 * final) + (0.4 * median));
	}

	cout << "The grades for each student are as below: " << endl;
	streamsize prec = cout.precision();

	vector_size size = Student_names.size();

	for(int i = 0; i < size; ++i){
	
		cout << "Student Name: " << Student_names[i] << "\tGrade: " << Grades[i] << endl;
		
	}

return 0;
}
