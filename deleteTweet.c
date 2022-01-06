#include"headerA3.h" 
#include"header1A3.h"
void deleteTweet(tweet ** tweetList)   /* it will delete the tweet which the user wants by assigning the node which he wants to delete to a temporary pointer and then first remove the links of the node by another temporary pointer and then use free function to free it*/
{ 
    int loc,i=1,y=0;
    y = length(tweetList);
    printf("Enter Number between 1 and %d\n",y);
    printf("Enter loc to delete: ");
    scanf("%d", &loc);
   
    if (*tweetList == NULL)
      {
        printf("No linked list \n");
      }
    else if(loc>y)
      {
       printf("INVALID NUMBER NO LINKED LIST \n");
      }
    else if (loc == 1)
      {
        tweet *temp;
        temp = *tweetList;
        *tweetList = temp->next;
        temp->next = NULL;
        free(temp);
        printf("Node deleted if loc 1 \n");
      }
    else
      {
        tweet *p;
        tweet *q;
        p = *tweetList;
         while(i<loc-1)
          {
            p = p->next;
            i++;
           }
         q = p->next;           /*one box ahead of p q is pointing*/
         p->next = q->next;
         q->next = NULL;
         free(q);
         printf("Node deleted otherwise \n");
       }
}
