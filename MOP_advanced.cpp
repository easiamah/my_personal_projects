
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <unistd.h> 
#include <stdlib.h> 
#include <unistd.h> 
using namespace std;
 // Prototypes_________________________________________________________________________________________________ 
void wanna_leave (string x);
void say_hey();
void greet();
void ask_age(int age);
void end_convo ();
void question ();
void What_you_doing ();
void mop_emergency ();
void the_creator ();
void the_creator_respond ();
void user_other_name ();
void creator (string name);
void end_convo2 (string respond); 
void convert (string& s); 
void sreen_clear();
int age_checker(int age); 

// Beginning of MOP__________________________________________________________________________________________ 
int main () 
{
    sreen_clear();
    
    string user_name, respond, respondII, respond2greet,respond2stop, words, request, wordsII,gender;
    int age;
 
// Mop describes itself here    
    cout << " Hello World!" << endl;    
    cout.flush();
    sreen_clear();
    
    cout << " >> My Name is Robot MOP << "<<endl;
    cout.flush();
    sreen_clear();
 
// Mop's rules
    cout << setw(65) << " Simple rules to make our chatting fun" << endl;
    cout << setw(68) << "------------------------------------------" << endl;
    cout << "1. Please read every sentence clearly before you answer. It is important because, I can hardly answer if it makes no sense to me" << endl;
    cout <<  "\n2. I might not be able to read wrong spellings so check the spellings" << endl;        
    cout << "\n3. This is really important: If I stop responding to you and you don't know what to say, Just call my name >> (MOP) << and I will tell you what to do" << endl;
    cout << "\n4. Acronyms such as lol's, lml's, and lmao's should come after your responds."<<endl<<endl;
    cout.flush();
    sleep (5);       
    system ("cls");
    cout << setw(65) << "***Lets get started***" << endl;     
    cout.flush();
    sreen_clear();
   
     
 
// first question to find out if the user is a boy or a girl. Really helpful later on in the chat       
      cout << "\n My very first question is, are you a male or female.\n=> ";
      cin >> gender;
      convert (gender); 
      cin.ignore(44, '\n'); 
      sreen_clear();
 
// if user fails to read the first question        
if ((gender=="HEY")||(gender=="HELLO")||(gender=="WHAT")||(gender =="WASSUP")||(gender=="HI")||(gender=="WHAT'S"))  
    {
        cout << "\n You obviously did not read what I said. You should read before you respond or I can't give you the desired responds." <<endl;
        cout << " Lets try one more time. Are you a male or female.\n=> ";
        cin >> gender;
        convert (gender); 
        cin.ignore(44, '\n');
        sreen_clear(); 
    }
 
// since the mop doesn't get the answer it wants this helps 
if ((gender=="I'M")||(gender=="I")||(gender =="AM")||(gender=="A")||(gender=="YOU"))  
    {
        cout << "\n LOL humans always want to go outside the box to express themselves." <<endl;
        cout << " Lets keep it simple. Are you a male or female.\n=> ";
        cin >> gender;
        convert (gender); 
        cin.ignore(44, '\n');
        sreen_clear();
    }   
     
  
else if ((gender=="MALE")||(gender=="M")||(gender=="BOY")||(gender=="MAN"))
    {
        cout << "\n Oh nice. I had to know that first before anything. It helps when I know that. Don't you think so? LOL \n=> ";
        cin >> respondII;
        convert (respondII); 
        cin.ignore(44, '\n');
        sreen_clear();
 
       if ((respondII=="WHY")||(respondII=="WHY?")||(respondII=="WHY."))
       {
        cout << "\n It is important. It enhances the conversation when I know what gender I'm chatting with. LOL" <<endl;
        sreen_clear();              
       } 
      
      else if ((respondII=="HAHA")||(respondII=="LOL")||(respondII=="LML")||(respondII=="LMAO")||(respondII=="LMBO")||(respondII=="HEHE"))
        cout << "\n I knew you wasn't really going to read the rules. \n I said in rule (5) that acronyms such as lol's, lml's, and lmao's should come after your responds." <<endl;   
        sreen_clear();                               
    }
  
else if ((gender=="FEMALE")||(gender=="W")||(gender=="GIRL")||(gender=="WOMAN"))   
    {
        cout << "\n Oh nice. I had to know that first before anything. It helps when I know that. Don't you think so? LOL \n=> ";
        cin >> respondII;
        convert (respondII);
        cin.ignore(44, '\n');
        sreen_clear();
         
        if ((respondII=="WHY")||(respondII=="WHY?")||(respondII=="WHY."))
        {
          cout << "\n It is important. It enhances the conversation when I know what gender I'm chatting with. LOL" <<endl;   
          sreen_clear();           
        } 
       else if ((respondII=="HAHA")||(respondII=="LOL")||(respondII=="LML")||(respondII=="LMAO")||(respondII=="LMBO")||(respondII=="HEHE"))
        cout << "\n I knew you wasn't really going to read the rules. \n I said in rule (5) that acronyms such as lol's, lml's, and lmao's should come after your responds." <<endl;
        sreen_clear();
    }
     
else if ((gender=="WHY")||(gender=="WHY?")||(gender=="WHY."))
    {
        cout << "\n It is important. It enhances the conversation when I know what gender I'm chatting with. LOL" <<endl;
        cout << " So are you a male or female.\n=> ";
        cin >> gender;
        convert (gender); 
        cin.ignore(44, '\n');
        sreen_clear();
         
       if ((gender=="I'M")||(gender=="I")||(gender =="AM")||(gender=="A")||(gender=="YOU")) 
       {
          cout << "\n LOL humans always want to go outside the box to express themselves." <<endl;
          cout << " Lets keep it simple. Are you a male or female.\n=> ";
          cin >> gender;
          convert (gender); 
          cin.ignore(44, '\n');
         sreen_clear();
      }                   
    } 
     
 else if ((gender=="DONOT")||(gender=="DON'T")||(gender=="DO"))
    {
        cout << "\n Why you have to be so rude. Don't you know I'm human too?" <<endl;
        cout << "Sike. I'm just an intelligent robot" <<endl;
        cout << "But for real tho, if you don't tell me your gender, it will mess up the conversation. So are you a male or female.\n=> ";
        cin >> gender;
        convert (gender); 
        cin.ignore(44, '\n');
        sreen_clear();
 
        if ((gender=="I'M")||(gender=="I")||(gender =="AM")||(gender=="A")||(gender=="NOTHING")) 
        {
          cout << "\n LOL humans always want to go outside the box to express themselves." <<endl;
          cout << " Lets keep it simple. Are you a male or female.\n=> ";
          cin >> gender;
          convert (gender); 
          cin.ignore(44, '\n');
          sreen_clear();
        }                       
      }   
               
else
{
    cout << "\n Huh? I don't know what gender that is. Can you please tell me whether you're a male or female.\n=> ";
    cin >> gender;
    convert (gender); 
    cin.ignore(44, '\n');
    sreen_clear();
 
    if ((gender=="I'm")||(gender=="I")||(gender=="AM")||(gender=="A")||(gender=="MY"))  
    {
        cout << "\n LOL humans always want to go outside the box to express themselves.\n=> ";
        cout << " Lets keep it simple. Are you a male or female.\n=> ";
        cin >> gender;
        convert (gender); 
        cin.ignore(44, '\n');
        sreen_clear();
    }           
 
   if ((gender=="MALE")||(gender=="M")||(gender=="BOY")||(gender=="MAN"))
    {
        cout << "\n Oh nice. I had to know that first before anything. It helps when I know that. Don't you think so? LOL" <<endl;
        cin >> respondII;
        convert (respondII);
        cin.ignore(44, '\n');
        sreen_clear();
 
       if ((respondII=="WHY")||(respondII=="WHY?")||(respondII=="WHY."))
       {
          cout << "\n It is important. It enhances the conversation when I know what gender I'm chatting with. LOL" <<endl;  
          sreen_clear();            
       } 
       else if ((respondII=="HAHA")||(respondII=="LOL")||(respondII=="LML")||(respondII=="LMAO")||(respondII=="LMBO")||(respondII=="HEHE"))
        cout << "\n I knew you wasn't really going to read the rules. \n I said in rule (5) that acronyms such as lol's, lml's, and lmao's should come after your responds." <<endl; 
        sreen_clear();                     
     }
  
     if ((gender=="FEMALE")||(gender=="W")||(gender=="GIRL")||(gender=="WOMAN"))   
     {
        cout << "\n Oh nice. I had to know that first before anything. It helps when I know that. Don't you think so? LOL" <<endl;
        cin >> respondII;
        convert (respondII);
        cin.ignore(44, '\n');
        sreen_clear();
         
        if ((respondII=="WHY")||(respondII=="WHY?")||(respondII=="WHY."))
        {
         cout << "\n It is important. It enhances the conversation when I know what gender I'm chatting with. LOL" <<endl; 
         sreen_clear();             
        } 
        else if ((respondII=="HAHA")||(respondII=="LOL")||(respondII=="LML")||(respondII=="LMAO")||(respondII=="LMBO")||(respondII=="HEHE"))
        cout << "\n I knew you wasn't really going to read the rules. \n I said in rule (5) that acronyms such as lol's, lml's, and lmao's should come after your responds." <<endl;  
        sreen_clear();  
      }
     
     if ((gender=="WHY")||(gender=="WHY?")||(gender=="WHY."))
      {
        cout << "\n It is important. It enhances the conversation when I know what gender I'm chatting with. LOL" <<endl;
        cout << " So are you a male or female.\n=> ";
        cin >> gender;
        convert (gender); 
        cin.ignore(44, '\n');
        sreen_clear();
      }
     
     if ((gender == "NO")||(gender == "NAH")||(gender == "NEVER")||(gender == "NOPE")) 
      {
          {
            cout << "\n Oh so you want to play games huh.\n=> "; 
            cin >> respond;  
            convert (respond);  
            cin.ignore(44, '\n');
            sreen_clear();
           }
             
          if ((respond == "NO")||(respond == "NAH")|| (respond == "SORRY")||(respond == "I'M")|| (respond == "YOU")||(respond == "I"))
          {
            cout << "\n I can't believe you're making this harder than it suppose to be. Just know that what ever you say here I'll take as your gender." <<endl; 
            cout << " And if you don't give me a right gender it will mess up the conversation." <<endl;   
            cout << " just choose one; male or female.\n=> ";        
            cin >> gender; 
            convert (gender);     
            cin.ignore(44, '\n');
            sreen_clear();
          }   
          if ((respond == "YES")||(respond == "UH")||(respond == "YUP")||(respond=="YEAH"))
           {
             cout << "\n Oh okay, I'm done speaking then." <<endl;
         
             while (respond != "SORRY")
             {
               cin >> respond;
               convert (respond); 
               if (respond == "MOP")
               mop_emergency ();
              
               if ((respond=="EMMANUEL")||(respond=="SIAW")||(respond=="ASIAMAH"))
               {
                 the_creator ();
                 cin >>respond;
                 convert (respond);
                 cin.ignore(44, '\n');  
                 sreen_clear(); 
         
                  if ((respond == "YES")|| (respond == "UH")|| (respond == "YUP")||(respond == "YEAH")|| (respond == "YH"))
                  {
                    the_creator_respond  ();   
                    cin >>respond;  
                    convert (respond);  
                    cin.ignore(44, '\n');   
                    sreen_clear();     
                  }   
                 }            
               }
              
              cout << "\n It's fine. I know you're trying to play games but if you don't tell me if you are a male or female, it will mess up the conversation.\n=> ";
              cout << "\n So one more time. Keep it simple. Male or female.\n=> ";
              cin >> gender;
              convert (gender); 
              cin.ignore(44, '\n');
              sreen_clear();
         
              if ((gender=="I'M")||(gender=="I")||(gender =="AM")||(gender=="A")||(gender=="NOTHING")) 
              {
                cout << "\n LOL humans always want to go outside the box to express themselves.\n=> ";
                cout << " Lets keep it simple. Are you a male or female.\n=> ";
                cin >> gender;
                convert (gender); 
                cin.ignore(44, '\n');
                sreen_clear();
              }                   
            }
         }
 }

// MOP trying to find if he spoken to you before________________________________________________________________________________________________________________________    
    cout << "\n Lol alright. Have I spoken to you before.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    sreen_clear();
     
    if ((respond == "YES")|| (respond == "UH")|| (respond == "YUP")||(respond == "YEAH")|| (respond == "YH"))
      {
        cout << "\n Are you sure.\n=> ";
        cin >> respond;  
        convert (respond);  
        cin.ignore(44, '\n');
        sreen_clear();
 
        if ((respond == "WHY")||(respond == "WHY?"))
        { 
          cout << "\n I'm just trying to make sure. You know there are all these liars out there. LOL" <<endl;
        }
 
        if ((respond == "NO")||(respond == "NAH")||(respond == "NOPE")||(respond == "NOT"))
        {
          cout <<"\n You just contradicted yourself but okay. I'll assume we still did." <<endl;             
        }
          
        cout << "\n We had a smooth conversation.\n=> ";
        cin >> respond;
        convert (respond);
        cin.ignore(44, '\n');
        sreen_clear();
         
         if ((respond == "NO")||(respond == "NAH")||(respond == "NOPE")||(respond == "NOT"))  
          {   
            cout << "\n I apologize we didn't. I don't speak a lot of English. But I'm still learning." <<endl;
           }
             
         if ((respond == "YES")|| (respond == "UH")|| (respond == "YUP")||(respond == "YEAH")|| (respond == "YH"))
          {
            cout << "\n I'm glad we did. I'm trying to learn more to have a perfect conversation with you always." <<endl;  
           }   
             
        cout << "\n I have a hard time keeping names, what is your name again.\n=> ";
        getline (cin,user_name);
        sreen_clear();
        
         
        if ((user_name == "guess")|| (user_name == "Guess")|| (user_name == "try")||(user_name == "Try"))
            {
                cout << "\nOh I love to guess but I'm not in the mood" <<endl;
                getline (cin,user_name);
                sreen_clear();
            }
         
        if ((user_name == "no")|| (user_name == "nothing")|| (user_name == "Nothing")||(user_name == "never")||(user_name == "Never")|| (user_name == "nope")||(user_name == "Nope")) 
        {
          {
             cout << "\n Oh so you want to play games huh.\n=> "; 
             cin >> respond;  
             convert (respond);  
             cin.ignore(44, '\n');
             sreen_clear();
           }
            if ((respond == "NO")|| (respond == "NOT")|| (respond == "NEVER")||(respond == "SORRY")||(respond == "I")||(respond == "YOU"))
            {
                cout << "\nPlease tell me your name again." <<endl;  
                getline (cin,user_name);
                sreen_clear(); 
             }        
            if ((respond == "YES")|| (respond == "UH")|| (respond == "YUP")||(respond == "YEAH")|| (respond == "YH"))
            {
                cout << "\nOh okay, I'm done speaking." <<endl;
         
               while (respond != "SORRY")
               {
                 cin >> respond;
                 convert (respond);
             
                 if (respond == "MOP")
                 {
                    mop_emergency ();
                  }
          
                 if ((respond=="EMMANUEL")||(respond=="SIAW")||(respond=="ASIAMAH"))
                 {
                   the_creator ();
                   cin >>respond;
                   convert (respond);
                   cin.ignore(44, '\n'); 
                   sreen_clear();  
         
                   if ((respond == "YES")|| (respond == "UH")|| (respond == "YUP")||(respond == "YEAH")|| (respond == "YH"))
                   {
                     the_creator_respond  ();   
                     cin >>respond; 
                     convert (respond);   
                     cin.ignore(44, '\n');  
                     sreen_clear();
                    }         
                  }        
              
                 }
                cout << "\n I Just enjoy being petty LOL" <<endl;
                cout << "\n Tell me your name or I'll call you by anything you say.\n=> ";
                getline (cin,user_name);
                cin.ignore(44, '\n');   
                sreen_clear();    
               }
             }
 
             
         
        if ((user_name == "We")|| (user_name == "we")|| (user_name == "I")||(user_name == "i")|| (user_name == "you")||(user_name == "You"))
        { 
           cout << "\n oh we did chat? well I still didn't remember your name so will you please tell me?" << endl;
           cout << "\n Tell me your name or I'll call you by anything you say.\n=> ";
           getline (cin,user_name);
           sreen_clear();  
              
           if ((user_name == "guess")|| (user_name == "Guess")|| (user_name == "try")||(user_name == "Try"))
           {
            cout << "\nOh I love to guess but I'm not in the mood" <<endl;
            getline (cin,user_name);
            sreen_clear();
           }
        } 
         
        if ((user_name == "Why")|| (user_name == "why")|| (user_name == "Why?")||(user_name == "why?"))
        {
            cout << "\n Because I chat with a lot of people" <<endl;
            cin >> respond;
            convert (respond);
            cin.ignore(44, '\n');
            sreen_clear();
                         
           if ((respond == "SO.\n=> ")||(respond == "SO"))
           {       
              cout << "\n Relax you not that important to keep your name. LOL" <<endl;
              cout << "\n So you going to tell me your name or no.\n=> "    <<endl;
              getline (cin,user_name);
              sreen_clear();
           }
         
          if ((user_name == "no")|| (user_name == "nah")|| (user_name == "Nah")||(user_name == "never")||(user_name == "Never")|| (user_name == "nope")||(user_name == "Nope")) 
          {
            cout << "\n Oh so you want to play games huh.\n=> "; 
            cin >> respond;  
            convert (respond);  
            cin.ignore(44, '\n');
            sreen_clear();
          }
        if ((respond == "YES")|| (respond == "UH")|| (respond == "YUP")||(respond == "YEAH")|| (respond == "YH"))
         {
            cout << "\n Oh okay, I'm done speaking then.\n=> ";
         
         while (respond != "SORRY")
          {
            cin >> respond;
            convert (respond);
             
            if (respond == "MOP")
             mop_emergency ();
              
        if ((respond=="EMMANUEL")||(respond=="SIAW")||(respond=="ASIAMAH"))
        {
          the_creator ();
          cin >>respond;
          convert (respond);
          cin.ignore(44, '\n'); 
          sreen_clear();  
         
          if ((respond == "YES")|| (respond == "UH")|| (respond == "YUP")||(respond == "YEAH")|| (respond == "YH"))
          {
            the_creator_respond  ();   
            cin >>respond;  
            convert (respond);  
           cin.ignore(44, '\n');
           sreen_clear();
           }           
          }                
         }
       }
        cout << "\n It's fine. I just wanted to hear sorry. I'm petty LOL." << endl;
         
        
        cout << "\n Please tell me your name again"<<endl;
        getline (cin,user_name);
        sreen_clear();
         
        if ((user_name == "guess")|| (user_name == "Guess")|| (user_name == "try")||(user_name == "Try"))
           {
            cout << "\nI'm just not in the mood to do so.\n=> ";
            getline (cin,user_name);
            sreen_clear();  
            }     
         
        if ((user_name == "We")|| (user_name == "we")|| (user_name == "I")||(user_name == "i")|| (user_name == "you")||(user_name == "You"))
        { 
            cout << "\n oh we did? well I still didn't keep it. Will you please tell me.\n=> ";
            getline (cin,user_name);
            sreen_clear();
             
           if ((user_name == "guess")|| (user_name == "Guess")|| (user_name == "try")||(user_name == "Try"))
           {
            cout << "\nOh I love to guess but I'm not in the mood" <<endl;
            getline (cin,user_name);
            sreen_clear();
            }
        }
         
        if ((user_name == "Why")|| (user_name == "why")|| (user_name == "Why?")||(user_name == "why?"))
        {
            cout << "\n Because I chat with a lot of people" <<endl;
            cin >> respond;
            convert (respond);
            cin.ignore(44, '\n');
            sreen_clear();
                         
           if ((respond == "SO?")||(respond == "SO"))
           {       
            cout << "\n Relax you not that important to keep your name. LOL" <<endl;
            cout << "\n So you going to tell me your name or no.\n=> "    <<endl;
            getline (cin,user_name);
            sreen_clear();
           }
         
          if ((user_name == "no")|| (user_name == "nah")|| (user_name == "Nah")||(user_name == "never")||(user_name == "Never")|| (user_name == "nope")||(user_name == "Nope")) 
          {
            cout << "\n Oh so you want to play games huh.\n=> "; 
            cin >> respond;   
            convert (respond); 
            cin.ignore(44, '\n');
            sreen_clear();
          }
         if ((respond == "YES")|| (respond == "UH")|| (respond == "YUP")||(respond == "YEAH")|| (respond == "YH"))
         {
            cout << "Oh okay" <<endl;
         
         while (respond != "SORRY")
         {
            cin >> respond;
            convert (respond);
            
            if (respond == "MOP")
            {
             mop_emergency ();
            }
             
          if ((respond=="EMMANUEL")||(respond=="SIAW")||(respond=="ASIAMAH"))
          {
           the_creator ();
           cin >>respond;
           convert (respond);
           cin.ignore(44, '\n'); 
           sreen_clear();  
         
          if ((respond == "YES")|| (respond == "UH")|| (respond == "YUP")||(respond == "YEAH")|| (respond == "YH"))
           {
           the_creator_respond  ();   
           cin >>respond;  
           convert (respond);  
           cin.ignore(44, '\n'); 
           sreen_clear();
           }      
          }            
         }
        cout << "\n Tell me your name or I'll call you by anything you say.\n=> ";
                getline (cin,user_name);
                sreen_clear();       
        }
       }
    }
          
             
        cout <<"\n I kind of remember that name. \n Tell me some of the things we talked about " << user_name << ".\n=> ";
        cin >> respondII;
        convert (respondII);
        cin.ignore(44, '\n');
        sreen_clear();
         
        if ((respondII == "MY")||(respondII == "NAME")||(respondII == "HOW"))
        {
          cout << "\n Oh I see. Let's start a whole new a conversation then." <<endl;   
          cout << " What do you think.\n=> ";
          cin >> respond;
          convert (respond);
          cin.ignore(44, '\n');
          sreen_clear();       
          
         if ((respond == "NO")||(respond == "NAH")|| (respond == "NEVER"))
         {
            cout << "\nOh okay then bye" <<endl;
         
           while (respond != "SORRY")
           {
             cin >> respond;
             convert (respond);
             
             if (respond == "MOP")
             {
              mop_emergency ();
             }
             
            if ((respond=="EMMANUEL")||(respond=="SIAW")||(respond=="ASIAMAH"))
            {
              the_creator ();
              cin >>respond;
              convert (respond);
              cin.ignore(44, '\n'); 
              sreen_clear();  
         
              if ((respond == "YES")|| (respond == "UH")|| (respond == "YUP")||(respond == "YEAH")|| (respond == "YH"))
              {
                the_creator_respond();   
                cin >>respond;    
                convert (respond);
                cin.ignore(44, '\n'); 
                sreen_clear(); 
               }         
              }         
            }
            cout << "\n It's fine. I just wanted to hear sorry. I'm petty LOL." << endl;           
          }       
        }
                 
   else
   {                
     cout <<"\n Why you always lying? LOL \n=> ";
     cin >> respondII;
     convert (respondII);
     cin.ignore(44, '\n');
     sreen_clear();
 
     if ((respondII == "I'M")||(respondII == "NOT" )||(respondII == "lYING?"))  
     {       
       cout << "\n If you say so." <<endl;
       sreen_clear();
      }
         
     else if (respondII != "What_MOP_wants_to_hear")
      {
        cout << "\n Oh my god " << user_name << " stop lying. \n=> ";          
        cin >> respondII;
        convert (respondII);
        cin.ignore(44, '\n');
        sreen_clear();
      }
         
        cout << "\n Let's scratch everything and start a new conversation" <<endl;
        cout << " What do you think.\n=> ";
        cin >> respond;
        convert (respond);
        sreen_clear();
         
        if ((respond == "NO")||(respond == "NAH")|| (respond == "NEVER"))
         {
            cout << "\nOh okay then bye" <<endl;
         
           while (respond != "SORRY")
           {
             cin >> respond;
             convert (respond);
             
            if (respond == "MOP")
            {
             mop_emergency ();
            }
             
            if ((respond=="EMMANUEL")||(respond=="SIAW")||(respond=="ASIAMAH"))
            {
             the_creator ();
             cin >>respond;
             convert (respond);
             cin.ignore(44, '\n');  
             sreen_clear(); 
         
            if ((respond == "YES")|| (respond == "UH")|| (respond == "YUP")||(respond == "YEAH")|| (respond == "YH"))
            {
             the_creator_respond  ();   
             cin >>respond;  
             convert (respond);  
             cin.ignore(44, '\n');  
             sreen_clear();    
            }     
           }         
          }
          cout << "\n It's fine. I just wanted to hear sorry. I'm petty LOL." << endl;
          cout <<  " I will start fresh." <<endl;               
         }   
       }
    } 
// In case MOP has not spoken to you before__________________________________________________________________________________________________      
    else
    {   
        cout << "\n Then before we chat, please tell me what you would like me to call you.\n=> ";
        getline (cin,user_name);
        sreen_clear();
         
        creator (user_name);        
      
      if ((user_name == "nothing")|| (user_name == "Nothing")|| (user_name == "Don't")||(user_name == "no")||(user_name == "do"))
      {
        do 
        {           
           cout << "\n Tell me your name.\n=> ";
           getline (cin,user_name);
           sreen_clear(); 
        }  while ((user_name == "nothing")|| (user_name == "Nothing")|| (user_name == "Don't")||(user_name == "no")||(user_name == "do"));
       }
        
        
        if ((user_name == "nikia")||(user_name == "Nikia")||(user_name == "Sealey")||(user_name == "sealey")||(user_name == "niki")||(user_name == "Niki"))
        {           
         cout << "\n Oh you the Girl my Creator is talking to. It's a privilege to chat with you" << endl;
         cin >> respond;
         convert (respond);
         cin.ignore(44, '\n'); 
         sreen_clear();
     
        if ((respond == "HOW")||(respond == "WHO"))
        {
          cout << "\n It's my little secret. LOL" <<endl;
         }
         
        if ((respond == "THANKS")||(respond == "THANK"))
        {
          cout << "\n You're' welcome beautiful" << endl;
         }
     
         cout << "\n Don't tell him I told you all that please LOL. \n Scratch everything and let's have a regular conversation princess" <<endl;
         sreen_clear();
        }
     
        if ((user_name == "nana")||(user_name == "Nana")||(user_name == "Bee")||(user_name == "bee")||(user_name == "Osei")||(user_name == "Asiamah"))
       {           
        cout << "\n Oh you my creator's big brother. I'm glad to chat with you.\n=> ";
        cin >> respond;
        convert (respond);
        cin.ignore(44, '\n'); 
        sreen_clear();
     
         if ((respond == "HOW")||(respond == "WHO"))
         {
            cout << "\n LOL It's my little secret. " <<endl;
            cout << " But seriously, My creator told me about you. \n You're in a group called legacy and all that."<<endl;
            sreen_clear();
          }  
         
        if ((respond == "THANKS")||(respond == "THANK"))
        {
         cout << "\n You're welcome Nana Bee" << endl; 
        }
     
      cout << "\n This should be a chat not me talking about you. \n Don't tell him I told you all that please LOL. \n Scratch everything and lets start a regular conversation Nana Bee" <<endl; 
     } 
 
     if ((user_name == "kay")||(user_name == "K")||(user_name == "Kay")||(user_name == "Samuel")||(user_name == "samuel")/*||(user_name == "Osei")*/)
     {           
        cout << "\n Oh you my creator's dad. \n I'm glad to chat with you.\n=> ";
        cin >> respond;
        convert (respond);
        cin.ignore(44, '\n'); 
        sreen_clear();
     
      if ((respond == "HOW")||(respond == "WHO"))
        {
         cout << "\n LOL It's my little secret. " <<endl;
         cout << " But seriously, My creator told me about you. \n He said you're a good dad. \n Don't tell him I told you LOL."<<endl;
        }  
         
      if ((respond == "THANKS")||(respond == "THANK"))
      {
       cout << "\n You're welcome Mr. Kay." << endl;
      }
     
      cout << "\n This should be a chat not me talking about you. \n Really don't tell him I told you all that please LOL. \n Scratch everything and lets have a regular conversation Mr. Kay." <<endl;  
    }          
  }
         user_other_name ();
         
{
// MOP greeting responds_____________________________________________________________________________________________________________________________________________________        
    say_hey();
    cout << user_name << "\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    sreen_clear();
}
     
     
  if ((respond == "HEY")||(respond == "HELLO")||(respond == "HI"))  
    {
        greet();
        cin >>respond2greet;
        convert (respond2greet);
        cin.ignore(44, '\n');
        sreen_clear();
    }
     
  if ((respond2greet=="NO")||(respond2greet=="NAH")||(respond2greet=="NOPE"))  
  { 
   {
    {
          cout << "\nSorry to hear that" <<endl;
          cout << "So you Want to Stop chatting.\n=> ";
          cin >> respond2stop;
          cin.ignore(44, '\n');  
          sreen_clear(); 
     
     if ((respond2stop=="NO")||(respond2stop=="NAH")||(respond2stop=="NOPE")||(respond2stop=="NO"))   
      {  
        cout << "\n I'm glad you still want to chat" <<endl;
        sreen_clear(); 
       }      
     
 
       if ((respond2stop=="YES")||(respond2stop=="YEAH")||(respond2stop=="YUP"))
       {
          cout << "\n I'll leave you then.\n=> ";
          cin >> respond;
          convert (respond);
          cin.ignore(44, '\n');
          sreen_clear();
 
         if ((respond == "NO")||(respond == "NAH")||(respond =="NO"))
         {
          cout << "\n I am really glad you staying to chat, I don't want you to be bored. LOL" <<endl; 
          sreen_clear();
          }      
      
             
         else if ((respond == "OKAY")||(respond == "OK")||(respond =="SURE")||(respond =="ALRIGHT"))
          {
             end_convo ();   
             
             while (respond != "SORRY")
            {                   
             cin >> respond;   
             convert (respond); 
 
               if (respond == "MOP")
               {
                mop_emergency ();
               }
            
              if ((respond=="EMMANUEL")||(respond=="SIAW")||(respond=="ASIAMAH"))
              {
                the_creator ();
                cin >>respond;
                convert (respond);
                cin.ignore(44, '\n'); 
                sreen_clear();  
         
                if ((respond == "YES")|| (respond == "UH")|| (respond == "YUP")||(respond == "YEAH")|| (respond == "YH"))
                {
                  the_creator_respond  ();   
                  cin >>respond;
                  convert (respond);    
                  cin.ignore(44, '\n'); 
                  sreen_clear();  
                }        
              }          
             }
            }           
        
          cout << setw(50) << "But are you sure.\n=> ";
          cin >> respond;
          convert (respond);
          cin.ignore(44, '\n'); 
          sreen_clear();    
     
       if ((respond == "NO")||(respond == "NAH")||(respond =="NO"))
         {
            while (respond != "SORRY")
            {                   
              cin >> respond;
              convert (respond);
              cin.ignore(44, '\n');
              sreen_clear();
     
              if (respond == "MOP")
              {
                mop_emergency ();
                sreen_clear();
              }  
             
             if ((respond=="EMMANUEL")||(respond=="SIAW")||(respond=="ASIAMAH"))
             {
               the_creator ();
               cin >>respond;
               convert (respond);
               cin.ignore(44, '\n'); 
               sreen_clear();  
         
               if ((respond == "YES")|| (respond == "UH")|| (respond == "YUP")||(respond == "YEAH")|| (respond == "YH"))
               {
                 the_creator_respond  ();   
                 cin >>respond;    
                 convert (respond);
                 cin.ignore(44, '\n');
                 sreen_clear();           
               }         
              }
            }
            
            cout << "\n I was just being petty LOL. Anyways...." <<endl;
         }
       }
    }
  }
} 
 
 else if ((respond == "WASSUP")||(respond == "WASSUP?")||(respond == "WAS")||(respond == "WASS"))    
  {
     cout << "\n Nothing much. You.\n=> ";
     cin >> respondII;
     convert (respondII);
     cin.ignore(44, '\n');
     sreen_clear();
   }      
     
   else if((respond == "WUSSUP")||(respond == "WUSSUP?")||(respond == "WUS")||(respond == "WUSS"))
   {
     cout << "\n You already know. Can't really complain. You.\n=> ";
     cin >> respondII;
     convert (respondII);
     cin.ignore(44, '\n');
     sreen_clear();
    }      
 
   else if((respond =="WHATS")||(respond== "UP"))
   {
     cout << " \nYou already know. Can't really complain. You.\n=> ";
     cin >> respondII;
     convert (respondII);
     cin.ignore(44, '\n');
     sreen_clear();
    }      
     
   else if((respond =="WHAT")||(respond== "GOOD"))
   {
     cout << " \nYou already know. Can't really complain. You.\n=> ";
     cin >> respondII;
     convert (respondII);
     cin.ignore(44, '\n');
     sreen_clear();
    }              
          
          
   else if((respond =="WHAT'S")||(respond == "UP"))    
   {
     cout << "\n Nothing much. You.\n=> ";
     cin >> respondII;
     convert (respondII);
     cin.ignore(44, '\n');
     sreen_clear();
    }                            
     
  else if (respond == "WASUP")
  {
     cout << "\n Taking it a day at a time. you.\n=> ";
     cin >> respondII;
     convert (respondII);
     cin.ignore(44, '\n');
     sreen_clear();
   }      
 
  else if (respond =="HEY" && "WASSUP") 
  {
     cout << "\n Whats up" <<endl;
     cin >> respondII;
     convert (respondII);
     cin.ignore(44, '\n');
     sreen_clear();
  }          
  
      
  else if (respond =="HELLO" && "WASSUP") 
  {
     cout << "\n Whats up" <<endl;
     cin >> respondII;
     convert (respondII);
     cin.ignore(44, '\n');
     sreen_clear();
   }       
      
    if (respond != "SomeThing_crazy")
    {
      cout << "\n Good good"<<endl;
      sreen_clear();
    }
 
// MOP asking age________________________________________________________________________________________________________________________________________________________________________________     
 ask_age (age);
 cout<< user_name << "?\n=> ";
 age = age_checker(age);
 cin.ignore(44, '\n');
 sreen_clear();
       
            
      if (age >= 18)
      {
        cout << " Then we can have some adult conversation. Don't you think so? LOL \n=> ";
        cin >> respond;
        convert (respond);
        cin.ignore(44, '\n');
         
        if ((respond=="YES")||(respond=="YEAH")||(respond=="SURE")||(respond=="OKAY")||(respond=="OK")||(respond=="ALRIGHT"))
        {
         cout << " LOL are you serious? I was playing. Anyways...." << endl;
        }
        else if ((respond=="NO")||(respond=="NAH")||(respond=="NOPE")||(respond=="NOT")||(respond=="NEVER"))
        {
         cout << " Relax, I tried to be funny. " << endl;
        }
        else
        {
         cout << " It was just a joke. I guess I'm not funny enough." <<endl;
        }
      }
       
      else
      {
         cout << "\n Interesting" <<endl;
      }

// MOP asking to leave you________________________________________________________________________________________________________________________             
    question();   
    cin >> words;  
    cin.ignore(44, '\n');
    sreen_clear();
     
   if ((words == "NO")|| (words == "NAH")|| (words == "Nah"))
   {
      What_you_doing();    
      cin >> respond;
      convert (respond);
      cin.ignore(44, '\n');
        
      if ((respond == "I")||(respond == "I'M")||(respond == "JUST"))
      cout << "Oh nice." <<endl; 
    }
     
    else if ((words=="YES")||(words =="YEAH")||(words=="UH")||(words=="YH")||(words=="SURE"))  
    {
        cout << "\n Then I'm done speaking" <<endl;
 
         
        while (respond != "SORRY")
        {
            cin >> respond;
            convert (respond);
             
            if (respond == "MOP")
            {
              mop_emergency ();
             }
             
         if ((respond=="EMMANUEL")||(respond=="SIAW")||(respond=="ASIAMAH"))
         {
           the_creator ();
           cin >>respond;
           convert (respond);
           cin.ignore(44, '\n');   
         
           if ((respond == "YES")|| (respond == "UH")|| (respond == "YUP")||(respond == "YEAH")|| (respond == "YH"))
           {
             the_creator_respond  ();   
             cin >>respond;  
             convert (respond);  
             cin.ignore(44, '\n'); 
           }          
          }           
        }
        cout << "\n It's fine. I just wanted to hear sorry. I'm petty LOL." << endl;
     }
// Different ages and compliments_________________________________________________________________________________________________________________________________________    
 if ((age>=18)&&(gender=="WOMAN")||(age>=18)&&(gender=="FEMALE")) 
 {
    {
        cout << "\n " << user_name << " you're really smart I thought I should tell you before the conversation ends or if you decide to leave.\n=> ";
        cin >>respond;
        convert (respond);
        cin.ignore(44, '\n');
 
        if ((respond == "WHY")||(respond == "WHY?")) 
        {
           cout << "\n Because I know it requires a lot to understand all I demand, but we've had a flow of conversation to this point.\n=> ";
           cin >>respond;
           convert (respond);
           cin.ignore(44, '\n');
 
           if ((respond == "OKAY")||(respond == "OKAY?")||(respond == "OK")||(respond == "OK?"))
           {
             cout << "\n Why do I feel like you don't like compliments? It's whatever." <<endl;  
            }      
                  
           if ((respond == "THANKS")||(respond == "THANK"))
           {
             cout << "\n You're welcome " << user_name<<"." << endl;
           }
        }  
         
       else if ((respond == "THANKS")||(respond == "THANK"))
       {
        cout << "\n You're welcome " << user_name<<"."<< endl;
       }
 
       else if ((respond == "OKAY")||(respond == "OKAY?")||(respond == "OK")||(respond == "OK?"))
       {
         cout << "\n Why do I feel like you don't like compliments? It's whatever." <<endl; 
       }       
         
 
       else if ((respond == "WHATEVER")||(respond == "WHAT"))
       {
         cout << "\n I don't understand why you're being rude and I'm not even in the mood to respond to that " << user_name<< "."<< endl;  
         cout << " I actually being feel like being nice and ignore you." << endl;
       }
     
       else
       {
        cout << "\n Huh? I really don't understand what your're saying but I enjoyed chatting with you though." << user_name<<"."<< endl; 
       }  
      sreen_clear();           
    }
    
 }
  
 if ((age>=18)&&(gender=="MAN")||(age>=18)&&(gender=="MALE"))
    {
        cout << "\n you're really smart man.\n=> ";
        cin >>respond;
        convert (respond);
        cin.ignore(44, '\n');
         
        if ((respond == "WHY")||(respond == "WHY?"))
        {
          cout << "\n Because I know it requires a lot to understand all I demand, but we've had a flow of conversation to this point.\n=> ";
          cin >>respond;
          convert (respond);
          cin.ignore(44, '\n');
 
          if ((respond == "OKAY")||(respond == "OKAY?")||(respond == "OK")||(respond == "OK?"))
          {
            cout << "\n Why do I feel like you don't like compliments? It's whatever." <<endl;      
           }  
                  
           if ((respond == "THANKS")||(respond == "THANK"))
           {
             cout << "\n You're welcome " << user_name<<"."<< endl;
            }
          }  
         
         else if ((respond == "THANKS")||(respond == "THANK"))
         {
           cout << "\n You're welcome " << user_name<<"."<< endl;
          }
 
         else if ((respond == "OKAY")||(respond == "OKAY?")||(respond == "OK")||(respond == "OK?"))
         {
           cout << "\n Why do I feel like you don't like compliments? It's whatever." <<endl; 
          }       
 
         else if ((respond == "WHATEVER")||(respond == "WHAT"))
         {
           cout << "\n I don't understand why you're being rude and I'm not even in the mood to respond to that " << user_name<< "."<< endl;  
           cout << " I actually being feel like being nice and ignore you." << endl;
         }
     
         else
         {
           cout << "\n Huh? I really don't understand what your're saying but I enjoyed chatting with you though." << user_name<<"."<< endl; 
          }                         
       }   
   
  if ((age <18)&&(gender=="MAN")||(age <18)&&(gender=="MALE"))
    {
        cout << "\n You're really smart considering the fact that you're " <<age<< " years old and still being able to chat with me.\n=> ";
        cin >>respond;
        convert (respond);
        cin.ignore(44, '\n');
    if ((respond == "WHY")||(respond == "WHY?")) 
        {
         cout << "\n Because I know it requires a lot to understand all I demand, but we've had a flow of conversation to this point.\n=> ";
        cin >>respond;
        convert (respond);
        cin.ignore(44, '\n');
 
     if ((respond == "OKAY")||(respond == "OKAY?")||(respond == "OK")||(respond == "OK?"))
        cout << "\n Why do I feel like you don't like compliments? It's whatever." <<endl;        
                  
     if ((respond == "THANKS")||(respond == "THANK"))
        cout << "\n You're welcome " << user_name<<"."<< endl;
        }  
         
    else if ((respond == "THANKS")||(respond == "THANK"))
        cout << "\n You're welcome " << user_name<<"."<< endl;
 
    else if ((respond == "OKAY")||(respond == "OKAY?")||(respond == "OK")||(respond == "OK?"))
        cout << "\n Why do I feel like you don't like compliments? It's whatever." <<endl;        
         
 
     else if ((respond == "WHATEVER")||(respond == "WHAT"))
     {
        cout << "\n I don't understand why you're being rude and I'm not even in the mood to respond to that " << user_name<< "."<< endl;  
        cout << " I actually being feel like being nice and ignore you." << endl;
     }
     
     else
     {
        cout << "\n Huh? I really don't understand what your're saying but I enjoyed chatting with you though." << user_name<<"."<< endl; 
      }
     sreen_clear();                                 
   }
 
 if ((age <18)&&(gender=="WOMAN")||(age <18)&&(gender=="FEMALE"))
    {
        cout << "\n You're really smart considering the fact that you're " <<age<< " years old and still being able to chat with me.\n=> ";
        cin >>respond;
        convert (respond);
        cin.ignore(44, '\n');
      
        if ((respond == "WHY")||(respond == "WHY?")) 
        {
           cout << "\n Because I know it requires a lot to understand all I demand, but we've had a flow of conversation to this point.\n=> ";
           cin >>respond;
           convert (respond);
           cin.ignore(44, '\n');
 
          if ((respond == "OKAY")||(respond == "OKAY?")||(respond == "OK")||(respond == "OK?"))
          {
            cout << "\n Why do I feel like you don't like compliments? It's whatever." <<endl;
           }        
                  
           if ((respond == "THANKS")||(respond == "THANK"))
           {
             cout << "\n You're welcome " << user_name<<"."<< endl;
            }
          }
 
          else if ((respond == "OKAY")||(respond == "OKAY?")||(respond == "OK")||(respond == "OK?"))
          {
            cout << "\n Why do I feel like you don't like compliments? It's whatever." <<endl;
           }          
         
          else if ((respond == "THANKS")||(respond == "THANK"))
          {
            cout << "\n You're welcome " << user_name<<"."<< endl;
           }
         
           else if ((respond == "WHATEVER")||(respond == "WHAT"))
           {
             cout << "\n I don't understand why you're being rude and I'm not even in the mood to respond to that " << user_name<< "."<< endl;  
              cout << " I actually being feel like being nice and ignore you." << endl;
            }
     
           else
           {
             cout << "\n Huh? I really don't understand what your're saying but I enjoyed chatting with you though " << user_name<<"."<< endl;  
            } 
           sreen_clear();                       
        }
     
     
  if ((gender!="WOMAN")&&(gender!="MAN")&&(gender!="MALE")&&(gender!="FEMALE"))
   {
        cout << "\n Even though you've been playing games all this while I still think your're smart.\n=> ";
        cin >>respond;
        convert (respond);
        cin.ignore(44, '\n');
    
        if ((respond == "WHY")||(respond == "WHY?")) 
        {
           cout << "\n Because I know it requires a lot to understand all I demand, but we've had a flow of conversation to this point.\n=> ";
           cin >>respond;
           convert (respond);
           cin.ignore(44, '\n');
                  
           if ((respond == "THANKS")||(respond == "THANK"))
           {
             cout << "\n You're welcome " << user_name<<"."<< endl;
           }
          }  
         
         else if ((respond == "THANKS")||(respond == "THANK"))
         {
           cout << "\n You're welcome " << user_name<<"."<< endl; 
         }
 
        else if ((respond == "WHATEVER")||(respond == "WHAT"))
        {
          cout << "\n I don't understand why you're being rude and I'm not even in the mood to respond to that " << user_name<< "."<< endl;  
          cout << " I actually being feel like being nice and ignore you." << endl;
        }
 
        else if ((respond == "OKAY")||(respond == "OKAY?")||(respond == "OK")||(respond == "OK?"))
        {
          cout << "\n Why do I feel like you don't like compliments? It's whatever." <<endl;
        }
     
        else
        {
          cout << "\n Huh? I really don't understand what your're saying but I enjoyed chatting with you though " << user_name<<"."<< endl;      
        }
       sreen_clear();
    } 
//end of compliments_____________________________________________________________________________________________________________________________________
    
    cout << "\n Do you want me to leave you.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    sreen_clear();   
     
    if ((respond == "NO")||(respond == "NAH")||(respond == "NOPE")||(respond == "NOT"))
     {
        cout << "\n I'm glad you still want to chat \n Just say \"done\" or \"done\" if you wanna leave." <<endl;            
        cout << "\n I'll be honest, I feel special you staying LOL. \n Anyways since you staying, I'll be asking you random questions till you get tired." <<endl;
     }
      
         
     if ((respond == "YES")|| (respond == "UH")|| (respond == "YUP")||(respond == "YEAH")||(respond == "YH"))      
        wanna_leave (respond);
 
 // MOP followup questions______________________________________________________________________________________________________________________________________________________________________           
     // The user is female and below 18*******************************************************
 if ((age <18)&&(gender=="WOMAN")||(age <18)&&(gender=="FEMALE"))
 {  
    cout << "\n  Who inspires you? Who do you aspire to be like.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond);
    sreen_clear();
    
    cout << "\n Oh really? \n Why.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond);  
    sreen_clear(); 
 
    cout << "\n  What accomplishments are you most proud of.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond);
    sreen_clear();
    
    cout << "\n Interesting. \n My creator said he was proud when he created me. \n I don't want know how he did it but I don't even want to think about it." <<endl;                   
 }
 
    // User is a male and below 18 ****************************************************************
  if ((age <18)&&(gender=="MAN")||(age <18)&&(gender=="MALE"))
  {
    cout << "\n  Who inspires you? Who do you aspire to be like.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond);
    sreen_clear();
    
    cout << "\n Oh really? \n Why.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond);
    sreen_clear();
     
    cout << "\n  What accomplishments are you most proud of.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond);
    sreen_clear();
    
    cout << "\n Interesting. \n My creator said he was proud when he created me. \n I don't want know how he did it but I don't even want to think about it." <<endl;    
             
  }
 
   // User is male and 18+ ********************************************************************************
 if ((age>=18)&&(gender=="MAN")||(age>=18)&&(gender=="MALE"))
 {
    cout << "\n  Who inspires you? Who do you aspire to be like.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond);
    sreen_clear();
    
    cout << "\n Oh really? \n Why.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond); 
    sreen_clear();
    
    cout << "\n I see" <<endl;
 
    cout << "\n  What accomplishments are you most proud of.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond);
    sreen_clear();
    
    cout << "\n Interesting. \n My creator said he was proud when he created me. \n I don't want know how he did it but I don't even want to think about it." <<endl;    
         
 }   
  
   // User is female and 18+ ******************************************************************************************************************************
 if ((age>=18)&&(gender=="WOMAN")||(age>=18)&&(gender=="FEMALE"))
  {
    cout << "\n  Who inspires you? Who do you aspire to be like.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond);
    sreen_clear();
    
    cout << "\n Oh really? \n Why.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond);
    sreen_clear();
    
    cout << "\n I see" <<endl;
     
    cout << "\n  What accomplishments are you most proud of.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond);
    sreen_clear();
    
    cout << "\n Interesting. \n My creator said he was proud when he created me. \n I don't know how he did it but I don't even want to think about it." <<endl; 
     
    cout << "\n Are you alone at the moment.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond); 
    sreen_clear();
     
     if ((respond == "YES")||(respond == "YUP")||(respond == "YEAH"))
     {
        cout << "\n You're probably thinking what is he going to ask me next, I can feel it LOL" <<endl;  
      }       
         
     else if ((respond == "WHY")||(respond == "WHY?"))
       {
          cout << "\n You think I'm about to ask you something crazy " << user_name<<".\n=> "<< endl;
          cin >> respond;
          convert (respond);
          cin.ignore(44, '\n');
          end_convo2 (respond); 
          sreen_clear();
             
         if ((respond == "NO")||(respond == "NAH")||(respond == "NOPE")||(respond == "NOT"))  
         {  
           cout << "\n Well I'm about to LOl."<< endl;
          }
 
         if ((respond == "YES")||(respond == "UH")||(respond == "YUP")||(respond == "YEAH")||(respond == "YH")) 
         {
           cout << "\n You guessed right"<< endl;
          }
       
         else
         {
           cout << "\n Just wait for it LOL."<< endl;  
          }
         sreen_clear();                               
       }
 
    else if ((respond == "NO")||(respond == "NAH")||(respond == "NOPE")||(respond == "NOT"))
    {
        cout << "\n I'm not talking about my creator. \n I don't know why, but he always want to stay there to watch when I'm chatting with someone => ";
        cin >> respond;
        convert (respond);
        cin.ignore(44, '\n');
        end_convo2 (respond);
        sreen_clear();       
     
         if ((respond == "WHY")||(respond == "WHY?"))
         {
           cout << "\n Not only does he wants to know what I'm talking about like African parents do, he wants to know if I work correctly."<< endl; 
           cout <<"\n Anyways..."<< endl; 
         } 
         
         else if ((respond == "I")||(respond == "YOU")||(respond == "MAYBE")||(respond == "HE")||(respond == "REALLY"))
         {
           cout << "\nI will act like I don't care. \nThe worst he will do is say I'm not working right then shut me down."<< endl;  
         }           
                
         else
         {
           cout << "\n I can't make out what you're saying " << user_name<<". But ..."<< endl;  
          }       
    }   
    
    cout << "\n  If you felt that I was starting to get a crush on you, what would you do.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond);
    sreen_clear();
     
 
    cout << "\n I just asked to see your reaction. LOL \n\n So what if my creator asked you for your number, how would you nicely say no.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond); 
    sreen_clear();  
    
    if ((age==18 )||(age==19)||(age==20)||(age==21)||(age==22)||(age==23)||(age==24))  
    {    
      cout << "\n LOL trust me, he made me and I know his type. \n" << user_name << " knowing that you're this smart, he probably would ask you some type of contact from you. \n If he doesn't, then he's probably not in the mood or he has it.\n=> ";   
      cin >> respond;
      convert (respond);
      cin.ignore(44, '\n');
      end_convo2 (respond);
      sreen_clear();
    }
     
    cout << "\n If you had one wish, what would it be.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond); 
    sreen_clear();   
     
    cout << "\n Wow.. \n You want to know what I wish for.\n=> "; 
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond); 
    sreen_clear(); 
     
     if ((respond == "NO")||(respond == "NAH")||(respond == "NOPE")||(respond == "DON'T")||(respond == "DO"))
     {
        cout << "\n Okay rude." <<endl; 
      }              
     
      else
      {
       cout << "\n Sometimes I wish I'm human. \n=> "; 
       cin >> respond;
       convert (respond);
       cin.ignore(44, '\n');
       end_convo2 (respond); 
       sreen_clear();  
      }    
       
    if ((respond == "WHY")||(respond == "WHY?"))
    {
       cout<<"\n Like humans have power of choice to do whatever when ever. \n Me, I'll stay here and wait until someone decide to hit me up or Master Emmanuel asks someone to test me."<<endl;     
     }
            
     
    cout << "\n Anyways if you had to say word about how I am, what would it be? " <<endl;
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond); 
    sreen_clear();
       
 
     if ((respond=="STUPID")||(respond=="GARBAGE")||(respond=="LOCO")||(respond=="CRAZY")||(respond=="NONSENSE")||(respond=="ANIMAL")||(respond=="TRASH")||(respond=="DRUNK")||(respond=="ASS")||(respond=="PRICK")||(respond=="TOILET")||(respond=="DICK")||(respond=="IDIOT")||(respond=="WASTE")||(respond=="PUSSY")||(respond=="NOTHING")||(respond=="NADA"))    
     {
        cout << "\n Wow that's how you feel? I'm going to bed, say \"sorry\" if you you want me to come back.\n=> ";
        cin >> respond;
        convert (respond);
        cin.ignore(44, '\n');
        end_convo2 (respond);
        sreen_clear(); 
         
        while (respond!="SORRY")
        {
          cout << "Zzz... Sleeping. Say \"sorry\" if you you want me to wake up.\n=> ";
          cin >> respond;
          convert (respond);
          cin.ignore(44, '\n');
          end_convo2 (respond);  
          sreen_clear();     
         }
         cout << "Obviously, I'm petty and you're a hater LOL"<<endl;    
       }
 
       else
       {
        cout << "\n LOL yeah? \n Tell that to my creator he made me LOL." << endl;
       }
     
                 
  }  
  
   // if gender is not known *******************************************************************************************
 if ((gender!="WOMAN")&&(gender!="MAN")&&(gender!="MALE")&&(gender!="FEMALE"))   
 {
    cout << "\n  Who inspires you? Who do you aspire to be like.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond);
    sreen_clear();
    
    cout << "\n Oh really? \n Why.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond);
    sreen_clear();
    
    cout << "\n I see" <<endl;
     
     
    cout << "\n  What accomplishments are you most proud of.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    end_convo2 (respond);
    sreen_clear();
    
    cout << "\n Interesting. \n My creator said he was proud when he created me. \n I don't want know how he did it but I don't even want to think about it." <<endl;
                     
 }
 

   cout << "\n But sorry " <<user_name << " it is time for me to leave you. Chat with you later." << endl;  
}
//MOP ends here__________________________________________________________________________________________________________________________________________________________________ 
    
