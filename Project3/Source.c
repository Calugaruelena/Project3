#include <stdio.h>
int main()
{
	int i, n, A[100], x;

	printf("Introduceti nr de elemente \n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("A[%d]= ", i + 1);
		scanf("%d", &A[i]);
	}
	printf("Introduceti elementul cautat\n");
	scanf("%d", &x);
	for (i = 0; i < n; i++)
		if (A[i] == x)
			printf("%d", i + 1);
	system("pause");
	return 0;
}