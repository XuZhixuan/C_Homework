void print_array(int* arr, int size)
{    
    for(int i = 0; i < size; i++)
    {
        printf(i == size - 1 ? "%d" : "%d ", arr[i]);
    }    
}