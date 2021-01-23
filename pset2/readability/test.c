#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void)
{
    char text[100],blank[100];
    
    int c = 0, d =0;
    printf("Enter text:");
    scanf("%c", &text);
   while (text[c] != '\0') {
      if (text[c] == ' ') {
         int temp = c + 1;
         if (text[temp] != '\0') {
            while (text[temp] == ' ' && text[temp] != '\0') {
               if (text[temp] == ' ') {
                  c++;
               }  
               temp++;
            }
         }
      }
      blank[d] = text[c];
      c++;
      d++;
   }
        printf("%s\n", text);    
}        