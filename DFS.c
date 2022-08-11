#include<stdio.h>
#include<stdlib.h>
int visited[7]={0,0,0,0,0,0,0};
int A[7][7]={
	{0,1,1,1,0,0,0},
	{1,0,1,0,0,0,0},
	{1,1,0,1,1,0,0},
	{1,0,1,0,1,0,0},
	{0,0,1,1,0,1,1},
	{0,0,0,0,1,0,0},
	{0,0,0,0,1,0,0}
};
void DFS(int i){
	int j;
	visited[i]=1;
	printf("%d ",i);
	for(j=0;j<7;j++){
		if(A[i][j]==1&&!visited[j]){
			DFS(j);
		}
	}
}

int main(){
 DFS(2);//starts at 2


 	return 0;
}  
