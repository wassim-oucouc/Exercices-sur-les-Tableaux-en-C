#include <stdio.h>

int main()
{
    int n;
    printf("entrer le numero des elements : ");
    scanf("%d",&n);
    int tableau[n];

    for( int i = 0 ; i < n ; i++)
    {
    printf("entrer les elements  %d: ",i + 1);
    scanf("%d",&tableau[i]);
    }
    printf("Les elements de tableau est : ");
    for( int  i = 0 ; i < n ; i++)
    {
        printf(" %d\n ",tableau[i]);

    }

    }



