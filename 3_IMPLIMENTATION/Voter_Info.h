#ifndef voter_info_H
#define voter_info_H



typedef struct{
    char VoterName[50][100];
    int VoterID[50];
    int VoterMNo[50];
}voterId;

typedef struct{
    char CdName[5][20];
    char CdParty[5][20];
    char CdSymbol[5][20];
}candidateId;
candidateId CdI;
voterId VdI;
static int votes[5]={0};


#endif
