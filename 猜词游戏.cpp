#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    int i,j,c,count=0,ans=0,flag=0,*ptr;
    char a[1][6]={'d','o','g','o','d','o'};
    char b[10],alpha;
    char d='_';
    c=strlen(&a[0][0]);
    printf("\n\n\t\t\t**HANGMAN**\n");
       printf("\n\t\t\t**************\n");
          printf("\n\t\t\t..............\n\n\t\t");
    for(j=0;j<3;j++)
    {
        printf("%c",d);
        b[j]=d;
    }
    printf("\n\t\t\t..............\n\n\t\t");
    printf("\n\t\t\t**************\n");
    while(count<6)
    {
        flag=0;
        printf("\n\n\n\n\n\tenter a char");
        alpha=getche();
        for(i=0;i<3;i++){
            if(alpha==a[0][i])
            {
                b[i]=a[0][i];
                flag=1;
                ans++;}
            }




    printf("\n\n\t\t\t**HANGMAN**\n");
    printf("\n\t\t\t**************\n");
    printf("\n\t\t\t..............\n\n\t\t");
    for(i=0;i<c;i++)
        printf("%c",b[i]);
    printf("\n\t\t\t..............\n\n\t\t");
    printf("\n\t\t\t**************\n");
    if(flag==0)
    {count++;
    printf("\n\n\n\n\t\t%c is a wrong guess",alpha);
    printf("\n\n\t\t(u have %d more quesses)",6-count);}
    else
        {
     printf("\n\n\t\t u r correct!!");
    printf("\n\t\t(u have %d more words to go)",c-ans);}
    if(ans==c) break;}


    if(ans==c) printf("\n\n\n\t you won");
    else printf("\n\n\n\t\t u lose.\n\n\t\t**SORRY U R HANGED**");
    getch();
    return 0;
    }
