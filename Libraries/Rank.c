void rank(int* arr, int size)
{
    int temp;
    
    for(int i = 0; i < size; i++)
    {        
        for(int j = size - 1; j > i; j--)
        {            
            if (arr[j - 1] < arr[j])
            {
                temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
            }
        }
    }
}