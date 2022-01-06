#include"headerA3.h" 
#include"header1A3.h" 
void displayTweets(tweet * tweetList)    /* display the linked list, if no linked list it will print No nodes in the list othervise it will display till it reaches the last node*/
{
   if (tweetList == NULL)
      {
        printf("No Nodes in the list\n");
       }
    else
        {
          tweet *temp;
          temp = tweetList;
          while (temp!= NULL)
            {
              printf("%d:created by %s: %s \n",temp->id,temp->user,temp->text);
              temp = temp->next;
             }
         }
}
