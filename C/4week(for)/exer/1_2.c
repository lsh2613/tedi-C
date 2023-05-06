#include <stdio.h>
int main() {
	int n;
	scanf("%d", &n);

	for (int i = n; i <= 100; i+=n)
	{
		printf("%d ", i);
	}
	
}
