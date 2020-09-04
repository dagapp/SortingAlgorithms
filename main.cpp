#include <iostream>
#include "SortingAlgorithms.hpp"

using namespace std;

int main()
{
    double * array = (double *)malloc(10 * sizeof(double));
    
    array[0] = 2;
    array[1] = 1;
    array[2] = 7;
    array[3] = 4;
    array[4] = 9;
    array[5] = 0;
    array[6] = 3;
    array[7] = 5;
    array[8] = 8;
    array[9] = 6;
    
    array = SelectSort(array, 10);
    
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << endl;
    }
    
    return 0;
}
