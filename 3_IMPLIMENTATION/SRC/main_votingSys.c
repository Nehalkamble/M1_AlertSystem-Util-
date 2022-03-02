#include <stdio.h>
#include <string.h>
#include "Voter_Info.h"
extern int voteInfo(int);
extern int voting(int);

void main()
{
    votes[0] = 0;
    votes[1] = 0;
    votes[2] = 0;
    votes[3] = 0;
    votes[4] = 0;
    strcpy(CdI.CdName[0], "nill");
    strcpy(CdI.CdName[1], "nitin");
    strcpy(CdI.CdName[2], "mukesh");
    strcpy(CdI.CdName[3], "ramesh");
    strcpy(CdI.CdName[4], "amar");

    strcpy(CdI.CdParty[0], "BJP");
    strcpy(CdI.CdParty[1], "CONGRESS");
    strcpy(CdI.CdParty[2], "BSP");
    strcpy(CdI.CdParty[3], "AAP");
    strcpy(CdI.CdParty[4], "SP");

    strcpy(CdI.CdSymbol[0], "LOTUS");
    strcpy(CdI.CdSymbol[1], "HAND");
    strcpy(CdI.CdSymbol[2], "ELIPHANTl");
    strcpy(CdI.CdSymbol[3], "BROOM");
    strcpy(CdI.CdSymbol[4], "BICYCLE");

    int n = 0;

q1:
    printf("*Welcome To Voting Portal*\n");
s1:
    printf("Please Select Your Choice (enter respetive number)\n \t 1) Check if you'r registered or not \n \t 2) Enter for voating\n \t 3) check current voting\n \t 4) exit\n");
    int choice;
L1:
    scanf("%d", &choice);
    if (choice == 1)
    {
        int c = voteInfo(n);
        if (c == 1)
            goto s1;
    }
    else if (choice == 2)
    {
        int a = voting(n);
        if (a == 1)
            goto q1;
    }
    else if (choice == 3)
    {
        int pass = 0000;
        int pas;
    pass1:
        printf("enter password\n");
        scanf("%d", &pas);
        if (pas == pass)
        {
            for (int k = 0; k < 5; k++)
            {
                printf("%d) %s \t %s \t %s       total votes gaines=%d \n", k + 1, CdI.CdName[k], CdI.CdParty[k], CdI.CdSymbol[k], votes[k]);
            }
            goto q1;
        }
        else
        {
            printf("wronf pass");
            goto pass1;
        }
    }
    else if (choice == 4)
    {
        return;
    }

    else
    {
        printf("\n wrong choice\n choose again\n");
        goto L1;
    }
}