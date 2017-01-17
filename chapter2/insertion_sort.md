# Insertion Sort

Take an element i sequentially from 1 to n and insert it in its appropriate position on to its left between 0 to i
```c++
void insertion_sort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		for (int j = i - 1; j >= 0; j--) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
			else
				break;
		}
	}
}
```
