# Quicksort


## Why quicksort?
* It is an inplace sorting algorithm.
* Its worst case time complexity is \theta(n^2) the average time complexity is \theta(nlogn).
* The hidden constants in time complexity are quite small.
* It works well for VM environments.
* Though heapsort is inplace and has \theta(nlogn) quicksort is much faster. Practical analysis https://www.cs.auckland.ac.nz/~jmor159/PLDS210/qsort3.html
* Randomized quicksort.
* Quicksort uses hardware caches very effectively.


## Algorithm
```c++
int partition_index=partition(arr,low,high);
quicksort(arr,low,partition_index-1);
quicksort(arr,partition_index+1,high);
```
## Parition Schemes
#### Lomuto
```c++
int pivot = arr[hi];
int i = -1;
int j = 0;
for j = 0 to hi-1
	if(arr[j] <= pivot)
		swap(arr[++i],arr[j]);
swap(arr[++i],arr[hi]);
return i;		
```
## Hoare Partition
```c++
		int pivotValue = arr[high];
        int i=low;
        int j=high-1;
        while(true){
            while(arr[i]<pivotValue)i++;
            while(arr[j]>pivotValue)j--;
            if(i<j){
            	swap(arr[i],arr[j]);
                i++;
                j--;
            }else{
                break;
            }
        }
       	swap(arr[i+1],arr[high]);
        return i;
    }
```



	
