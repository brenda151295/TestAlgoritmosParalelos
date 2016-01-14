#include <iostream>
#include <time.h>
#include <stdlib.h>

#define MAX 10000

using namespace std;

int main()
{
    cout<<"hello";

    double A[MAX][MAX], x[MAX], y[MAX];
    srand(time(NULL));
    //FIRST EXAMPLE
    for(unsigned int i = 0; i < MAX; i++)
    {
        y[i] = 0;
        x[i] = rand();
        cout<<"x[i]: "<<x[i]<<endl;
        for(unsigned int j = 0; j < MAX; j++)
        {
            A[i][j] = rand();
            cout<<"A[i]: "<<A[i][j]<<endl;
        }

    }
    for(unsigned int i=0; i<MAX ; i++)
    {
        for(unsigned int j=0 ; j<MAX ; j++)
            y[i] += A[i][j] * x[j];
    }

    //SECOND EXAMPLE
    for(unsigned int i=0 ; i<MAX ; i++)
    {
        y[i] = 0;
    }
    for(unsigned int j=0 ; j<MAX ; j++)
    {
        for(unsigned int i=0 ; i<MAX ; i++)
            y[i] += A[i][j] * x[j];
    }


    return 0;
}

