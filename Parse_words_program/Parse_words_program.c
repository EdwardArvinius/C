/*
Edward Arvinius
*/

/*
Note: I created a word count function that is being called in the "makearg" function to make it look less messy.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int makearg(const char s[], char **args[]);
int CountNumWords(const char *s); 

int main()
{
    // variable declarations
    char **args = NULL;
    const char *str;
    
    // Makes the user input a string with whitespace
    printf("Please enter some tokens to parse: ");
    scanf ("%[^\n]%*c", str);  

    int argc;
    argc = makearg(str, &args); // function call
 
 // prints num of tokens (this value was returned from the "int makearg" function)
    printf("Tokens found: %d\n", argc); 
  
    int i;
    for(i = 0; i < argc; i++)
    {
     puts(args[i]); // writes C string pointed by str to the standard output and 			      // adds a newline character.
     free(args[i]); // deallocates the memory previously allocated
    }
    free(args);

  return 0;
}


int makearg(const char s[], char **args[])
{

   int argc = CountNumWords(s); 

   int length;

   if(argc == 0)
   {
     *args = NULL;
      return -1;
   }

   *args = malloc(argc * sizeof(char*)); // allocate memory
   argc = 0;

   while(1)
   {
     while(isspace(*s))
     ++s;
     // checks if the end of the file is reached
     if(EOF==sscanf(s, "%*s%n", &length))      
     break;				 

    (*args)[argc] = malloc(length + 1);   
     strncpy((*args)[argc], s, length); // copies the first num of characters back						      // to ponter array.
    (*args)[argc++][length] = '\0';
     s += length;

    }
   return argc;
}

int CountNumWords(const char s[])
{
    int WordCount = 0;
    char p = ' ';

    while(*s)
    {
        if(isspace(p) && !isspace(*s)) // checks if whitespace
        {
        ++WordCount; // adds to the word count
        }
        p = *s++;
    }
    return WordCount;
}

