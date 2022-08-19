#include<stdio.h>
#include<stdlib.h>
int nv;
struct node{
	int data;
	struct node *next;
};
void readgraph(  struct node *adj[]){
	int k,data;
	struct node *newnode;
	int i,j;
	for( i=0;i<nv;i++){
		struct node *last=NULL;
		printf("How many vertices adjacent to %d ",i);
			scanf("%d",&k);
			for(  j=1;j<=k;j++){
				newnode=(struct node *)malloc(sizeof(struct node *));
				printf("\nEnter the %d neighbour of %d : ",j,i);
				scanf("%d",&data);
				
				newnode->data=data;
				newnode->next=NULL;
				if(adj[i]==NULL){
					adj[i]=newnode;
				}
				else{
					last->next=newnode;
				}
				last=newnode; 
			}

	}
}
void printgraph(  struct node *adj[]){
	int i;
	struct node *temp;
	for( i=0;i<nv;i++){
		temp=adj[i];
		printf("\nvertices adjacent to %d are ",i);
		while (temp!=NULL){
			printf("%d\t",temp->data);
			temp=temp->next;
			
		}
	}
	
}



int main(){
//#vertices count input
printf("\nEnter the number of vertices in graph: ");
	scanf("%d",&nv);
	int i;
	struct node *adj[nv];
	for( i=0;i<nv;i++){
		adj[i]=NULL;
	}
	readgraph(adj);
	printgraph(adj);
	
	return 0;
}
