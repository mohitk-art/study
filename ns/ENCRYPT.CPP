#include<stdio.h>
#include<conio.h>
#include<string.h>
void EncryptDecrypt(char inputstring[]){
char xorkey = '!';
int len = strlen(inputstring);

int i;
for(i=0;i<len;i++){
inputstring[i] = inputstring[i]^xorkey;
}

printf(inputstring);
}

void main(){
clrscr();
char samplestring[] = "Seth Jai Parkash Polytechnic, Damla";
printf("Original String: ");
printf("\nEncrypted String: %c");
EncryptDecrypt(samplestring);
printf("\nDecrypt String: ");
printf("\n");
EncryptDecrypt(samplestring);
getch();
}