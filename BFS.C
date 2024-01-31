#include<stdio.h>
#include<stdlib.h>

int n,vertex,item,i,j,q[10],visited[10],a[10][10],v,front=1,rear=0;
void insert(int v);
int del();

void insert(int v)
{
  rear++;
  q[rear]=v;
}

int del()
{
  v=q[front];
  front++;
  return v;
}

int main()
{
  clrscr();
  printf("enter the no of vertices:\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    visited[i]=0;
  }

  printf("enter the adjacency matrix:\n");
  for(i=1;i<=n;i++)
  {
   for(j=1;j<=n;j++)
   {
     printf("adj[%d][%d]",i,j);
     scanf("%d",&a[i][j]) ;
     printf("\n");

   }
  }


 printf("enter the starting vertex:\n ");
 scanf("%d",&vertex);



 insert(vertex);

 printf("traversing vertices are \n");


 while(front<=rear)
 {
   item=del();
   if(!visited[item])
   {
    visited[item]=1;
    printf("%d\t",item);
   }

   for(j=1;j<=n;j++)
   {
     if(a[item][j]==1 && visited[j]==0)
     {
       insert(j);
     }
   }


  }
  getch();
  return 0;
 }




