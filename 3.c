#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main () {
	long n;
	scanf("%ld", &n);
	long a[100000];
	for(long i = 0; i < n; i++) {
		scanf("%ld", &a[i]);
	}
	for(long i = 0; i < n -1; i++) {
		for(long j = i + 1; j < n; j ++) {
			if(a[i] > a[j]) {
				long temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	long hieu = a[1] - a[0];
	long count = 0;
	for(long i = 1; i < n - 1; i++) {
		if(a[i+1] - a[i] != hieu) {
			count = count  + 1;
            break;
		}
	}
	if(count == 0) {
		printf("%ld", hieu);
	} else {
		printf("%ld", a[n-1]);
	}
	return 0;
}
