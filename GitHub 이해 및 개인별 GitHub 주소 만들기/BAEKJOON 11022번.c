#include <stdio.h>
int main()
{

	int n, m, p;
	scanf("%d", &n);


	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &m, &p);
		printf("Case #%d: %d + %d = %d\n", i + 1, m, p, m + p);
	}

	return 0;
}