#include<bits/stdc++.h>
using namespace std;

void reverseWords(char* s)
{
  char* word_begin = NULL;
 
  //  /* temp is for word boundary */
  char* temp = s;
 
  /*STEP 1 of the above algorithm */
  while (*temp)
  {
 
    /*This condition is to make sure that the
          string start with valid character (not
          space) only*/
    if ((word_begin == NULL) &&
        (*temp != ' '))
    {
      word_begin = temp;
    }
    if (word_begin && ((*(temp + 1) == ' ') ||
                       (*(temp + 1) == '\0')))
    {
      reverse(word_begin, temp);
      word_begin = NULL;
    }
    temp++;
  } /* End of while */
 
  /*STEP 2 of the above algorithm */
  reverse(s, temp - 1);
} 