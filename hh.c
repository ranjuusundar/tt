#include <stdio.h>

int main(void) {
	// your code goes here
	int n,num[100000],index,flag=1;
	scanf("%d",&n);
	for(index=0;index<n;index++)
	{
		scanf("%d ",&num[index]);
		if(((index==0)&&((num[index]&1)==1))||(((index&1)==1)&&((num[index]&1)==0)))
		printf("%d ",num[index]);
		else if((index&1)==0)
		{
			if((num[index]&1)==1)
			printf("%d ",num[index]);
		}
	}
	
	return 0;
}
