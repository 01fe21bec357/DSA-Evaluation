#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n=1000,ar[1000];

    random(n,ar);
    FILE *fileptr;

    fptr=fopen("check.txt","w");

    fprintf(fptr,"%d ",n);
    for(int i=0;i<n;i++)
    {

        fprintf(fptr,"%d",ar[i]);
        fprintf(fptr," ");
    }

    fclose(fptr);

}
void random(int n,int array[1000])
{
    srand(time(0));
    int u=1000,l=0;
    for(int i=0;i<n;i++)
    {
        int num = ((rand() % (u-l+1)) + l);
        printf("%d ",number);
        array[i]=number;
    }

}
