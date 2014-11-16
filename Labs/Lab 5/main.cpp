#include <iostream>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <fstream>
using namespace std;

int main(int argc, char **argv)
{ 
  //Question 1
  
  /*Create a Map to contain the book names*/
  std::map<string,int> mymap;
  std::map<string, int>::iterator it;
  
  /*Define Variables*/
  int freq;
  string bookname;
  string word;
  char *filename;

  
  /*Count the number of occurences of each word in a collection of books in text files*/
  //std::vector<int> book;
  std::vector<string> book;
  cout<<"How many books are you looking for?"<<endl;
  cin>>freq;

  for(int i=0;i<freq;i++)
  {
    cout<<"What book are you looking for?"<<endl;
    cin>>bookname;
    book.push_back (bookname);
  }
  //for(int j=0;j<freq; j++)
  for(int j=0; j < book.size(); j++)
  {
    
    ifstream input(book.at(j).c_str());

    while(input>>word)
    {
      int k = 0;
      while (k<word.length())
      {
        /*Parse through word and delete punctuation*/
        if(ispunct(word[k])) 
        {
          word.erase(k,1);
        }
        
        /*Change the word to lowercase*/
        else if(isalpha(word[k]))
        {
          word[k]=tolower(word[k]);
          k++;
        }
        
        /*Make sure that the counter doesn't move on until the iterator passes*/
        else
        {
          k++;
        } 
        
        mymap[word]++;
      }
    }
    input.close();
  }

  //Question 2
  
  /*Define Variables*/
  string wordcomp;
  int option=0;
  int minFrq=0;

  /*Provide a user input of two options for selection.*/
  cout<<"Choose an option: Press 1 or 2"<<endl;
  cin>>option;

  /*Chose a correct option*/
  while(option==1||option==2)
  {
    if(option==1)
    {
      cout<<"What word are you looking for?"<<endl;
      cin>>wordcomp;
      option=0;
      
      if(mymap.count(wordcomp)>0)
	  {
        it = mymap.find(wordcomp);
        cout<<it->first<<endl;
	  }
    }

	else if(option==2)
	{
	  cout<<"What word are you looking for?"<<endl;
      cin>>wordcomp;

	  cout<<"What is the frequency of the words that you want to find?"<<endl;
	  cin>>minFrq;

	  option=0;

	  if(mymap.count(wordcomp)>0)
	  {
		/*Check through the list of words to look through the frequency values and output the names of those with frequency greater then minFreq*/
        it = mymap.find(wordcomp);
        if(it->second>minFreq)
		  cout<<it->first<<endl;
	  }
	}

    /*else if(option==2)
    {
      option=0;
      while(true)
      {
        cout<<"What word are you looking for? Use blank line to end the list"<<endl;
        cin>>wordcomp;
        
        //Make sure that a word is entered
        if(wordcomp.length()==0)
          break;
        
        //Insert the word into the list
        else
        {
          mymap.insert(wordcomp);
        }      
      }
      
      cout<<"What is the minimum frequency for all words "<<endl;
      cin>>minFrq;
      
      for(it=mymap.begin(); it != mymap.end(); it++)
      {
        if(mymap.count(*it)>minFrq)
          cout<<*it<<endl;   
      } 
    }
	*/
  }

  //Question 3
  string newword;

  /*Cross reference a dictionary file and find the number of non-existent words in the book and output what they are*/
  
  /*Create a dictionary file*/
  std::set<string> dictionary;
  map<string, int>::iterator ite=mymap.begin();

  /*Open in the dictionary file*/ 
  ifstream input2("dictionary.txt");
  
  /*Load in the dictionary to the set*/
  while(input2>>newword)
  {
    dictionary.insert(newword);
  }
  
  /*Begin iterating through the maps and comparing all of the values in the set*/
  int countnum = 0;

  //mymap.begin - beginnging of the map
  //mymap.end - end of the map
  for(ite=mymap.begin(); ite != mymap.end(); ite++)
  {
    if(dictionary.count(ite->first)<=0) 
      countnum ++;//countnum will record the frequency of each word
  } 
  
  /*Allow for the map to send out the values and the corresponding frequencies*/
  for(ite=mymap.begin();ite != mymap.end(); ite++)
  {
    cout<<"Word "<<ite->first<<"Frequency: "<<countnum<<endl;
  }
}