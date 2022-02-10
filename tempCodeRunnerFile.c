#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    char ans[100];
    gets(st);
    int n=strlen(st);

    char min[26];
    for (int i=0; i<26; i++){
        min[i]="z";
    }
 
    // find smallest alphabet
    for (int i=0; i<n-1; i++){   
        if (st[i] < min[i])
            min[i] = st[i]; 
    }
    int z=122;
    for (int i=0; i<n-1; i++){
        if(z<=min[i])
        printf("%s",z-1);
z--;
    
        
    }


          
    return 0;


}