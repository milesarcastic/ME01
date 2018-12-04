/*Name: Miles B. Artiaga	BSCS 1-B*/
/*Program Description: This program lets user input the size	*
 *and elements inside the array and will be sorted in descending	*
 *order using bubble sorting, then lets user search for the element	*
 *using binary searching*/


#include <stdio.h>
int main()
{
	//declare variables
	int arr[50], size, key, flag;
	int i, j, temp, mid, first, last;
	
	//user input
	printf("Enter the size of array(not more than 50): ");
	scanf("%d", &size);
	printf("Enter the elements: ");
		//counter for continuously scanning the input
		for(i = 0; i < size; ++i)
		{
			scanf("%d", &arr[i]);
		}
		
	//bubble sorting in descending order
    for (i = 1; i < size; i++)
    {
      for(j = 0; j < (size - 1); j++)
      			//if the first element is less than the second then swap
				if(arr[j] < arr[j+1])
				{
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j + 1] = temp;
				}
    }
	//printing of the sorted elements
	printf("The elements after sorting in descending order: ");
	
		for (i = 0; i < size; i++)
		{
			printf("%d, ", arr[i]);
		}
		
	//inputting the element to be searched
    printf("Enter the key you want to search: ");
    scanf("%d", &key);

    first = 0;
    last = size - 1;

    while(first <= last)
    {
    	//finding the middle index
      mid = (first + last) / 2;
      	//if key is equal to middle index
        if (key == arr[mid])
        {
    		//loop will stop
          flag = 1;
          break;
        }
        else
        {
        	//if key is less than the middle index
            if (key < arr[mid])
            {
             first = mid + 1;
            } 
            else
            {
              last = mid - 1;
            }
        }
    }
	
    if (flag == 1)
    {
      printf("Element %d found at position %d.\n",key, mid + 1);
    }
    else
    {
      printf("Element %d not found, key.\n");
    }

    return 0;
    
}//end of main
