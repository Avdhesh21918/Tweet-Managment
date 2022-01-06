#include"headerA3.h" 
#include"header1A3.h"
void addNodeToList(tweet **tweetList,tweet * node)       /* To check if the linked list id empty then assign the created node to the head othervise traverse the list and assign it to the last*/
{
  if ( *tweetList == NULL)
       {
         tweet*p;
         p = node;
         *tweetList = p;
        }
  else
     {
        tweet*temp;
        temp = *tweetList;
        while(temp->next != NULL)
           {
             temp = temp->next;
            }
         temp->next = node;
      }
}
