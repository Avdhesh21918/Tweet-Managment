#include"headerA3.h"
#include"header1A3.h"
tweet * createTweet( tweet * tweetList) 
{
    int sum = 0, i, len,userid,vk;             /* declaring variable and also creating a node by malloc function*/
    tweet *temp;      
    temp = malloc(sizeof(tweet));
    
    printf("Enter Username \n");               /* printing and scaning the username , and the tweet text ,also assigning the pointer of that node to null*/
    scanf("\n%[^\n]s",temp->user);
    printf("Enter user tweet \n"); 
    scanf("\n%[^\n]s",temp->text);
    temp->next = NULL;
    len = strlen(temp->user);                  /* To calculate the userid we will need the length of the username and the usertext bascially the tweet*/
    vk = strlen(temp->text);

  for (i = 0; i < len; i++)                    /* For loop is to calculate the sum of the ASCII values*/
    {
     sum = sum + temp->user[i];
    }
 
    userid = sum + vk;                         /* This will give us userid*/
  if(tweetList == 0)                           /* In case the head is null assign the userid to temp->id*/
    {
     temp->id = userid;
    }
   else
     {                                       /* to check if the userid is matching or not so , traverse the list and if it matches assign random values from 1 to 999*/
       tweet*p;
       p = tweetList;
       while(p!=NULL)
         {
           if( p->id == userid)
             {
                srand(time(NULL)); 
                int r = rand()%998;
                userid = r ;
                temp->id = userid;
              }
            else
             {
              temp->id = userid;
             }
            p = p->next;
         }
      }
   return temp;
   free(temp);
}
