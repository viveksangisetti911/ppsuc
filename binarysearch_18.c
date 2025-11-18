#include<stdio.h>
int main()
{
	int a[] = {7, 18, 45, 49, 50, 56, 69};
	int n = sizeof(a) / sizeof(a[0]);
	int key = 18;
	int low = 0, high = n - 1, mid;
	int found = 0;
	while(low <= high) {
		mid = (low + high)/2;
		if(a[mid] == key) {
			printf("Element %d found in the  position %d\n", key, mid + 1);
			found = 1;
			break;
		}
		else if(key < a[mid]) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	if(!found) { 
	printf("Element %d not found in the array\n", key);
	}
	return 0;
}
