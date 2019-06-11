#include <stdio.h>

int main(void) {
	// your code goes here
	int n,num[100000],index,value,itr,ptr;
	scanf("%d",&n);
	for(index=0;index<n;scanf("%d ",&num[index++]));
	for(index=0;index<n-1;index++)
	{
		for(itr=index+1;itr<n;itr++)
		{
			value=num[index]+num[itr];
			if(value==0)
			{
				printf("%d %d",num[index],num[itr]);
				break;
			}
		}
	}
	
	return 0;
}
