#include<stdio.h>

void display(int *arr)
{
  int *ar=arr,i;

  for(i=0;i<10;i++)
  {
    if(*ar==1)
     printf("%d\t",i+1);
     ar++;
  }
}

int main()

{

  int i, universal[10]={1,1,1,1,1,1,1,1,1,1};
  int a[10],b[10],uni[10],inter[10],diffab[10],diffba[10];

  clrscr();

  printf("\n \t enter element for set a (0 or 1):\n");
  for(i=0;i<10;i++)
  scanf("%d",&a[i]);

  printf("\n \t enter element for set b (0 or 1):\n");
  for(i=0;i<10;i++)
  scanf("%d",&b[i]);

  printf("\n\tuniversal set is :\t");
  display(universal);

  printf("\n\t set a is :\t");
  display(a);

  printf("\n\t set b is :\t");
  display(b);

  printf("\n\tunion of set is :\t");
  for(i=0;i<10;i++)
  uni[i]=a[i]||b[i];
  display(uni);

   printf("\n\tintersection of set is :\t");
  for(i=0;i<10;i++)
  inter[i]=a[i]&&b[i];
  display(inter);

  printf("\n\tdiffab of set is :\t");
  for(i=0;i<10;i++)
  diffab[i]=a[i]-b[i];
  display(diffab);

  printf("\n\tdiffba of set is :\t");
  for(i=0;i<10;i++)
  diffba[i]=b[i]-a[i];
  display(diffba);

  getch();
  return 0;

 }










