#include <stdio.h>

int main(){

	int n;
	scanf("&d", &n);
	while(n--)
	{
		int a, b, c;
		long long sum = 0;
		int far;
		scanf("%d", &far);
		for(int i=0; i<far; i++)
		{
			scanf("%d %d %d", &a, &b, &c);
			sum += a*c;
		}
		printf("%lld\n", sum);
		
	}
	
	return 0;	
}