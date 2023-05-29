#include<stdio.h>

#include<stdlib.h>



FILE *fptr1,*fptr2,*fptr3,*fptr3,*fptr4,*fptr5,*er;



int i,j,k;

main()

{

 int r,l,m,g;

 printf("enter the lenght of numbers\n");

 scanf("%d",&l);

 printf("enter range of numbers\n");

 scanf("%d",&r);

int s[100];

    fptr1=fopen("input.txt","w+");

    fptr2=fopen("stack.txt","w+");

    fptr3=fopen("pop.txt","w+");

    fptr4=fopen("push.txt","w+");

    fptr5=fopen("operation.txt","w+");

    int a[100];

    in=fptr1;

    int top=i;

    for(i=0;i<d;i++)

    {

     a[i]=(rand()%(n+1));

     fprintf(fp1,"%d ",a[i]);

     printf("%d ",a[i]);

      printf("\n");

    }

    while(1)

    {

        printf("1-push\n");

        printf("2-pop\n");

        printf("3-done\n");

        scanf("%d",&m);

        if(m==1) //push

        {



            if(k>l)

            {

                printf("stack filled\n");



            }

            else

            {

                s[j]=a[k];

                fprintf(fptr4,"%d ",a[k]);

                k++;

                j++;

                fprintf(fptr5,"push " );



            }





        }

        else if(c==2)//pop

        {

            if(top==-1)

            {

                printf("stack empty\n");

            }

            else

            {

               j--;

               fprintf(fptr3,"%d ",s[j]);

               fprintf(fptr5,"pop ");

            }



        }

        else if(c==3)

        {

            break;

        }

        else

        {

            printf("invalid\n");

        }



    }

     for(k=0;k<j;k++)

    {

     printf("%d ",s[k]);

     fprintf(fptr2,"%d ",s[k]);

    }



    fclose(fptr);

    fclose(fptr2);

    fclose(fptr3);

    fclose(fptr4);

    fclose(fptr5);









}
