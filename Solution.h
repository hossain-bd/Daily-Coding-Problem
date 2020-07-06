#pragma once
#include <vector>

class Solution
{
public:

    /*
    Vectors are known as dynamic arrays with the ability to resize
    itself automatically when an element is inserted or deleted,
    with their storage being handled automatically by the container.

    Vector of Vectors is a two-dimensional vector with a variable
    number of rows where each row is vector. Each index of vector
    stores a vector which can be traversed and accessed using iterators.
    It is similar to an Array of Vectors but with dynamic properties.
    */
    bool isToeplitzMatrix(std::vector<std::vector<int>>& matrix)    // solution to problem_315
    {
        /*
        matrix.size() returns number of rows in matrix attribute
        matrix[i].size() returns number of columns in row 'i'
        */
        for (int i = 0; i < matrix.size() - 1; i++)
            for (int j = 0; j < matrix[i].size() - 1; j++)
                if (matrix[i][j] != matrix[i + 1][j + 1])   // compares the diagonal value of next rows
                    return false;                           // false if diagonal values are not equal

        return true;
    }
};

