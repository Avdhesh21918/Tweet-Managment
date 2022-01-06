#include"headerA3.h" 
#include"header1A3.h"
void saveTweetsToFile(tweet * tweetList)         /* scan the filename in which the user wants to save the tweets ,travel the linklist and within the loop fprintf the tweets into the file given by the user*/
{
      char filename[20];
      FILE*file;
      printf("Enter a filename where you would like to store your tweets:    \n");
      scanf("%s",filename);
      file=fopen(filename,"w");
      tweet *temp;
      temp = tweetList;
      while(temp !=NULL)
        {
          fprintf(file,"%d,", temp->id);
          fprintf(file,"%s,", temp->user);
          fprintf(file,"%s,\n",temp->text);
          temp = temp->next;
         }
      printf("Output Sucessful! \n");
      fclose(file);
}
