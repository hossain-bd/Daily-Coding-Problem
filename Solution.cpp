#include "Solution.h"
#include <iostream> 

using namespace std;

int main() {
	Solution solve;

	vector<vector<int>> matrix = {
		{1, 2, 3, 4},
		{5, 1, 2, 3},
		{9, 5, 1, 1}
	};

	cout << boolalpha << solve.isToeplitzMatrix(matrix) << endl;
};