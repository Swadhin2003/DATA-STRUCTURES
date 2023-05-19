#include<stdio.h>    
int main()
{  
    int a[20][20],b[20][20],m[20][20],r,c,i,j,x;    
        printf("Enter the number of rows:");    
        scanf("%d",&r);    
        printf("Enter the number of columns:");    
        scanf("%d",&c); 
        printf("Enter the first matrix's elements:\n");    
            for(i=0;i<r;i++)    
            {    
                for(j=0;j<c;j++)    
                    {    
                    scanf("%d",&a[i][j]);    
                    }    
            }    
        printf("Enter the second matrix's elements:\n");    
            for(i=0;i<r;i++)    
            {    
                for(j=0;j<c;j++)    
                    {    
                    scanf("%d",&b[i][j]);    
                    }    
            }    
        printf("Multipliplication of the two matrices:\n");    
            for(i=0;i<r;i++)    
            {    
                for(j=0;j<c;j++)    
                {    
                    m[i][j]=0;    
                    for(x=0;x<c;x++)    
                    {    
                        m[i][j]+=a[i][x]*b[x][j];    
                    }    
                }    
            }    
            for(i=0;i<r;i++)    
            {    
                for(j=0;j<c;j++)    
                {    
                    printf("%d\t",m[i][j]);    
                }    
        printf("\n");    
    }    
        return 0;  
}