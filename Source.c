#include <stdio.h>

int count = 0;	
void hanoi(int n, char A, char B, char C) {
	if (n == 1) {
		printf("Move disc from %c to %c\n", A, C);
		count++;	
	}
	else {
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
	}
}

int main() {
	int n=0;
	printf("disks number=");
	while (1)
	{
		scanf("%d", &n);
		if (n<=0)
		{
			printf("to small ,0<numbers<10\n");
			printf("disks number=");
			continue;
		}
		else if (n > 11)
		{
			printf("to big ,0<numbers<11\n");
			printf("disks number=");
			continue;
		}
		else
		{
			break;
		}
		
	}

	hanoi(n, 'A', 'B', 'C');
	printf("\nmove %d times",count);
	return 0;
}