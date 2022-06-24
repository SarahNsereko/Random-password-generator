#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int password(int length){
char variety_list[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890!@#$%^&*+|:?>/<||";
srand(time(0)); //srand means seeding with the rand function that generates a random password .We use time because its a value that changes every time we run the program
//makes use of computers internal clock
printf("Your new password is down below\n");
for (int i=0; i<length ;i++){
printf("%c", variety_list[rand() %( sizeof variety_list-1)]);}
}
int main()
{


int length;
BlockA:
 printf("Hey! We heard you were having a little trouble coming up with a password\n\nWe're here to help\n\n");
 printf("A longer password is always better than a shorter one!\n\nAllow us to generate one for you that isn't too long but perfect\n");
 printf("Enter the length of the password you want us to generate for you: ");
 scanf("%d",&length);
 if (length <8 ){
    printf("Oops looks like your password length is below standard .\n\n We recommend 8 to 11 characters\n\n");
    goto BlockA;
 }

 password(length);

    return 0;
}
