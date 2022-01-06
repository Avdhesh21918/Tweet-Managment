#include"headerA3.h"
#include"header1A3.h"
   
int main(void)
 {  
    tweet * tweetList=0;                                                    /* declaring a tweet type pointer and assigning it to 0*/
    tweet * node=0;

    for (int i =1;i<1000000000000000;i++)                                   /* to repeat the loop, since nothing was mentioned so just took a random value as a infinite number of tweets */
      {
        int n=0; 
        printf("1.Create a new tweet\n");                                    /* creating the the menu option and the scanning the value entered by the user */
        printf("2.Display tweets\n");
        printf("3.Search a tweet (by keyword)\n");
        printf("4.Find how many words are stop words\n");
        printf("5.Delete the nth tweet \n");
        printf("6.Save tweets to a file \n");
        printf("7.Load tweets from a file \n");
        printf("8.Exit\n"); 
        scanf("%d",&n);
     
        if (n==1)							   
          {
             node = createTweet(tweetList);                              /* calling the createnode and addnode function,create func will creat a new node and addnode will add it to the last of linked list and if no linked list then it will be the head*/
             addNodeToList(&tweetList,node);                      
           }
        if (n==2)						            
          {
             displayTweets(tweetList);                                   /* calling display function it will display all the tweets you have entered*/
          }
        if (n==3)
          {
            searchTweetsByKeyword(tweetList);                           /* search function will search a keyword that user entered and if match is found it will display that tweet*/
          }
        if (n==4)							 
          {		
            countStopWords(tweetList);                                  /* This function will count the number of stop words*/
          }
        if (n==5)
          {
            deleteTweet(&tweetList);                                  /* this function will delete the linked list that user wants to delete*/
          }
        if (n==6)
          {
            saveTweetsToFile(tweetList);                             /* save tweets to the file which user wants to*/
          }
        if (n==7)
          {
            loadTweetsFromFile(&tweetList);                            /* load tweets from a file which user wants to and add it to the linked list*/
          }
        if (n==8)
          {
            return 0;                                                /*if user enters a value equal to 8 the program will exit*/
          }
      }
   return 0;
 }