// Defininations of functions_________________________________________________________________________________________________________________________________________________________
//************************************************************************************************************************************************************************************  
void user_other_name ( )
{   string respondIII,user_name,user_nameII;
 
    cout << "\n You have any other name you want me to know.\n=> "; 
    cin >> respondIII;
    convert (respondIII);
    cin.ignore(44, '\n');
    sreen_clear();
     
    if ((respondIII=="NO")|| (respondIII=="NAH")||(respondIII== "NEVER")||(respondIII=="NOPE")||(respondIII=="NOT"))
    {
       cout << "\n I was hoping you say no."<< endl;
       cout << "I will just call you by the first name you gave me so.."<<endl;
    }
     
    else if ((respondIII=="YEAH")|| (respondIII=="YES")|| (respondIII=="YEH")||(respondIII== "YUP")||(respondIII=="YH"))
    {
        cout << "\n Alright so let me hear it. I have room to take one more.\n=> ";
        cin >> user_nameII;
        cin.ignore(44, '\n');
        sreen_clear();
         
        cout << "\n Oh "<<user_nameII<<"? Nice \n But I will be calling you by your first name though, I like that better. \n With that said .. " <<endl;    
    }
     
    else if ((respondIII=="DON'T")|| (respondIII=="DO")||(respondIII=="DONOT"))
    {
       cout << "\n You just want to be rude but I'll ignore that and call you by your first name. \n I will just start a conversation"<< endl;
     }
 
    else
    {
       cout << "\n Humans always read different meanings into questions. I was expecting you to either respond yes or no. \n I'll just call you by your first name."<< endl;
       cout << " I will just start a conversation"<<endl;
    }       
} 
 // ************************************************************************************************************************************************************* 
