/*The Caesar cipher is a type of substitution cipher in which each alphabet in the plaintext or messages is shifted by a number of places down the alphabet.
For example,with a shift of 1, P would be replaced by Q, Q would become R, and so on.
To pass an encrypted message from one person to another, it is first necessary that both parties have the ‘Key’ for the cipher, so that the sender may encrypt and the receiver may decrypt it.
Key is the number of OFFSET to shift the cipher alphabet. Key can have basic shifts from 1 to 25 positions as there are 26 total alphabets.
As we are designing custom Caesar Cipher, in addition to alphabets, we are considering numeric digits from 0 to 9. Digits can also be shifted by key places.
For Example, if a given plain text contains any digit with values 5 and keyy =2, then 5 will be replaced by 7, “-”(minus sign) will remain as it is. Key value less than 0 should result into “INVALID INPUT”
Example 1:
Enter your PlainText: All the best
Enter the Key: 1
The encrypted Text is: Bmm uif Cftu */



#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100],base;
    int key,i;
    printf("Enter your plain text : ");
    fgets(str,sizeof(str),stdin);
    printf("Enter key : ");
    scanf("%d",&key);

    if(key < 0) {
        printf("INVALID INPUT");
        return 0;
    }

    for(i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            base = islower(str[i]) ? 'a' : 'A';
            str[i] =(str[i] - base + key) % 26 + base;
        }
        else if(isdigit(str[i])) {
            str[i] = (str[i] - '0' + key) % 10 + '0';
        }
    }

    printf("The encrypted text is : %s", str);
    return 0;
}
