#include"headerA3.h" 
#include"header1A3.h" 
int length(tweet **tweetList)    /* It will calculate the length or the number of tweets entered by the user.Just count till the pointer becomes null*/
 {
   int count = 0;
   tweet *temp;
   temp = *tweetList;
   while(temp != NULL)
     {
       count++;
       temp = temp->next;
      }
   return count;
 }






    