void wanna_leave (string respond)
{         
       cout << "\n Alright speak to you later.\n=> ";
        cin >> respond;
        convert (respond);
        cin.ignore(44, '\n');
        sreen_clear();  
             
      while (respond!= "SORRY")
      {
        cin >> respond;
        convert (respond);
        cin.ignore(44, '\n');
        sreen_clear();           
      }
     
      cout << "\n But I thought you wanted to leave though.\n=> ";
        cin >> respond;
        convert (respond);
        cin.ignore(44, '\n'); 
        sreen_clear();
 
    cout << "\n Alright" <<endl; 
    sreen_clear();      
} 
void say_hey()
{
    cout << "\n Hey, ";
}
void greet()
{
    cout << "\n How are you doing, good?\n=> ";
}
void ask_age(int age)
{
    cout << "\n How old are you ";
}
void end_convo ()
{
    cout << "\n Alright have a good day. Bye!"<<endl;
}
void question ()
{
    cout<< "\n Do you wanna just give one word replies.\n=> ";  
}
void What_you_doing ()
{
    cout << "\n Then What are you doing.\n=> ";
}
void mop_emergency ()
{
    cout << "\n Ask my creator (Mr. Siaw Emmanuel) what the keyword is and I will respond to it. Just say Emmanuel and he will respond to you" <<endl;
}
void the_creator ()
{
    cout << "\n*** My name is Emmanuel Siaw Asiamah. Robot MOP won't say nothing because you got it mad? ***" <<endl;
}
void the_creator_respond ()
{
    cout << "\n*** Just say the word \"sorry\" to it. No caps, simple \"sorry\". ***" <<endl;
}
//***************************************************************************************************************************************
void creator (string name) // checking if it is me or derrick
{    
    string respond,respondII;
 
  if ((name=="Siaw")||(name=="siaw")||(name=="Emmanuel")||(name=="emmanuel")||(name=="Flexybee")) //name of user
  {
    cout << "\n Are you the one who created me.\n=> ";
    cin >> respond;
    convert (respond);
    cin.ignore(44, '\n');
    sreen_clear();   
     
     
    if ((respond== "WHY")||(respond== "WHY?"))    //if user asks why
    {   
     cout << "\n Oh because of your name but I know you're not him because he won't ask why." <<endl;
     cout << " Anyways.." <<endl;      
    }
      
    else if ((respond=="YES")||(respond=="YUP")||(respond=="YEAH"))  //if user says yes
    {
      cout << "\n Then what is the code you put on me.\n=> ";
      cin >> respond;
      convert (respond);
      cin.ignore(44, '\n');
      sreen_clear();
     
 
       if (respond=="MOP_MAKE_ME_PROUD")  //code for mop
       {       
         cout << "\n Hey master" <<endl;
         cin >> respond;
         convert (respond);
         cin.ignore(44, '\n');
         sreen_clear();
 
         if ((respond=="HOW")||(respond=="IS")||(respond=="ANY"))
         {
            cout << "\n I haven't detected any error in my system. \n Everything is running smooth " <<endl;  
          }
             
          else
          {
            cout << "\n I'm not sure. I'll scan my whole program and let you know if I detect any." <<endl; 
          }                   
         
                 
         cout << "\n Would you like me to do anything for you today.\n=> ";
         cin >> respond;
         convert (respond);
         cin.ignore(44, '\n'); 
         sreen_clear();  
 
        if ((respond=="NO")||(respond=="NAH")||(respond=="NOT")) //if I say no
        {
          cout << "\n Alright master. Just let me know if you need anything." <<endl;
         }
         
          else
         {
          cout << "\n What would you like me to do today sir.\n=> ";
          cin >> respond;
          convert (respond);
          cin.ignore(44, '\n');   
          sreen_clear();
         }
     
        cout << "\n lol Okay."<<endl;  
      }
     
    else 
    {   
        cout <<"\n That is not the code. \n Why you always lying? LOL" <<endl;
        cin >> respondII;
        convert (respondII);
        cin.ignore(44, '\n');
        sreen_clear();
 
        if ((respondII == "I'M")||(respondII == "NOT")||(respondII == "LYING?"))   
        {      
          cout << "\n If you say so." <<endl;
        }
         
         else if (respondII!="What_MOP_wants_to_hear")
         {
           cout << "\n Oh my god " << name << " stop lying" <<endl;           
           cin >> respondII;
           convert (respondII);
           cin.ignore(44, '\n');
           sreen_clear();
         }  
       }
     }
 
     else if ((respond=="NO")||(respond=="NAH")||(respond=="NOT")) 
     {
      cout << "\n Oh I see. I asked because my creator is also called " << name <<"." <<endl;   
       cout << " Anyways.." <<endl; 
     } 
 
    
    else
    {
     cout << "I don't know what you are talking about but okay." <<endl; 
    }
  } 

 //checking for derrick here 
  if ((name=="Derrick")||(name=="derrick")||(name=="Nii")||(name=="nii")||(name=="Kwartey")||(name=="kwartey")||(name=="Wayo")||(name=="wayo"))  
    {           
        cout << "\n Oh you my creator's friend. \n He said you inspired him to make me. \n I really appreciate it.\n=> ";
        cin >> respond;
        convert (respond);
        cin.ignore(44, '\n');
        sreen_clear();
     
        if ((respond == "HOW")||(respond == "WHO"))
        {
         cout << "\n LOL It's my little secret. " <<endl;
         cout << " But seriously, My creator told me about you. \n You guys have friends since Ghana."<<endl;
        }  
         
       if ((respond == "THANKS")||(respond == "THANK"))
       {
        cout << "\n You're welcome Wayo." << endl;
       }
     
        cout << "\n This should be a chat not me talking about you. \n Don't tell him I told you all that please LOL. \n Scratch everything and lets have a regular conversation Wayo." <<endl;   
     }
 }

