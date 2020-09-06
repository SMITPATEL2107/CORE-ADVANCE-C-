	#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>
	typedef struct Node
	{
	 int data;
	 struct Node *next;
	}node;
	void insert(node * pointer,int data)
	{
	 while(pointer->next!=NULL)
	 {
	  pointer=pointer->next;
	 }
	  pointer->next=(node *)malloc(sizeof(node));
	  pointer=pointer->next;
	  pointer->data=data;
	  pointer->next=NULL;
	 }

	 int find(node *pointer,int key)
	 {
	  pointer=pointer->next;
	  while(pointer!=NULL)
	  {
	   if(pointer->data==key)
	   {
	    return 1;
	   }
	   pointer=pointer->next;
	  }
	  return 0;
	 }

	 void delete(node *pointer,int data)
	 {
	 node *temp;
	  while(pointer->next!=NULL && (pointer->next)->data!= data)
	  {
	   pointer=pointer->next;
	  }
	  if(pointer->next==NULL)
	  {
	   printf("element %d is not present in the list\n",data);
	   return;
	  }

	  temp=pointer->next;
	  pointer->next=temp->next;
	  free(temp);
	  return;
	 }

	 void print(node *pointer)
	 {
	  if(pointer==NULL)
	  {
	   return;
	  }
	  printf("%d",pointer->data);
	  print(pointer->next);
	 }

	 int main()
	 {
	  node *start,*temp;
	  start=(node *)malloc(sizeof(node));
	  temp=start;
	  temp->next=NULL;
	  clrscr();
	  printf("1.insert 2.delete 3.print 4.find 5.exit\n");
	  printf("enter your choice:");
	  while(1)
	  {
	   int query;
	   scanf("%d",&query);
	    if(query==1)
	    {
	     int data;
	     printf("enter an element:");
	     scanf("%d",&data);
	     insert(start,data);
	     printf("press 3 for display:");
	    }
	    else if(query==2)
	    {
	     int data;
	     printf("delet the element:");
	     scanf("%d",&data);
	     delete(start,data);
	     printf("press 3 for display:");
	    }
	    else if(query==3)
	    {
	     printf("the list is");
	     print(start->next);
	     printf("\n");
	    }
	    else if(query==4)
	    {
	     int data,status;
	     printf("find the element:");
	     scanf("%d",&data);
	     status=find(start,data);
	     if(status)
	     {
	      printf("element found\n");
	     }
	     else
	     {
	      printf("element not found\n");
	     }
	    }
	    else if(query==5)
	    {
	     break;
	    }
	   }
	  }




