#include"headerA3.h" 
#include"header1A3.h" 
void loadTweetsFromFile(tweet ** tweetList)   /* Ask the user for the input from where he/she wants to load the tweets from and then call the addNodeToList function to add the tweets to the linked list (the checking of empty linked list is not necessar I just did that simpily))*/
{
    char filename[100];
    FILE *file;
    printf("Please Enter the file name: ");
    scanf("%s",filename);
    if((file = fopen(filename,"r"))==NULL)
        {
          printf("Error can't open file \n");
          return;
        }
    printf("Loading the tweets from file \n");
    if (*tweetList == NULL)
       {
         while( fgets(filename,100,file)!=NULL)
           {
             tweet*node=0;
             printf("Data from the file: %s\n",filename);
             addNodeToList(tweetList,node);
           }
        }
     else
       {        
         tweet *temp;
         temp = *tweetList;
         while(temp != NULL)
           {    
             tweet*node=0;
             fflush(stdin);
             while (fgets(temp->text,141,file)!=NULL)
               {
	         printf("%s\n",temp->text);		 
                 addNodeToList(tweetList,node);
               }
             temp = temp->next;
            }
        }
  printf("Tweets imported! \n"); 
  fclose(file);
}