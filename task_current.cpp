
#include <iostream>
using namespace std;

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;
/*
int main() {
        // входной вектор
    std::vector<int> v = { 1, 2, 3, 4, 2, 2, 4, 6, 5 };

    // начальный и конечный индекс
    //int m = 4, n = 7;

    int v_0 = v.at(0);
    cout << v_0 << endl;

    for (auto v.begin()+1, v.end() ){cout << v_0 << endl;}

    return 0;
}
*/
vector<int> ReadLineWithNumbers()
{
    vector<int> grades;
    int grades_count;
    cin >> grades_count;
    cin.get();
    if (grades_count > 0)
        for (int i = 0; i < grades_count; ++i)
        {
            int cur_grade;
            cin >> cur_grade;
            cin.get();
            grades.push_back(cur_grade);
        }
    return grades;
}

// C++ program for the above approach
#include "bits/stdc++.h"
using namespace std;

// Function to slice a given vector
// from range X to Y
vector<int> slicing(vector<int>& arr,
					int X)
{

	// Starting and Ending iterators
    int s =arr.size();
	auto start = arr.begin() + X;
	auto end = arr.begin() + s;
    //auto end = arr.end();

	// To store the sliced vector
	vector<int> result(s - X );

	// Copy vector using copy function()
	copy(start, end, result.begin());

	// Return the final sliced vector
	return result;
}

// Function to print the vector ans
void printResult(vector<int>& ans)
{

	// Traverse the vector ans
	for (auto& it : ans) {

		// Print elements
		cout << it << ' ';
	}
}

// нахожу средний рейтинг
int ComputeAverageRating(const vector<int>& ratings){
    // Given range
	int X = 1;
    int end_v =ratings.size();
	auto start = ratings.begin() + X;
	auto end = ratings.begin() + end_v;
    //auto end = arr.end();

	// To store the sliced vector
	vector<int> result(end_v - X );

	// Copy vector using copy function()
	copy(start, end, result.begin());

    int summ = 0;
    for (auto el : result){summ+= el;}
    return summ/(end_v-1);
}

string ReadLine() {
    string s;
    getline(cin, s);
    return s;
}

int ReadLineWithNumber() {
    int result;
    cin >> result;
    ReadLine();
    return result;
}


// Driver Code
int main()
{

	// Given vector
	vector<int> arr = { 1, 3, 4, 2,
						4, 2, 1 };

	// Given range
	int X = 1;



	// Function Call
	vector<int> ans;
	vector<int> new_ans;
	ans = slicing(arr, X);

	// Print the sliced vector
	printResult(ans);
    cout << "summ : "s << ComputeAverageRating(arr) << endl;
    new_ans = ReadLineWithNumbers();
    /*int  n;
    cin >> n;
    cin.get();
    cout << "vvod: "s << n << endl;
    for (int document_id = 0; document_id < n; ++document_id) {
    	int m;
    	//cin.get();
    	m = ReadLineWithNumber();
    	cout << "m: "s << m << endl;
    	new_ans.push_back(m);
    */
    for (auto el : new_ans){cout << "el : "s<< el << endl;}}
