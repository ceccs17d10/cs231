	/* Roll no 10
	* ANUROSE K THOMAS
	*PRG NO 01
	*Sequential search  
	*/


	#include<stdio.h>
	void main()
	{
		int a[50],k,i,n,p=0;
		printf("Enter the size");
		scanf("%d",&n);
		printf("Enter elements\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Enter number to be searched\n");
		scanf("%d",&k);
		for(i=0;i<n;i++)
		{
			if(a[i]==k)
			{
				p=i+1;
				break;
			}
		}
		if(p!=0)
			printf("%d is found in the list, at position %d\n",k,p);
		else
			printf("%d is not in the list\n",k);
	}



	/*OUTPUT
	Enter the size4
	Enter elements

	2
	3
	4
	5
	Enter number to be searched
	3
	3 is found in the list, at position 2
