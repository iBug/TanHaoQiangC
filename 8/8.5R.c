// File: 8.5R.c
// Author: iBug

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *a, n;
	printf("Enter number: ");
	scanf("%d", &n);
	a = malloc(n * sizeof(*a));
	
	int count, i, j, m, flag;
	// First initialize:
	for (i = 0; i < n; i ++){
		a[i] = (i+1) % 3;
	}
	// Now kick out a person for (n-1) times:
	i = 0;
	for (count = 0; count < n - 1; count++){
		// Find an eligible person to kick
		while (a[i] != 0)
			i = (i+1) % n;
		// Kick it
		a[i] = -1;
		// Now reset the numbers:
		j = 0, flag = 1;
		for (m = i + 1; m < i + n || flag; m++){
			if (a[m % n] >= 0){
				j++;
				a[m % n] = j % 3;
				// Make sure at least one will be kicked
				if (a[m % n] == 0)
					flag = 0;
			}
		}
	}
	
	// Print who's left
	for (i = 0; i < n; i ++)
		if (a[i] >= 0)
			printf("%d\n", i + 1);
	free(a);
	return 0;
}
