// Program for Singly Linked list:-->
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
	
	int info;
	struct node *ptr;
	
};
struct node *start  , *temp ,*q  ,*r;
void Add();
void Display();
void Delete();
int main()
{
	
	int ch;
	start = NULL;
	do
	{
		printf("........Linked List.......\n");
		printf("\n\t 1 . Create List");
		printf("\n\t 2 . Delete Element");
		printf("\n\t 3 . Display list");
		printf("\n\t 4 . Exit");
		printf("\n\t Enter your Choice\n ");
		scanf("%d" ,&ch);
		switch(ch)
		{
			case 1: Add();
			break;
			case 2: Display();
			break;
			case 3: Delete();
			break;
			
			
			
		}
			
	}while(ch!=4);
}

void Add()
   {
		
		temp = (struct node*)malloc(sizeof(struct node));
		printf("Enter the data \n");
		scanf("%d" ,&temp -> info);
		temp->ptr = NULL;
		if(start== NULL){
			
			start = temp;
			
		}
		else{
			
			q  = start ;
			while(q -> ptr = NULL);
			q = q -> ptr;
			q -> ptr = temp;
			
		}
	}
	
	void Display()
	{
		 q= start;
		 if(q == NULL){
		 	
		 	printf("List is Empty ");
		 	
		 }
		 else{
		 	
		 	while(q!=NULL){
		 		
		 		printf("%d" , q->info);
		 		q = q -> ptr;
		 		
			 }
		 	
		 }
	}
	
	void Delete()
	{
		int num , f = 0;
		q = start ;
		if(q==NULL){
			
			printf("Lists is Empty");
			
		}
		else{
			
			printf("Enter the nos to delete");
			scanf("%d" ,&num);
			while((f==0) && (q == NULL)){
				
				if(q->info==num){
					f = 1;
				}
				else{
					
					q = q->ptr;
					
				}
			}
			if(f ==0){
				printf("Number is not found");
				
			}
			else{
				
				if(q==start){
					
					start = start->ptr;
					q ->ptr = NULL;
					free(q);
				}
				else{
					
					r = start;
					while(r->ptr!= q);
					r = r->ptr;
					r ->ptr= q->ptr;
					q ->ptr = NULL;
					free(q);
					
				}
			}
		}
		
	}
	
	
