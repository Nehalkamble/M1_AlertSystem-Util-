#include <stdio.h>
#include "Voter_Info.h"
#include <string.h>

int voting(int n)
{

    int vChoice;
    for (int k = 0; k <= 50; k++)
    {
        strcpy(VdI.VoterName[k], "nill");
        VdI.VoterID[k] = 0;
        VdI.VoterMNo[k] = 0;
    }
    static int number = 0;
    printf("enter your voting id\t");
    scanf("%d", &VdI.VoterID[number]);
    printf("enter your name\t ");
    scanf("%s", &VdI.VoterName[number][100]);
    printf("enter your mobile number\t");
    scanf("%d", &VdI.VoterMNo[number]);

    printf("choose who you want to vot for\n");
    for (int k = 0; k < 5; k++)
    {
        printf("%d) %s \t %s \t %s \n", k + 1, CdI.CdName[k], CdI.CdParty[k], CdI.CdSymbol[k]);
    }
v1:
    scanf("%d", &vChoice);
    if (vChoice == 1)
    {
        votes[0]++;
        printf("voating sucessfull\n");
        return 1;
    }
    else if (vChoice == 2)
    {
        votes[1]++;
        printf("voating sucessfull\n");
        return 1;
    }
    else if (vChoice == 3)
    {
        votes[2]++;
        printf("voating sucessfull\n");
        return 1;
    }
    else if (vChoice == 4)
    {
        votes[3]++;
        printf("voating sucessfull\n");
        return 1;
    }
    else if (vChoice == 5)
    {
        votes[4]++;
        printf("voating sucessfull\n");
        return 1;
    }
    else
    {
        printf("wrong choice select again");
        goto v1;
    }
    number++;
}