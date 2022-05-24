#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int grid()
{

    int grid[5][5];
    int i,j;
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            scanf("%s",&grid[i][j]);
        }
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            printf("|_%s_|", &grid[i][j]);
        }
        printf("\n");
    }
}
int strsplit()
{
    int k,l;
    char stri[10] = "";
    char subtext[2],temp;
    printf("Enter a string :- ");
    scanf("%s",&stri);
    for (k=0;k<sizeof(stri);k+=2)
    {
        if (sizeof(stri)%2 ==0)
        {
            memcpy(subtext,&stri[k],2);
            if (sizeof(subtext) == 2)
            {
                subtext[k+2]='\0';
                if (subtext[1]!='\0')
                {

                    for (l=0;l<sizeof(subtext);l++)
                    {
                        if (subtext[0] == subtext[1])
                        {
                            temp = subtext[1];
                            subtext[1]='x';
                        
                        }
                    
                    }
                
                    printf("%s ",subtext);
                }
                else 
                    {
                        printf("%c",temp);
                        printf("%s ",subtext);
                        temp=NULL;
                    }
            }
            
        }
            
        
    }
    
}
int main()
{
    //grid();
    strsplit();
    return 0;
}