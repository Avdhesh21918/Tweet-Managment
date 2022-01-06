#include"headerA3.h" 
#include"header1A3.h"
int searchTweetsByKeyword(tweet * tweetList)  /* in this user enters a keyword to find the tweet if no linked list then it will print No linked list found and if it is their then it will travel the list and check if match is found it will print the keyword and the whole string in which the keyword was found ,also the user who wrote it.*/
 {
       char s[141];
       printf("Enter a keyword to search: ");
       getchar();
       scanf("%[^\n]%*c",s);
       for (int i = 0; i < strlen(s); i++) 
        {
           s[i] = tolower(s[i]);
        }
       if (tweetList == NULL)
        {
           printf("No Linked list found \n");
           return 0;
        }
      else
       {
          tweet *temp;
          temp = tweetList;
          while(temp != NULL)
           {
             if((strstr(temp->text,s)!= NULL))
               {
                 printf("Match found for '%s':%s wrote:'%s'\n",s, temp->user,temp->text); 
                }
              temp = temp->next;
            }
          return 1;
        }
    return 0 ;
  }
