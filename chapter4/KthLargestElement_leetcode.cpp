class Solution {
public:
	int partition(vector<int> &arr, int lo, int hi) {
		if (lo == hi)
			return lo;
		int pivot = arr[hi];
		int i = lo - 1;
		for (int j = lo; j <= hi - 1; j++) {
			if (arr[j] >= pivot)
				swap(arr[++i], arr[j]);
		}
		swap(arr[++i], arr[hi]);
		return i;
	}

	int findK(vector<int> &nums, int k, int lo, int hi) {
		if ((lo == hi))
			return nums[hi];
		if (lo < hi) {
			int pi = partition(nums, lo, hi);
			if (k == pi)
				return nums[pi];
			if (k < pi)
				return findK(nums, k, lo, pi - 1);
			return findK(nums, k, pi + 1, hi);
		}
		return -1;
	}

	int findKthLargest(vector<int>& nums, int k) {
		return findK(nums, k - 1, 0, nums.size() - 1);

	}
};
