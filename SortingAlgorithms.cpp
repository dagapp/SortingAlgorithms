#include "SortingAlgorithms.hpp"

double * BubbleSort(double * numbers, int count)
{
    double change_val;
    
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                change_val = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = change_val;
            }
        }
    }
    
    return numbers;
}

double * SelectionSort(double * numbers, int count)
{
    double change_val;
    
    int max_index = 0;
    
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count - i; j++)
        {
            if (numbers[j] > numbers[max_index])
            {
                max_index = j;
            }
        }
        
        change_val = numbers[max_index];
        numbers[max_index] = numbers[count - i - 1];
        numbers[count - i - 1] = change_val;
        
        max_index = 0;
    }
    
    return numbers;
}
