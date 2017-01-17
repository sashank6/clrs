# Counting Sort

## Info
* Counting sort is used for sorting integers.
* The worst case time complexity is \theta(K) where k=range(i.e max-min).
* The worst case space complexity is \theta(K).


## Algorithm
* Calculate min and max of the array, compute the range.
* Allocate O(range) space on a temporary counting array.
* Compute the frequencies of elements using the count array.
* Compute the positions of elements by c[i]=c[i]+c[i-1].
* Put the elements in the ouput array w.r.t positions determined by count array.
