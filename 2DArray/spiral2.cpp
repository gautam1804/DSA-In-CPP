#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralOrder(int matrix[][4])
{
    vector<int> v;
    int j = 0;
    int i = 0;
    matrix.size()=3;
    matrix[0].size()=4;
    for (i = 0; i < 3; i++)
    {
        if (i == 0 && j == 0)
        {
            for (j = 0; j < 4; j++)
            {
                v.push_back(matrix[i][j]);
            }
            cout << i << endl;
            cout << j << endl;
            cout << "one" << endl;
            // v.push_back(11);
           if (i == 0 && j == 4)
            {

                for (j = 4 - 1; j < 4; j++)
                {

                    for (i = 1; i < 2; i++)
                    {
                        v.push_back(matrix[i][j]);
                    }
                }
                i=2;
                j=3;
                cout << i << endl;
                cout << j << endl;
                cout << "four" << endl;
                // v.push_back(44);
            }
            if (i == 2 && j == 3)
            {
                for (i = 2; i < 3; i++)
                {
                    for (j = 4 - 1; j > 0; j--)
                    {
                        v.push_back(matrix[i][j]);
                    }                
                }
    i=2;
    j=0;
                 cout << i << endl;
                    cout << j << endl;
                    cout << "two" << endl;
                    // v.push_back(22);
                    
            }
            if (i == 2 && j == 0)
        {

            for (j = 0; j < 1; j++)
            {

                for ( i = 2 ; i > 0; i--)
                {
                    v.push_back(matrix[i][j]);
                }
            }
            i=1;
            j=0;
            cout << i << endl;
            cout << j << endl;
            cout << "five" << endl;
            // v.push_back(55);
        }
        if (i == 3 - 2 && j == 0)
        {
            for (j = 1; j < 4 - 1; j++)
            {
                v.push_back(matrix[i][j]);
            }
            cout << i << endl;
            cout << j << endl;
            cout << "three" << endl;
            // v.push_back(33);
        }
        }

        

    }
    return v;
}

int main()
{
    int arr[3][4];
    cout << "Enter array values : ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << "  ";
        }
        cout << endl;
    }
    vector<int> t = spiralOrder(arr);
    for (int i = 0; i < t.size(); i++)
    {
        // Printing the element at
        // index 'i' of t
        cout << t[i] << " ";
    }
    cout << endl;
}