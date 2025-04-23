#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

int t[1900][1000];
int sub( int arr[] , int s, int ) {


    // Initialization of table
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < w + 1; j++)
        {
            if (i == 0)
            {
                t[i][j] = false;
            }
            if (j==0){
                t[i][j]=true
            }
        }
    }
}

for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < s+ 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = ( t[i-1][j - arr[i - 1]] || t[i - 1][j]);
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
 