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

int cross_sum(vector<int> nums, int lo, int mid, int hi) {
	int sum = 0;
	int lsum = INT_MIN;
	for (int i = mid; i >= lo; i--) {
		sum += nums[i];
		lsum = max(sum, lsum);
	}
	sum = 0;
	int rsum = INT_MIN;
	for (int i = mid + 1; i <= hi; i++) {
		sum += nums[i];
		rsum = max(rsum, sum);
	}
	return lsum + rsum;
}

int maxsum_sub(vector<int> nums, int lo, int hi) {
	if (lo == hi)
		return nums[lo];
	int mid = lo + (hi - lo) / 2;
	int lsum = maxsum_sub(nums, lo, mid);
	int rsum = maxsum_sub(nums, mid + 1, hi);
	int csum = cross_sum(nums, lo, mid, hi);
	if (lsum >= rsum && lsum >= csum)
		return lsum;
	if (rsum >= lsum && rsum >= csum)
		return rsum;
	return csum;
}

int main() {

	int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	vector<int> nums(arr, arr + sizeof(arr) / sizeof(*arr));
	cout << maxsum_sub(nums, 0, nums.size() - 1) << endl;
	return 0;
}

