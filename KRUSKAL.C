#include<stdio.h>

int i,j,a,b,u,v,n,ne=1,min,mincost=0,cost[10][10];
int parent[9];

int find(int);
int uni(int,int);

void main()
{

  printf("enter no of vertices:");
  scanf("%d",&n);
  printf("enter cost matrix:\n");
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {
      scanf("%d",&cost[i][j]);

      if(cost[i][j]==0)
      {
	cost[i][j]=999;
      }
   }
 }

 while(ne<n)
 {

  for(i=1,min=999;i<=n;i++)
  {
    for(j=1;j<=n;j++)
    {

      if(cost[i][j]<min)
       {

	 min=cost[i][j];
	 a=u=i;
	 b=v=j;

       }
    }
  }


   u= find(u);
   v=find(v);

   if(uni(u,v))
   {

      printf("edge%d:(%d,%d)cost:%d",ne++,a,b,min);
      mincost=mincost+min;
   }

   cost[a][b]=cost[b][a]=999;
  }

  printf("mincost=%d",mincost);

  getch();


}



int find(int i)
{


   while(parent[i])

     i=parent[i];
     return i;
}


int uni(int i, int j)
{

   if(i!=j)
   {
     parent[j]=i;
     return 1;
   }

   return 0;
 }