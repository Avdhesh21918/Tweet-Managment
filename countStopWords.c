#include"headerA3.h" 
#include"header1A3.h"
void countStopWords(tweet * tweetList)  /* 25 stop words were given whereever we find those just count++ and in the last print the number of count words ,for this also traverse the linked list and finds the string with stop words*/
{
    if (tweetList == NULL)
       {
          printf("NO LINKED LIST \n");
        }
     else
       { 
         int count=0;
         tweet *temp;
         temp = tweetList;
         while(temp != NULL)
           {
             if((strstr((temp->text) ," a ")||strstr((temp->text) ," A ")))
                {
                  count++;
		}
             if((strstr((temp->text) ," an ")||strstr((temp->text) ," AN ")))
               {
                 count++;
		}
             if((strstr((temp->text) ," and ")||strstr((temp->text) ," AND ")))
               {
                 count++;
                }
             if((strstr((temp->text) ," are ")||strstr((temp->text) ," ARE ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," as ")||strstr((temp->text) ," AS ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," at ")||strstr((temp->text) ," AT ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," be ")||strstr((temp->text) ," BE ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," by ")||strstr((temp->text) ," BY ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," for ")||strstr((temp->text) ," FOR ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," from ")||strstr((temp->text) ," FROM ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," has ")||strstr((temp->text) ," HAS ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," he ")||strstr((temp->text) ," HE ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," in ")||strstr((temp->text) ," IN ")))
               {
                 count++;
	       }
             if((strstr((temp->text) ," is ")||strstr((temp->text) ," IS ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," it ")||strstr((temp->text) ," IT ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," its ")||strstr((temp->text) ," ITS ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," of ")||strstr((temp->text) ," OF ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," on ")||strstr((temp->text) ," ON ")))
               {
                 count++;
	       }
             if((strstr((temp->text) ," that ")||strstr((temp->text) ," THAT ")))
               {
                 count++;
	       }
             if((strstr((temp->text) ," the ")||strstr((temp->text) ," THE ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," to ")||strstr((temp->text) ," TO ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," was ")||strstr((temp->text) ," WAS ")))
               {
                 count++;
               }
             if((strstr((temp->text) ," were ")||strstr((temp->text) ," WERE ")))
               {
                 count++;
	       }
             if((strstr((temp->text) ," will ")||strstr((temp->text) ," WILL ")))
               {
                 count++;
	       }
             if((strstr((temp->text) ," with ")||strstr((temp->text) ," WITH ")))
               {
                 count++;
               }
             temp = temp->next;
           }
        int y =0;
        y = length(&tweetList);
        printf("Across %d tweets, %d stop words were found \n",y,count);
      }
}
