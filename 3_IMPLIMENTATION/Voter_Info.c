#include<stdio.h>
#include "Voter_Info.h"
extern int voting(int );
char voteInfo(int N)
{
    
    int tempVI,ch;
    printf("welcome to voater inforamtion portal\n");
    printf("please enter your voter id (e.g. 123,234,345,etc)\n");
    scanf("%d",&tempVI);
    for(int k=0;k<50;k++)
    {
       if(tempVI==VdI.VoterID[k])
        {
            printf("you are already registered\n");
            printf("want to proceed to voting? \n \t 1) YES\n \t 2) NO\n");
        l2: scanf("%d",&ch);
            if(ch==1)
            voting(ch);
            else if(ch==2)
            return 1;
            else
            {printf("wrong choice enter again");
            goto l2;
            }
        }
        else
        {static int numb=0;
            printf("you are not registered\n");
            printf("want to proceed to registration? \n \t 1) YES\n \t 2) NO\n");
        l3: scanf("%d",&ch);
            if(ch==1)
            {
                printf("enter your voting id\t");
                scanf("%d",&VdI.VoterID[numb]);
                printf("enter your name\t ");
                scanf("%s",&VdI.VoterName[numb][100]);
                printf("enter your mobile number\t");
                scanf("%d",&VdI.VoterMNo[numb]);
                 printf("you'r registeration is sucessfull\n");
                 printf("want to proceed to voting? \n \t 1) YES\n \t 2) NO\n");
            l4: scanf("%d",&ch);
                if(ch==1)
                voting(ch);
                else if(ch==2)
                return 1;
                else
                goto l4;
            }
            else if(ch==2)
            return 1;
            else
            goto l3;
        }
    }

}
