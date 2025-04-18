#include <iostream>
#include <vector>
using namespace std;

// Time Complexity: O(m * n) where m is the number of rows and n is the number of columns in the matrix
// Space Complexity : O(m * n) for storing the result.
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> result;

    if (matrix.empty())
        return result;

    int top = 0, bottom = matrix.size() - 1, left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            result.push_back(matrix[top][i]);
        }
        top++;

        for (int i = top; i <= bottom; i++)
        {
            result.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return result;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<int> result = spiralOrder(matrix);

    for (int num : result)
    {
        cout << num << " ";
    }

    return 0;
}
