//Palindrome program
#include<stdio.h>
int main ()
{ 
char name[256];
 int length, check;
printf("Please enter your name\n");
scanf("%s", &name);

for (int i = 0; name[i] != '\0'; i++) {
	length++;
}

for (int j = 0; j <length-1; j++) {	
  if (name[j] == name[length-1-j]) {
    check++;
  }
  else {
    check--;
  }
 }

 if (check==length-1) {
   printf("Your name is palindromic \n");
 }
 else
   printf("Your name is not palindromic \n");
}
