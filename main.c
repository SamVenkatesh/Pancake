#include <stdio.h>
#include <stdlib.h>
void flip(int);
void findMax(int[]);
int a[5],i,j,n=4,imax,max;

int main()
{

    printf("Enter array elements");
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    for(i=4;i>=0;i--)
    {   max=a[0];
        imax=0;
        findMax(a);
        flip(imax);
        flip(i);
    }
     printf("\n");
     for(i=0;i<5;i++)
        printf("%d \n",a[i]);
}

void flip(int f)
{
    int temp,k;
    for(k=0;k<f;k++,f--)
    {
        temp=a[k];
        a[k]=a[f];
        a[f]=temp;
    }
}

void findMax(int a[5])
{
  for(j=0;j<=i;j++)
        {
            if(max<a[j])
            {
                max=a[j];
                imax=j;

            }
        }

}
