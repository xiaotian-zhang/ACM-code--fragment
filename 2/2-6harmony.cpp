#include <stdio.h>

int main(){
	int a; 
	scanf("%d", &a);
	double sum = 0;
	
	for(int i=1; i<=a; i++)
	{
		sum+=1/(double)i;
	}
	printf("%.3lf", sum);
		
	return 0;	
}