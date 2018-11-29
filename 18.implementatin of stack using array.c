	/*AANUROSE KTHOMAS
	ROLL NO 10
	PRG NO 18
	IMPLEMENTATION OF STACK USING ARRAY
	*/

	#include<stdio.h>

	int stack[100],choice,n,top,x,i;
	void push(void);
	void pop(void);
	void display(void);
	int main()
	{
			  top=-1;
	    printf("Enter the size of stack:");
		   scanf("%d",&n);
	    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
	    do
	    {
		printf("\n Enter the Choice:");
		scanf("%d",&choice);
		switch(choice)
		{
		    case 1:
		    {
			push();
			break;
		    }
		    case 2:
		    {
			pop();
			break;
		    }
		    case 3:
		    {
			display();
			break;
		    }
		    case 4:
		    {
			printf("\n\t EXIT POINT ");
			break;
	}
		    default:
		    {
			printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
		    }

		}
	    }
	    while(choice!=4);
	    return 0;
	}
	void push()
	{
	    if(top>=n-1)
	    {
		printf("\n\tStackis over flow");

	    }
	    else
	    {
		printf(" Enter a value to be pushed:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	    }
	}
	void pop()
	{
	    if(top<=-1)
	    {
		printf("\n\t Stack is under flow");
	    }
	    else
	    {
		printf("\n\t The popped elements is %d",stack[top]);
		top--;
	    }
	}
	void display()
	{
	    if(top>=0)
	    {
		printf("\n The elements in stack \n");
		for(i=top; i>=0; i--)
		    printf("\n%d",stack[i]);
		printf("\n Press Next Choice");
	    }
	    else
	    {
		printf("\n The stack is empty");
	    }

	}
	/*OUTPUT
	Enter the size of stack:4

		 1.PUSH
		 2.POP
		 3.DISPLAY
		 4.EXIT
	 Enter the Choice:2

		 Stack is under flow
	 Enter the Choice:1
	 Enter a value to be pushed:3

	 Enter the Choice:4 1
	 Enter a value to be pushed:4

	 Enter the Choice:3

	 The elements in stack 

	4
	3
	 Press Next Choice
	 Enter the Choice:2

		 The popped elements is 4
	 Enter the Choice:3

	 The elements in stack 

	3
	 Press Next Choice
	 Enter the Choice:4

		 EXIT POINT
		 */

