/* Roll no 10
*ANUROSE K THOMAS
*Prg NO 29
*Implementation of queue using LL
*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
    	struct node *link;
};
void main()
{
    	struct node *head,*temp,*t;
    	int c,ele;
    	head=(struct node*)malloc(sizeof(struct node));
    	head->data=0;
    	head->link=NULL;
    	do
    	{
        	printf("\nChoose\n1.Insertion\n2.Deletion\n3.Display\n ");
        	scanf("%d",&c);
        	switch(c)
        	{
            		case 1: printf("Enter element: ");
                    		scanf("%d",&ele);
                    		t=head;
                    		while(t->link!=NULL)
                    		{
                        		t=t->link;
                    		}
                    		temp=(struct node*)malloc(sizeof(struct node));
                    		temp->link=NULL;
                    		t->link=temp;
                    		temp->data=ele;
                    		break;
            		case 2: if(head->link==NULL)
                    		{
                        		printf("\nQueue is EMPTY\n");
                    		}
                    		else
                    		{
                        		t=head->link;
                        		temp=t->link;
                        		head->link=temp;
                        		printf("\nDELETED %d ",t->data);
                        		free(t);
                    		}
                    		break;
            		case 3: if(head->link==NULL)
                    		{
                        		printf("\nQueue is EMPTY\n");
                    		}
                   	 	else
                    		{
                        		temp=head->link;
                        		while(temp!=NULL)
                        		{
                            			printf("%d <-",temp->data);
                            			temp=temp->link;
                        		}
                        		printf(" NULL");
                   	 	}
                    		break;
        	}
    	}while(c==1 || c==2 || c==3);
}

/* OUTPUT
Choose
1.Insertion
2.Deletion
3.Display
 1
Enter element: 24

Choose
1.Insertion
2.Deletion
3.Display
 1
Enter element: 2

Choose
1.Insertion
2.Deletion
3.Display
 1
Enter element: 25

Choose
1.Insertion
2.Deletion
3.Display
 3
24 <-2 <-25 <- NULL
Choose
1.Insertion
2.Deletion
3.Display
 2

DELETED 24 
Choose
1.Insertion
2.Deletion
3.Display
 3
2 <-25 <- NULL
Choose
1.Insertion
2.Deletion
3.Display
 
