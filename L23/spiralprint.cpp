#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    vector<int> v;
    int j = 0;
    int i = 0;
    for (i = 0; i < matrix.size(); i++)
    {
        if (i == 0 && j == 0)
        {
            for (j = 0; j < matrix[0].size(); j++)
            {
                v.push_back(matrix[i][j]);
            }
            if (i == 0 && j == matrix[0].size())
            {

                for (j = matrix[0].size() - 1; j < matrix[0].size(); j++)
                {

                    for (i = 1; i < matrix.size() - 1; i++)
                    {
                        v.push_back(matrix[i][j]);
                    }
                }
                i = matrix.size() - 1;
                j = matrix[0].size() - 1;
            }
            if (i == matrix.size() - 1 && j == matrix[0].size() - 1)
            {
                for (i = matrix.size() - 1; i < matrix.size(); i++)
                {
                    for (j = matrix[0].size() - 1; j > 0; j--)
                    {
                        v.push_back(matrix[i][j]);
                    }
                }
                i = matrix.size() - 1;
                j = 0;
            }
            if (i == matrix.size() - 1 && j == 0)
        {

            for (j = 0; j < 1; j++)
            {

                for ( i = matrix.size() - 1 ; i > 0; i--)
                {
                    v.push_back(matrix[i][j]);
                }
            }
            i=1;//changable
            j=0;
        }
        if (i == 1 && j == 0)
        {
            for (j = 1; j < matrix[0].size() - 1; j++)
            {
                v.push_back(matrix[i][j]);
            }
        }
        }

        

    }
    return v;
}