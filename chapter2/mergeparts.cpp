void merge(int arr[], int l, int m, int r) {
	int n1 = m - l + 1;
	int n2 = r - m;
	int s1[n1];
	int s2[n2];
	for (int i = 0; i < n1; i++) {
		s1[i] = arr[i + l];
	}
	for (int i = 0; i < n2; i++) {
		s2[i] = arr[m + 1 + i];
	}
	int i = 0, j = 0;
	int k = l;
	while ((i < n1) && (j < n2)) {
		arr[k++] = (s1[i] <= s2[j]) ? s1[i++] : s2[j++];
	}
	while (i < n1)
		arr[k++] = s1[i++];
	while (j < n2)
		arr[k++] = s2[j++];
}
