#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <stdlib.h>
# include <fstream>
using namespace std;

string break_sentence_questions(string User_input);
string break_sentence_periods(string User_input);
void convert (string& s);
string pronoun_check (vector <string>& Sentence);

int index;
string User_input;
int wipe = 0;
string process;
string pronoun, question, to_be_verb;
string space = " ";



int main() {
system ("clear");

vector <string> save_words; 
    
      do{    
          
          if (wipe != 0)
           {
              system ("clear");
            }
                  
          cout<<"Type anything which ends with a period (eg: I am a boy\".\") \n=> ";
          getline(cin, User_input);
          convert(User_input);
      
            ++ wipe; 
           
         } while ((User_input[User_input.length()-1] != '.') && (User_input[User_input.length()-1] != '?') && (User_input[User_input.length()-1] != '!'));
       
      if (User_input[User_input.length()-1] == '?')
         {
              for (index = 0; index < User_input.length(); index++)
               { 
                  if  (User_input[index] != '?')
                   {
                     process += User_input [index];
                   }
                }
          }
                
         
          else 
          {
             for (index = 0; index < User_input.length(); index++)
               { 
                 if ((User_input[index] != '.') && (User_input[index] != '!'))
                  {
                    process += User_input [index];
                  }
               }
           }                                                 
//________________________________________________//                     
   ofstream send;
   send.open ("try_robot.txt"); 
  
  send << process;
  
  send.close();
//_____________________________________________//

//_____________________________________________    
  ifstream get;

   string disply_users_input;
   
  get.open ("try_robot.txt"); 
//___________________________________________//

vector <string> respond;
    
     while ( get >> disply_users_input)
          { 
              string show = disply_users_input;
              respond.push_back(show);                                                         
          }
 
   //cout << respond.size() <<endl;         
   
   for (int index = 0; index < respond.size(); index++)  
    cout << " " << respond.at(index);           
    cout << endl << endl << endl; 
      
 get.close();         
//_________________________________________//
string accept;

 accept = pronoun_check (respond);

cout << accept << endl << endl;  
              
return 0;
}
//_____________________________________________________________________________________________
void convert (string& s)
{ 
  for (int i = 0; i <s.length(); i++)
  {
      s[i] = toupper (s[i]);
  }
} 

//_____________________________________________________________________________________________
string pronoun_check (vector <string>& Sentence)
{
      string PRONOUN [7] = { "I", "YOU", "WE", "HIM", "HER", "THEY", "IT"};  // pronoun strings
      string QUESTION [4] = {"HOW", "WHAT", "WHERE", "WHEN"};               // question
      string TO_BE_VERB [3] = {"WERE", "ARE", "IS"};                       // second person - were, 2nd person - are, third person - is,
      //int NOT, NT;                            // negative
      string POSSESSIVE_ADJ [7] = {"MY", "HIS", "HER", "YOUR", "OUR","THEIR", "IT"};    // 
      string toy;
//________________________________________________________________________________________________________________      
   for (int index = 0; index < Sentence.size(); index++)  
      {
         for ( int match = 0; match < 7; match ++)
           {
              if ( Sentence [index] == PRONOUN [match])
              {
                pronoun += PRONOUN [match] + space;
              }
            }  
     }  
//_______________________________________________________________________________________________________________
   for (int index = 0; index < Sentence.size(); index++)  
      {
         for ( int match = 0; match < 4; match ++)
           {
              if ( Sentence [index] == QUESTION [match])
              {
                question += QUESTION [match] + space;
              }
            }  
     }
//_______________________________________________________________________________________________________________
   for (int index = 0; index < Sentence.size(); index++)  
      {
         for ( int match = 0; match < 3; match ++)
           {
              if ( Sentence [index] == TO_BE_VERB [match])
              {
                to_be_verb += TO_BE_VERB [match] + space;
              }
            }  
     } 
 
    return  to_be_verb, question,pronoun;      
}
//_____________________________________________________________________________________________
