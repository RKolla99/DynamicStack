#include<stdio.h>
#include "mystack.h"


int main()
{
    struct StackNode* root = NULL;
    int x,a,c;
    do 
    { 
	printf("Enter 1 for pushing\n");
	printf("Enter 2 for popping\n");
	printf("Enter 3 for peeking\n");
	scanf("%d",&x);
	switch(x)
	{
	    case 1:printf("Enter element to be pushed:\n");
	           scanf("%d",&a);
                   push(&root, a);
		   break;
            case 2:printf("%d popped from stack\n", pop(&root));
                   break;
            case 3:printf("Top element is %d\n", peek(root));
                   break;
            default:printf("Try again");
        }
        printf("Enter 1 to continue or anything else to exit");
        scanf("%d",&c);
    }while(c==1);
    return 0;
}
