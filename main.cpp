#include <iostream>
#include "Queue.h"
#include <cstring>

using namespace std;

char** WordsSort(char* words[4],int wordsAmount)
{
    //One queue for each letter + one for an empty symbol
    Queue<char*> parts[27];
    for(int i = 0; i<27;i++)
    {
        parts[i] = Queue<char*>();
    }
    int maxWordLength = strlen(words[0]);
    for(int i = 1;i<wordsAmount;i++)
    {
        int tempLen = strlen(words[i]);
        if(tempLen>maxWordLength)
        {
            maxWordLength = tempLen;
        }
    }
    for(int i = maxWordLength-1;i>=0;i--)
    {
        for(int j = 0;j<wordsAmount;j++)
        {
            if(i>=strlen(words[j]))
            {
                parts[26].Push(words[j]);
            } else
            {
                int partNumber = tolower(words[j][i])-97;
                parts[partNumber].Push(words[j]);
            }
        }
        int wordsWrittenAmount = 0;
        for(int j = 0;j<27;j++)
        {
            int partLength = parts[j].GetLenght();
            for(int k = 0;k<partLength;k++)
            {
                words[wordsWrittenAmount] = parts[j].Pop();
                wordsWrittenAmount++;
            }
        }
    }
    return words;
}

int main()
{
    char* array[4];
    array[0] = new char;
    array[0] = "acdd";

    array[1] = new char;
    array[1] = "acc";

    array[2] = new char;
    array[2] = "bcc";

    array[3] = new char;
    array[3] = "bacd";

    WordsSort(array,4);
    cout<<"End of work"<<endl;
    return 0;
}