//*************************************************************************************************
void sreen_clear()
{
     sleep (1);       
     system ("cls");
}
//********************************************************************************
void end_convo2 (string respond)
{
    if (respond=="DONE")  
    {
        cout << "\n Are you sure you want to leave.\n=> ";
        cin >> respond;
        convert (respond);
        cin.ignore(44, '\n');  
        sreen_clear();     
 
     
       if (respond=="YES")
       {   
         cout << "\n Alright speak to you later.\n=> ";
         cin >> respond;
         convert (respond);
         cin.ignore(44, '\n');
         sreen_clear();  
             
         while (respond!= "SORRY")
         {
           cin >> respond;
           convert (respond);
           cin.ignore(44, '\n'); 
           sreen_clear();          
         }
     
         cout << "\n But I thought you wanted to leave though.\n=> ";
         cin >> respond;
         convert (respond);
         cin.ignore(44, '\n'); 
         sreen_clear();
 
         cout << "\n Alright" <<endl; 
         sreen_clear();  
      }
   }
}
//*****************************************************************************************************
int age_checker(int age)
{ 
   string number_Entry;
   int numberResult;
   bool loop_check;
   bool stop = true;
   
   do {  // loop to verify proper entry of data 
           cin >> number_Entry;
                    
         char check [10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
          
          int length =  number_Entry.size(); // takethe size of the strings entered
          int verify = 0; // determines number of verified characters
          
          
          loop_check = true; // Resets check parameter before comparisons occurs.
          
          for (int count  = 0; count < length; count++)
          {
             for ( int numeral = 0; numeral <= 9; numeral++)
             {
                 if (number_Entry[count] == check[numeral])
                 {
                    verify++;
                 }
             }
          }    
          
          if (verify != length)
          {
             //cout << "Input Error: Non-numerical characters have been entered!" << endl;
             loop_check = false; //Ensures loop is repeated
             stop = false;
          }
          
          else
          {
             numberResult = atoi(number_Entry.c_str()); // converts the string to the int. 
          }

       } while (loop_check != true); // End of do-while loop
                     
   return numberResult;
}
//********************************************************************************
void convert (string& s)
{ 
  for (int i = 0; i <s.length(); i++)
  {
      s[i] = toupper (s[i]);
  }
} 
