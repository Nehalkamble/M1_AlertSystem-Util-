#include <iostream>
using namespace std;
 
// function that return the largest alphabet.
char largest_alphabet(char a[], int n)
{
    // initializing max alphabet to 'a'
    char max = 'A';
 
    // find largest alphabet
    for (int i=0; i<n; i++)   
        if (a[i] > max)
            max = a[i];   
 
    // returning largest element
    return max;
}
 
// function that return the smallest alphabet
char smallest_alphabet(char a[], int n)
{
    // initializing smallest alphabet to 'z'
    char min = 'z';
 
    // find smallest alphabet
    for (int i=0; i<n-1; i++)   
        if (a[i] < min)
            min = a[i];   
 
    // returning smallest alphabet
    char minn='a';
    if(minn<min)
    return minn;
}
 
// Driver Code
int main()
{
    // Character array
    char a[]= "bbbbbbccc";
 
    // Calculating size of the string
    int size = sizeof(a) / sizeof(a[0]);
 
    // calling functions and print returned value
    
 
    
    cout << smallest_alphabet(a,size)<<endl;
    return 0;
}