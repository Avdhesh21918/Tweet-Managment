******************************************************************************************************************************
**Student Name:** Avdhesh Bahl                                          
**Due Date(Last Date of revision ):** 21 Mar 2021                      
**username : abahl**
**Email Id:abahl@uoguelph.ca **
** Course Name(code): CIS 2500**
**ASSIGNMENT NAME(TOPIC) :** Dynamic Data Structures (Linked list)             

**Compiling the program**
The program should be compiled using the following flags: -std=c99 -Wall

- compiling:
gcc -Wall -std=c99 helper.o mainA3.o creatNewTweet.o addNodeToList.o displayTweets.o searchTweetsByKeyword.o countStopWords.o deleteTweet.o saveTweetsToFile.o loadTweetsFromFile.o -o CISA3

AND
Each of the output files can be compilled in the following way :
helper.o:helper.c headerA3.h header1A3.h
	gcc -Wall -std=c99 -c helper.c
mainA3.o:mainA3.c headerA3.h header1A3.h
	gcc -Wall -std=c99 -c mainA3.c
createNewTweet.o:createNewTweet.c headerA3.h header1A3.h
	gcc -Wall -std=c99 -c createNewTweet.c
addNodeToList.o:addNodeToList.c headerA3.h header1A3.h
	gcc -Wall -std=c99 -c addNodeToList.c
displayTweets.o:displayTweets.c headerA3.h header1A3.h
	gcc -Wall -std=c99 -c displayTweets.c
searchTweetsByKeyword.o:searchTweetsByKeyword.c headerA3.h header1A3.h
	gcc -Wall -std=c99 -c searchTweetsByKeyword.c
countStopWords.o:countStopWords.c headerA3.h header1A3.h
	gcc -Wall -std=c99 -c countStopWords.c
deleteTweet.o:deleteTweet.c headerA3.h header1A3.h
	gcc -Wall -std=c99 -c deleteTweet.c
saveTweetsToFile.o:saveTweetsToFile.c headerA3.h header1A3.h
	gcc -Wall -std=c99 -c saveTweetsToFile.c
loadTweetsFromFile.o:loadTweetsFromFile.c headerA3.h header1A3.h
	gcc -Wall -std=c99 -c loadTweetsFromFile.c
All of the output files are dependent on two header files (headerA3.h header1A3.h).

- Running the Program
Running: ./CISA3
**Completed Components:**
I have completed 
- creating new tweet - creates a new node and userid.
- Displaying tweets-displays the linked list to screen.
- searching tweets-searches with a keyword that user provides.
- counting stop words- counts the number of stop words.
- deleting nth tweets- deletes the tweet input given by user.
- saving tweets to file- saves tweets to file given by user. 
- Loading tweets from file- takes input and adds to linked list. 
 and I have also made a main for calling these functions and running them as mentioned in the pdf.

**Limitations :**
Loading tweets from a file also has a limitation , it loads evertything from a file and displays it to the user however,it does not add the itmes loaded to the linked list and for generating the userid it counts the new line character also.
**Future Improvements:**
If I get a chance to improve this assignment then it will be making the Load tweets from a file function (also making the userid not count the new line character )work properly (perfectly) with out any limitations. 
******************************************************************************************************************************

