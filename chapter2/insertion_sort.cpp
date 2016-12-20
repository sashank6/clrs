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

void display(int arr[], int n) {
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void insertion_sort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		for (int j = i - 1; j >= 0; j--) {
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
			else
				break;
		}
	}
	display(arr, n);
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
	insertion_sort(set1, 20);
	insertion_sort(set2, 20);
	insertion_sort(set3, 20);
	insertion_sort(set4, 20);
	insertion_sort(set5, 20);
	insertion_sort(set6, 20);

}
