#include<stdio.h>

void main()
{

  int i,j,k,n,indeg[10],flag[10],count=0,a[10][10];
  clrscr();

  printf("enter no of vertices:");
  scanf("%d",&n);
  printf("enter adjacancy martix:\n");
  for(i=0;i<n;i++)
  {
  printf("enter row %d \n",i+1);
   for(j=0;j<n;j++)
   scanf("%d",&a[i][j]);
   }


  //initialize array to 0
   for(i=0;i<n;i++)
   {
    indeg[i]=0;
    flag[i]=0;
   }


   //calculate indeg

   for(i=0;i<n;i++)
   {
       for(j=0;j<n;j++)
       {
	 indeg[i]=indeg[i]+a[j][i];
       }
   }

   //if indeg 0 take that node
   printf("topological sorting\n");

   while(count<n)
   {

      for(k=0;k<n;k++)
      {

	 if(indeg[k]==0 && flag[k]==0)
	 {

	   printf("%d\t",k+1);
	   flag[k]=1;
	 }

     //decrement that is remove indeg to taken node

     for(i=0;i<n;i++)
     {

       if(a[i][k]==1)

	 indeg[k]--;
      }
   }

     count++;
 }

 getch();

}
