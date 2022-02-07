#include <stdio.h>
int main()
{
	int n, a[20000], max = 0, min = 2000000, min1= 0, max1 = 0,i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < n; i++)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}
	for (i = 0; i < n; i++)
	{
		if (a[i] == max)
			max1++;
		if (a[i] == min)
			min1++;
	}
	printf("%d %d\n", min, min1);
	printf("%d %d\n", max, max1);

	return 0;
}
