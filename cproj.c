#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



char key[100] = "PESUNIVERSITY";
char table[5][5] = {{'P', 'E', 'S', 'U', 'N'}, {'I', 'V', 'R', 'T', 'Y'}, {'A', 'B', 'C', 'D', 'F'}, {'G', 'H', 'K', 'L', 'M'}, {'O', 'Q', 'W', 'X', 'Z'}};

int grid()
{

    int grid[5][5];
    int i, j;
    

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("| %c |", table[i][j]);
        }
        printf("\n");
    }
    return 0;
}
int strsplit()
{

    int k, l;
    char stri[6];
    char subtext[2];
    char temp='\0';
    char z = '\0';
    printf("Enter a string :- ");
    scanf("%s", &stri);
    for (k = 0; k < sizeof(stri); k += 2)
    {
        if (sizeof(stri) % 2 == 0)
        {
            memcpy(subtext, &stri[k], 2);
            if (sizeof(subtext) == 2)
            {
                subtext[k + 2] = '\0';
                if (subtext[1] != '\0')
                {

                    for (l = 0; l < sizeof(subtext); l++)
                    {
                        if (subtext[0] == subtext[1])
                        {
                            temp = subtext[1];
                            subtext[1] = 'x';
                        }
                    }

                    printf("%s ", subtext);
                }
                else
                {
                    z = 'z';
                    printf("%c", temp);
                    printf("%s", subtext);
                    printf("%c",z);
                    z = '\0';
                }
            }
        }
    }
}
int encrypt()
{
    
    int i,j,k,r1,c1,r2,c2;
    char s[2],a;
    
    printf("Enter the string :- ");
    scanf("%s",s);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (table[i][j] == toupper(s[0]))
            {
                r1 = i;
                c1 = j;                
            }
            if (table[i][j] == toupper(s[1]))
            {
                r2 = i;
                c2 = j;                
            }

        }
            //printf("\n");
    }
    // rule 1: horizontal line
    if (r1 == r2)
    {
        if (c2 == 4)
            printf("%c%c",table[r1][c1+1],table[r2][0]);
        else
            printf("%c%c",table[r1][c1+1],table[r2][c2+1]); 
    }
    // rule 2: veritcal line
    if (c1 == c2)
    {
        if (r2 == 4)
            printf("%c%c",table[r1+1][c1],table[0][c2]);
        else
            printf("%c%c",table[r1+1][c1],table[r2+1][c2]);
    }
    // rule 3: rectangle law
    if (r1 != r2 && c1 != c2)
        printf("%c%c",table[r1][c2],table[r2][c1]);
    return 0 ;
    
}
void decrypt()
{
    int i, j, k, r1, c1, r2, c2;
    char s[2], a;

    printf("Enter the string :- ");
    scanf("%s", s);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (table[i][j] == toupper(s[0]))
            {
                r1 = i;
                c1 = j;
            }
            if (table[i][j] == toupper(s[1]))
            {
                r2 = i;
                c2 = j;
            }
        }
        //printf("\n");
    }
    // rule 1: horizontal line
    if (r1 == r2)
    {
        if (c1 == 1)
            printf("%c%c", table[r1][5], table[r2][c2 - 1]);
        else
            printf("%c%c", table[r1][c1 - 1], table[r2][c2 - 1]);
    }
    // rule 2: vertical line
    if (c1 == c2)
    {
        '' if (r1 == 1)
            printf("%c%c", table[5][c1], table[r2 - 1][c2]);
        else printf("%c%c", table[r1 - 1][c1], table[r2 - 1][c2]);
    }
    // rule 3: rectangle law.
    if (r1 != r2 && c1 != c2)
        printf("%c%c", table[r1][c2], table[r2][c1]);
    return 0;
}


int main()
{
    grid();
    //strsplit();
    encr();
    return 0;
}
