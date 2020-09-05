//
//Example main code
//

#include <iostream>
#include "SortingAlgorithms.hpp"

using namespace std;

int main()
{
    double * array = new double[10];
    
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
    
    array = SelectionSort(array, 10);
    
    for (int i = 0; i < 10; i++)
    {
        cout << array[i] << endl;
    }
    
    delete [] array;
    
    return 0;
}
