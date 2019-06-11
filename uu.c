#include <stdio.h>

int main(void) {
	// your code goes here
	int n,num[100000],index,flag=1;
	scanf("%d",&n);
	int count[100000]={0};
	for(index=0;index<n;index++)
	{
		scanf("%d ",&num[index]);
		count[num[index]]++;
		if(count[num[index]]>1)
		{
			printf("%d",num[index]);
			flag=0;
			break;
		}
	}
	if(flag==1)
	printf("unique");
	return 0;
}
