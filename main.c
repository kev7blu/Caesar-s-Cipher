#include <stdio.h>

int strlength(char mystr[])
{
    int i = 0;
    while (mystr[i] != 0)
    i++;
    
    return i;
}

void encrpyt(int k, char C[])
{
    int q =0;
    
    for (int i = 0; i < strlength(C); i++)
    {
        if (C[i]<= 'z' && C[i] >= 'a')
        {
             q = ((C[i] - 'a' + k) % 26);
            C[i] = q + 'a';
        }
    
        else if (C[i]<= 'Z' && C[i] >= 'A')
        {
            q = ((C[i] - 'A' + k) % 26);
            C[i] = q + 'A';
        }
    }
}

int main()
{
    
    char A[273] = "Deck the Halls";
    //printf("enter your text to encrypt: ");
    //scanf("%s", A);
    encrpyt(2, A); // the shift is the number change if necessary
    printf("%s", A);
    
    return 0;
}
