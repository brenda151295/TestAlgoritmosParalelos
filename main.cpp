#include <iostream>
#include <time.h>
#include <stdlib.h>

#define MAX 1000

using namespace std;

int main()
{
    double A[MAX][MAX], x[MAX], y[MAX];
    srand(time(NULL));
    clock_t my_clock;


    //FIRST EXAMPLE
    for(unsigned int i = 0; i < MAX; i++)
    {
        y[i] = 0;
        x[i] = rand();
        for(unsigned int j = 0; j < MAX; j++)
        {
            A[i][j] = rand();
        }

    }
    my_clock = clock();
    for(unsigned int i=0; i < MAX ; i++)
    {
        for(unsigned int j=0 ; j < MAX ; j++)
            y[i] += A[i][j] * x[j];
    }
    my_clock = clock() - my_clock;
    cout<<"FIRST EXAMPLE: "<<((float)my_clock)/CLOCKS_PER_SEC <<endl;


    //SECOND EXAMPLE
    for(unsigned int i=0 ; i < MAX ; i++)
    {
        y[i] = 0;
    }
    my_clock = clock();
    for(unsigned int j=0 ; j < MAX ; j++)
    {
        for(unsigned int i=0 ; i < MAX ; i++)
            y[i] += A[i][j] * x[j];
    }
    my_clock = clock() - my_clock;
    cout<<"SECOND EXAMPLE: "<<((float)my_clock)/CLOCKS_PER_SEC <<endl;

    return 0;
}

