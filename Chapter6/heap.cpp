#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include<unordered_set>
#define INTPAIR pair<int,int>
#define LONGPAIR pair<long,long>
#define MOD 1000000007
#define INV -1
#define LONG long long
#define POINT pair<int,int>
using namespace std;

int parent(int i, int heapsize) {
	return (i - 2) / 2;
}
int left(int i, int heapsize) {
	return (((heapsize) > ((i << 1) + 1)) ? ((i << 1) + 1) : -1);
}
int right(int i, int heapsize) {
	return (((heapsize) > ((i << 1) + 2)) ? ((i << 1) + 2) : -1);
}

void min_heapify(vector<int> &heap, int i, int heapsize) {
	int lt_val = left(i, heapsize);
	int rt_val = right(i, heapsize);
	int sm_index = i;
	if ((lt_val == -1) && (rt_val == -1))
		return;
	if ((lt_val != -1)
			&& (heap[lt_val]
					< min(heap[i], (rt_val == -1) ? heap[i] : heap[rt_val]))) {
		sm_index = lt_val;
	}
	if ((rt_val != -1)
			&& (heap[rt_val]
					< min(heap[i], (lt_val == -1) ? heap[i] : heap[lt_val]))) {
		sm_index = rt_val;
	}

	swap(heap[i], heap[sm_index]);
	if (i != sm_index)
		min_heapify(heap, sm_index, heapsize);
}

int getMin(vector<int> &v) {
	return v[0];
}

void pop_min(vector<int> &v, int &heapsize) {
	swap(v[0], v[heapsize - 1]);
	heapsize--;
	v.pop_back();
	min_heapify(v, 0, heapsize);
}

void display(vector<int> v) {
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
	cout << endl;
}

int main() {

	int heapsize;
	cin >> heapsize;
	vector<int> heap(heapsize);

	for (int i = 0; i < heapsize; i++)
		cin >> heap[i];

	for (int i = (heapsize - 1) / 2; i >= 0; i--) {
		min_heapify(heap, i, heapsize);
	}
	display(heap);
	cout << getMin(heap) << endl;
	pop_min(heap, heapsize);
	display(heap);

	return 0;
}
