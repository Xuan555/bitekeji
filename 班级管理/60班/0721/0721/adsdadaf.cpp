#include <stdio.h>

void allsum(int *src, int all, int n, int sum, int pos)
{
	if(n <= 0)
	{
		printf("%d\n", sum);
		return;
	}
	
	int i;
	for(i = pos; i < all; i++)
	{
		allsum(src, all, n - 1, sum + src[i], i + 1);
	}
}

int main()
{
	int a[4] = {21,33,42,38};
	
	allsum(a, 4, 3, 0, 0);
	
	return 0;
} 
