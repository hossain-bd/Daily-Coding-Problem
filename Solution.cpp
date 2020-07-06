#include "Solution.h"
#include <iostream> 

using namespace std;

int main() {
	Solution solve;

	// *********************   Problem_315 ***********************

	/*
	Vectors are known as dynamic arrays with the ability to resize 
	itself automatically when an element is inserted or deleted, 
	with their storage being handled automatically by the container.

	Vector of Vectors is a two-dimensional vector with a variable 
	number of rows where each row is vector. Each index of vector 
	stores a vector which can be traversed and accessed using iterators. 
	It is similar to an Array of Vectors but with dynamic properties.
	*/

	vector<vector<int>> matrix = {
		{1, 2, 3, 4},
		{5, 1, 2, 3},
		{9, 5, 1, 2}
	};

	/*
	When the boolalpha format flag is set, bool values are 
	inserted/extracted by their textual representation: either 
	true or false, instead of integral values.
	*/

	cout << boolalpha << solve.isToeplitzMatrix(matrix) << endl;
};
