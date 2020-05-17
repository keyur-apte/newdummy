#include<stdio.h>
int main()
{
    int i,row,n,num=1,k,temp;
    printf("enter the number of rows: ");
    scanf("%d" ,&n);
    temp=n;
    for(k=1;k<=4;k++)
    { 
        if(k%2!=0){
    for(row=1;row<=n;row++)
    {       
            for(i=row;i<n;i++)
            {
                printf(" ");
            }
            for(i=1;i<=(2*row)-1;i++)
            {
                if(num==1) {
                    printf("**");
                }
                else if(i==1 || i==(2*row)-1){
                    printf("*");
                }
                else if(i==2){
                    printf("  ");
                } 
                else{
                    printf(" ");
                }
            }
            printf("\n");
            num=2;
    }
        }
    
    else  {
      for(row=1;row<=n;row++)
      {   
          for(i=row;i<=(2*row)-1;i++)
          {
              if(i==n){
                  printf("**");
              }
              else if(i==(2*row)-1){
                  printf("*");
              }
              //else if(i==n-1){
                //  printf("  ");
              //}
              else{
                  printf(" ");
              }
              
          }
          for(i=1;i<=n-(temp-1);i++)
          {
              printf(" ");
          }
          temp--;
          printf("\n");
      }num=1;
    }
    }
    return 0;
}