/* 1
#include<stdio.h>
int main()
{
    int a[10] ,i, sum=0;
   printf("enter 10 numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];    }
printf("sum is %d",sum);
return 0;
}*/
/* 2
#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    float avg;
    printf("enter 10 numbers ");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/10.0;
    printf("average of %f",avg);
    return 0;
}*/

/* 3
#include<stdio.h>
int main()
{
    int a[10],i, sumeven=0,sumodd=0;
    printf("enter 10 numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            sumeven=sumeven+a[i];
        else
            sumodd=sumodd+a[i];
    }
    printf("all even numbers sum is %d",sumeven);
    printf("\nall odd numbers sum is %d",sumodd);
    return 0;
}*/
/* 4
#include<stdio.h>
int main()
{
    int a[10],i;
    long long int max=-99999999999;
    printf("enter 10 numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
            max=a[i];
    }
    printf(" greatest numbers is %d",max);
}*/
/* 5
#include<stdio.h>
int main()
{
    int a[10],i;
    long int max=99999999;
    printf("entert 10 numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(max>a[i])
            max=a[i];
    }
    printf("\n smallest numbers  %d",max);
    return 0;
}*/
/* 6
#include<stdio.h>
int main()
{
    int a[10],i,j,temp,x;
    printf("enter 10 numbers");
    for(x=0;x<=9;x++)
    scanf("%d",&a[x]);
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
            if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        printf("%d  ",a[i]);
    }
    return 0;
}*/
/* 7
#include<stdio.h>
int main()
{
    int a[10],x,i,j,temp;
    printf("enter 10 numbers");
    for(x=0;x<=9;x++)
        scanf("%d",&a[x]);
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
            if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
         }
          printf("\n %d",a[8]);

}*/
/* 8
#include<stdio.h>
int main()
{
    int a[10],x,i,j,temp;
    printf("enter 10 numbers");
    for(x=0;x<=9;x++)
        scanf("%d",&a[x]);
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
            if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    printf("%d",a[1]);
    return 0;
}*/
/* 9
#include<stdio.h>
int main()
{
    int a[10],i,j;
    printf("enter 10 numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
        for(j=9;j>=0;j--)
            printf("%d  ",a[j]);
        return 0;

}*/

#include<stdio.h>
int main()
{
    int a[10],i;
    printf("enter n numbers");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    int b[10];
    for(i=0;i<=9;i++){
        b[i]=a[i];
        printf("%d  ",b[i]);
    }
    return 0;
}
