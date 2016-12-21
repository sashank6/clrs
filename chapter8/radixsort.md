# Radix sort

##Info
* Radix sort takes time in the order of \theta(d*(tc of stable sort)) where d are the number of digits.
* Some say radix sort is not faster than quicksort because of additional memory allocation that takes place, inspite the worst case time comlexity is of the order \theta(n).


##Algorithm

* 1. Sort the numbers according to the least significant digit using a stable sort algorithm, commonly used are counting sort.
* 2. Repeat step 1 for all the digits in the number.
