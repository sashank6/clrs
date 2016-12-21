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

int partition(int arr[], int l, int h, int elem) {
	for (int i = l; i <= h; i++)
		if (arr[i] == elem) {
			swap(arr[i], arr[h]);
			break;
		}
	int pivot = arr[h];
	int i = l - 1;
	for (int j = l; j <= h - 1; j++) {
		if (arr[j] <= pivot) {
			swap(arr[++i], arr[j]);
		}
	}
	swap(arr[++i], arr[h]);
	return i;
}
void display(int arr[], int l, int h) {
	for (int i = l; i <= h; i++)
		cout << arr[i] << " ";
	cout << endl;
}
int getMedian(int arr[], int l, int h) {
	sort(arr + l, arr + h, less<int>());
	return arr[l + (h - l) / 2];
}

int findKsmallest(int arr[], int l, int h, int k) {
	if (k > 0 && k <= h - l + 1) {
		int n = h - l + 1;
		int medians = (n + 4) / 5;
		int median[medians];
		int i;
		for (i = 0; i < medians - 1; i++)
			median[i] = getMedian(arr, l + (5 * i), l + 4 + (5 * i));
		if (5 * i > n) {
			median[i] = getMedian(arr, l + i * 5, n % 5);
			i++;
		}

		int medOfMed =
				(medians == 1) ?
						median[0] : findKsmallest(median, 0, i - 1, i / 2);

		int pos = partition(arr, l, h, medOfMed);

		if (pos - l == k - 1)
			return arr[pos];
		if ((k - 1) < (pos - l))
			return findKsmallest(arr, l, pos - 1, k);
		return findKsmallest(arr, pos + 1, h, k - pos + l - 1);
	}

	return INT_MAX;
}

int main() {
	int set1[] = { 376, 146, 43, 55, 306, 241, 58, 486, 495, 343, 454, 168, 326,
			128, 428, 465, 30, 313, 234, 342 };
	int set2[] = { 1, 116, 470, 219, 292, 113, 79, 263, 30, 148, 371, 216, 395,
			135, 212, 24, 334, 357, 19, 146 };
	int set3[] = { 340, 262, 337, 395, 325, 247, 13, 323, 346, 318, 81, 381, 97,
			140, 230, 15, 361, 312, 374, 369 };
	int set4[] = { 7, 202, 101, 221, 441, 250, 258, 206, 163, 213, 228, 127, 15,
			76, 212, 361, 292, 133, 126, 180 };
	int set5[] = { 114, 22, 340, 405, 318, 280, 297, 355, 159, 179, 138, 367,
			450, 13, 301, 209, 180, 282, 171, 137 };
	int set6[] = { 376, 319, 153, 387, 58, 114, 407, 441, 306, 168, 496, 235,
			152, 252, 175, 466, 212, 477, 294, 348 };
	int set7[] = { 204, 68, 237, 240, 457, 316, 427, 357, 115, 194, 446, 445,
			235, 489, 25, 242, 302, 95, 94, 390 };
	int set8[] = { 65, 69, 492, 155, 201, 347, 293, 148, 52, 75, 64, 217, 459,
			200, 4, 317, 123, 251, 330, 407 };
	int set9[] = { 87, 168, 83, 120, 135, 44, 131, 480, 378, 280, 484, 160, 245,
			43, 316, 423, 311, 91, 350, 288 };
	int set10[] = { 120, 352, 392, 184, 98, 106, 183, 84, 253, 123, 447, 145,
			496, 365, 440, 489, 230, 303, 316, 436 };
	int set11[] = { 3, 2, 1, 5, 6, 4 };
	/*
	 *
	 30 43 55 58 128 146 168 234 241 306 313 326 342 343 376 428 454 465 486 495
	 1 19 24 30 79 113 116 135 146 148 212 216 219 263 292 334 357 371 395 470
	 13 15 81 97 140 230 247 262 312 318 323 325 337 340 346 361 369 374 381 395
	 7 15 76 101 126 127 133 163 180 202 206 212 213 221 228 250 258 292 361 441
	 13 22 114 137 138 159 171 179 180 209 280 282 297 301 318 340 355 367 405 450
	 58 114 152 153 168 175 212 235 252 294 306 319 348 376 387 407 441 466 477 496
	 */

	cout << findKsmallest(set11, 0, 5, 1) << endl;

}
