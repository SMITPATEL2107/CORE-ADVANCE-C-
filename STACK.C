	#include<stdio.h>
	#include<conio.h>
	#define maxsize 100

	int stack[maxsize];
	int tos=0;
	void push(int);
	int pop(void);
	void display(void);

	int main()
	{
	 int choice=0,val=0;
	 clrscr();
	 do
	 {
	  printf("\n1.push 2.pop 3.display 4.exit \nenter your choice:");
	  scanf("%d",&choice);
	  switch(choice)
	  {
	   case 1:
		   printf("element to be pushed:");
		   scanf("%d",&val);
		   push(val);
		   break;
	   case 2:
		   val=pop();
		   if(val!=-1)
		   printf("popped element: %d\n",val);
		   break;
	   case 3:
		   display();
		   break;
	   case 4:
		   break;
	   default:
		   printf("wrong choice");
		   break;
	  }
	 }
	  while(choice!=4);
	  return 0;
	}
	  void push(int val)
	  {
	   if(tos<maxsize)
	      stack[tos++]=val;
	   else
	       printf("stack overflow");
	  }

	  int pop()
	  {
	   int a;
	   if(tos>0)
	   {
	    tos--;
	    a=stack[tos];
	    return a;
	   }
	   else
	   {
	    printf("stack is empty");
	    return -1;
	   }
	  }

	  void display()
	  {
	   int i=0;
	   if(tos>0)
	   {
	    printf("elements are:");
	    while(i<tos)
	    {
	     printf("%d",stack[i++]);
	    }
	    printf("\n");
	   }
	   else
	       printf("stack is empty\n");
	  }

