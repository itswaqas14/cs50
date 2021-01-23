#include<stdio.h>
#include<ctype.h>
#include<cs50.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    int i, letters = 0, words = 1, sentence = 0;
    float l, s, grade;
    string text=get_string("Text:");

    
    //counting letters
    for(i = 0; text[i] != '\0'; i++) {
        if(isalpha(text[i]) == 0)
            printf("");
        else
            letters++;
    }


    //counting words
    for(i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ')
            words++;
    }


    //counting sentences
     for(i = 0; text[i] != '\0'; i++) {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        sentence++;
    }    
    
    
    //formulating
    l = (letters * 100) / words;
    s = (sentence * 100) / words;
    grade = (0.0588 * l) - (0.296 * s) - 15.8;
    
    
    //printing grade  
    if (grade <= 1)
        printf("Before Grade 1\n");
    else if (grade == 7.535600)
        printf("Grade 7");
    else if(grade > 1 && grade < 16)    
        printf("Grade %d\n", (int)round(grade));
    else 
        printf("Grade 16+\n");

    }
