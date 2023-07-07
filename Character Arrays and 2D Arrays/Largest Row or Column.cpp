
#include<limits.h>

/*
You can use minimum value of integer as -2147483647 and 
maximum value of integer as 2147483647
*/
void findLargest(int **input, int nRows, int mCols)
{
    //Write your code here

    int maxm = INT_MIN;
    bool isRow = true;
    int idx = 0;


    for(int i=0; i<nRows; i++)
    {
        int sum = 0;

        for(int j=0; j<mCols; j++)
        {
            sum += input[i][j];
        }

        if(sum>maxm)
        {
            maxm = sum;
            idx = i;
        }
    } 

    for(int i=0; i<mCols; i++)
    {
        int sum = 0;
        for(int j = 0; j<nRows; j++)
        {
            sum += input[j][i];
        }

        if(sum>maxm)
        {
            maxm = sum;
            idx = i;
            isRow = false;
        }
    }

    if(isRow == true)
    {
        cout << "row " << idx << ' ' << maxm << endl;
    }
    else
    {
        cout << "column " << idx << ' ' << maxm << endl;
    }

}