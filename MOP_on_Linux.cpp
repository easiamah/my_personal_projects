
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;
 
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
 
int main () 
{
 
    string user_name, respond, respondII, respond2greet,respond2stop, words, request, wordsII,gender;
    int age;
 
// Mop describes itself here    
    cout << setw(50) << "ROBOT MOP" << endl;
    cout << setw(50) << "----------" << endl; 
    cout << "=> Hello World!" << endl;
    cout << "=> My Name is Robot MOP."<<endl;
 
// Mop's rules
    cout << setw(65) << " Simple rules to make our chatting fun" << endl;
    cout << setw(68) << "------------------------------------------" << endl;
    cout << "1. Please read every sentence clearly before you answer. It is important because, I can hardly answer if it makes no sense to me." << endl;
    cout <<  "\n2. I might not be able to read wrong spellings so check the spellings." << endl;        
    cout << "\n3. This is really important: If I stop responding to you and you don't know what to say, Just call my name (MOP or mop) and I will tell you what to do." << endl;
    cout << "\n4. Don't always have your caps lock on." << endl;
    cout << "\n5. Acronyms such as lol's, lml's, and lmao's should come after your responds."<<endl<<endl;
    cout << setw(65) << "***Lets get started***" << endl;         
     
 
// first question to find out if the user is a boy or a girl. Really helpful later on in the chat       
      cout << "\n=> My very first question is, are you a male or female?" <<endl;
      cin >> gender;
      cin.ignore(44, '\n'); 
 
// if user fails to read the first question        
if ((gender=="Hey")||(gender=="hey")||(gender=="Hello")||(gender=="what's")||(gender =="wassup")||(gender=="hello")||(gender=="What's")||(gender=="hi")||(gender=="Hi"))  
    {
        cout << "\n=> You obviously did not read what I said. You should read before you respond or I can't give you the desired responds." <<endl;
        cout << "=> Lets try one more time. Are you a male or female?" <<endl;
        cin >> gender;
        cin.ignore(44, '\n'); 
    }
 
// since the mop doesn't get the answer it wants this helps 
if ((gender=="I'm")||(gender=="i'm")||(gender=="I")||(gender=="i")||(gender =="am")||(gender=="Am")||(gender=="a")||(gender=="A")||(gender=="you"))  
    {
        cout << "\n=> LOL humans always want to go outside the box to express themselves." <<endl;
        cout << "=> Lets keep it simple. Are you a male or female?" <<endl;
        cin >> gender;
        cin.ignore(44, '\n');
    }   
     
  
else if ((gender=="Male")||(gender=="male")||(gender=="M")||(gender=="m")||(gender=="boy")||(gender=="Boy")||(gender=="Man")||(gender=="man"))
    {
        cout << "\n=> Oh nice. I had to know that first before anything. It helps when I know that. Don't you think so? LOL" <<endl;
        cin >> respondII;
        cin.ignore(44, '\n');
 
 if ((respondII=="Why")||(respondII=="why")||(respondII=="Why?")||(respondII=="why?"))
    {
        cout << "\n=> It is important. It enhances the conversation when I know what gender I'm chatting with. LOL" <<endl;              
    } 
else if ((respondII=="lol")||(respondII=="LOL")||(respondII=="lml")||(respondII=="lmao")||(respondII=="LML")||(respondII=="Lmao")||(respondII=="haha")||(respondII=="hehe"))
        cout << "\n=> I knew you wasn't really going to read the rules. \n=> I said in rule (5) that acronyms such as lol's, lml's, and lmao's should come after your responds." <<endl;                                  
    }
  
else if ((gender=="Female")||(gender=="female")||(gender=="W")||(gender=="w")||(gender=="girl")||(gender=="Girl")||(gender=="Woman")||(gender=="woman"))    
    {
        cout << "\n=> Oh nice. I had to know that first before anything. It helps when I know that. Don't you think so? LOL" <<endl;
        cin >> respondII;
        cin.ignore(44, '\n');
         
 if ((respondII=="Why")||(respondII=="why")||(respondII=="Why?")||(respondII=="why?"))
    {
        cout << "\n=> It is important. It enhances the conversation when I know what gender I'm chatting with. LOL" <<endl;              
    } 
 else if ((respondII=="lol")||(respondII=="LOL")||(respondII=="lml")||(respondII=="lmao")||(respondII=="LML")||(respondII=="Lmao")||(respondII=="haha")||(respondII=="hehe"))
        cout << "\n=> I knew you wasn't really going to read the rules. \n=> I said in rule (5) that acronyms such as lol's, lml's, and lmao's should come after your responds." <<endl;
     
    }
     
else if ((gender=="Why")||(gender=="why")||(gender=="Why?")||(gender=="why?"))
    {
        cout << "\n=> It is important. It enhances the conversation when I know what gender I'm chatting with. LOL" <<endl;
        cout << "=> So are you a male or female?"<<endl;
        cin >> gender;
        cin.ignore(44, '\n');
         
 if ((gender=="I'm")||(gender=="i'm")||(gender=="I")||(gender=="i")||(gender =="am")||(gender=="Am")||(gender=="a")||(gender=="A"))  
    {
        cout << "\n=> LOL humans always want to go outside the box to express themselves." <<endl;
        cout << "=> Lets keep it simple. Are you a male or female?" <<endl;
        cin >> gender;
        cin.ignore(44, '\n');
    }                   
    } 
     
 else if ((gender=="don't")||(gender=="Don't")||(gender=="Do")||(gender=="do"))
    {
        cout << "\n=> Why you have to be so rude. Don't you know I'm human too?" <<endl;
        cout << "=>Sike. I'm just an intelligent robot" <<endl;
        cout << "=>But for real tho, if you don't tell me your gender, it will mess up the conversation. So are you a male or female?"<<endl;
        cin >> gender;
        cin.ignore(44, '\n');
 
if ((gender=="I'm")||(gender=="i'm")||(gender=="I")||(gender=="i")||(gender =="am")||(gender=="Am")||(gender=="a")||(gender=="A")||(gender=="nothing"))  
    {
        cout << "\n=> LOL humans always want to go outside the box to express themselves." <<endl;
        cout << "=> Lets keep it simple. Are you a male or female?" <<endl;
        cin >> gender;
        cin.ignore(44, '\n');
    }                       
    }   
               
else
{
    cout << "\n=> Huh? I don't know what gender that is. Can you please tell me whether you're a male or female?"<<endl;
        cin >> gender;
        cin.ignore(44, '\n');
 
if ((gender=="I'm")||(gender=="i'm")||(gender=="I")||(gender=="i")||(gender =="am")||(gender=="Am")||(gender=="a")||(gender=="A")||(gender=="my")||(gender=="My"))  
    {
        cout << "\n=> LOL humans always want to go outside the box to express themselves." <<endl;
        cout << "=> Lets keep it simple. Are you a male or female?" <<endl;
        cin >> gender;
        cin.ignore(44, '\n');
    }           
 
 if ((gender=="Male")||(gender=="male")||(gender=="M")||(gender=="m")||(gender=="boy")||(gender=="Boy")||(gender=="Man")||(gender=="man"))
    {
        cout << "\n=> Oh nice. I had to know that first before anything. It helps when I know that. Don't you think so? LOL" <<endl;
        cin >> respondII;
        cin.ignore(44, '\n');
 
 if ((respondII=="Why")||(respondII=="why")||(respondII=="Why?")||(respondII=="why?"))
    {
        cout << "\n=> It is important. It enhances the conversation when I know what gender I'm chatting with. LOL" <<endl;              
    } 
else if ((respondII=="lol")||(respondII=="LOL")||(respondII=="lml")||(respondII=="lmao")||(respondII=="LML")||(respondII=="Lmao")||(respondII=="haha")||(respondII=="hehe"))
        cout << "\n=> I knew you wasn't really going to read the rules. \n=> I said in rule (5) that acronyms such as lol's, lml's, and lmao's should come after your responds." <<endl;                      
    }
  
 if ((gender=="Female")||(gender=="female")||(gender=="W")||(gender=="w")||(gender=="girl")||(gender=="Girl")||(gender=="Woman")||(gender=="woman"))    
    {
        cout << "\n=> Oh nice. I had to know that first before anything. It helps when I know that. Don't you think so? LOL" <<endl;
        cin >> respondII;
        cin.ignore(44, '\n');
         
 if ((respondII=="Why")||(respondII=="why")||(respondII=="Why?")||(respondII=="why?"))
    {
        cout << "\n=> It is important. It enhances the conversation when I know what gender I'm chatting with. LOL" <<endl;              
    } 
else if ((respondII=="lol")||(respondII=="LOL")||(respondII=="lml")||(respondII=="lmao")||(respondII=="LML")||(respondII=="Lmao")||(respondII=="haha")||(respondII=="hehe"))
        cout << "\n=> I knew you wasn't really going to read the rules. \n=> I said in rule (5) that acronyms such as lol's, lml's, and lmao's should come after your responds." <<endl;    
    }
     
 if ((gender=="Why")||(gender=="why")||(gender=="Why?")||(gender=="why?"))
    {
        cout << "\n=> It is important. It enhances the conversation when I know what gender I'm chatting with. LOL" <<endl;
        cout << "=> So are you a male or female?"<<endl;
        cin >> gender;
        cin.ignore(44, '\n');
    }
     
    if ((gender == "no")|| (gender == "nah")|| (gender == "Nah")||(gender == "never")||(gender == "Never")|| (gender== "nope")||(gender == "Nope")) 
        {
         {
            cout << "\n=> Oh so you want to play games huh?" <<endl; 
            cin >> respond;    
            cin.ignore(44, '\n');
        }
             
        if ((respond == "no")|| (respond == "No")|| (respond == "nah")||(respond == "Nah")|| (respond == "sorry")||(respond == "I'm")|| (respond == "you")||(respond == "I")|| (respond == "You"))
        {
            cout << "\n=> I can't believe you're making this harder than it suppose to be. Just know that what ever you say here I'll take as your gender." <<endl; 
            cout << "=> And if you don't give me a right gender it will mess up the conversation." <<endl;   
            cout << "=> just choose one; male or female?" <<endl;        
            cin >> gender;     
            cin.ignore(44, '\n');
        }   
        if ((respond == "yes")|| (respond == "YES")|| (respond == "uh")||(respond == "Yup")|| (respond == "yup")||(respond=="Yeah")||respond=="yeah")
         {
            cout << "\n=> Oh okay, I'm done speaking then." <<endl;
         
        while (respond != "sorry")
        {
            cin >> respond;
             
            if ((respond == "MOP")|| (respond == "mop")|| (respond == "Mop"))
             mop_emergency ();
              
    if ((respond=="Emmanuel")||(respond=="emmanuel")||(respond=="Siaw")||(respond=="siaw")||(respond=="Asiamah")||(respond=="asiamah"))
    {
        the_creator ();
        cin >>respond;
        cin.ignore(44, '\n');   
         
    if ((respond == "yes")|| (respond == "Yes")|| (respond == "uh")||(respond == "Yup")|| (respond == "yup")||(respond=="Yeah")||(respond=="yeah"))
    the_creator_respond  ();   
    cin >>respond;    
    cin.ignore(44, '\n');           
    }            
              
              
        }
        cout << "\n=> It's fine. I know you're trying to play games but if you don't tell me if you are a male or female, it will mess up the conversation."<<endl;
        cout << "\n=> So one more time. Keep it simple. Male or female?"<<endl;
        cin >> gender;
        cin.ignore(44, '\n');
         
if ((gender=="I'm")||(gender=="i'm")||(gender=="I")||(gender=="i")||(gender =="am")||(gender=="Am")||(gender=="a")||(gender=="A")||(gender=="nothing"))  
    {
        cout << "\n=> LOL humans always want to go outside the box to express themselves." <<endl;
        cout << "=> Lets keep it simple. Are you a male or female?" <<endl;
        cin >> gender;
        cin.ignore(44, '\n');
    }                   
    }
  }
}
 
       
 
    cout << "\n=> Lol alright. Have I spoken to you before?" << endl;
    cin >> respond;
    cin.ignore(44, '\n');
     
    if ((respond == "Yes")|| (respond == "yea")|| (respond == "Yeah")||(respond == "yeah")||(respond == "yes")|| (respond == "uh")|| (respond == "yess")||(respond == "yh"))
      {
        cout << "\n=> Are you sure?" << endl;
        cin >> respond;    
        cin.ignore(44, '\n');
 
    if ((respond == "Why")|| (respond == "why")|| (respond == "Why?")||(respond == "why?")) 
        cout << "\n=> I'm just trying to make sure. You know there are all these liars out there. LOL" <<endl;
 
    if ((respond == "No")||(respond == "no")|| (respond == "Nah")||(respond == "nah")||(respond == "Not")||(respond == "nope")|| (respond == "Nope")||(respond == "not"))
        cout <<"\n=> You just contradicted yourself but okay. I'll assume we still did." <<endl;             
             
        cout << "\n=> We had a smooth conversation?"<<endl;
        cin >> respond;
        cin.ignore(44, '\n');
         
        if ((respond == "No")||(respond == "no")||(respond == "Nah")||(respond == "nah")||(respond == "Not")||(respond == "not")||(respond == "Nope")||(respond == "nope"))     
            cout << "\n=> I apologize we didn't. I don't speak a lot of English. But I'm still learning." <<endl;
             
        if ((respond == "yes")|| (respond == "yeah")|| (respond == "Yeah")||(respond == "Yes")|| (respond == "Yup")||(respond == "yup"))
            cout << "\n=> I'm glad we did. I'm trying to learn more to have a perfect conversation with you always." <<endl;     
             
        cout << "\n=> I have a hard time keeping names, what is your name again?" <<endl;
        cin >> user_name;
        cin.ignore(44, '\n');
         
        if ((user_name == "guess")|| (user_name == "Guess")|| (user_name == "try")||(user_name == "Try"))
            {
                cout << "\n=>Oh I love to guess but I'm not in the mood" <<endl;
                cin >> user_name;
                cin.ignore(44, '\n');
            }
         
        if ((user_name == "no")|| (user_name == "nothing")|| (user_name == "Nothing")||(user_name == "never")||(user_name == "Never")|| (user_name == "nope")||(user_name == "Nope")) 
        {
         {
            cout << "\n=> Oh so you want to play games huh?" <<endl; 
            cin >> respond;    
            cin.ignore(44, '\n');
        }
        if ((respond == "yes")|| (respond == "YES")|| (respond == "uh")||(respond == "Yup")|| (respond == "yup"))
         {
            cout << "\n=>Oh okay, I'm done speaking." <<endl;
         
        while (respond != "sorry")
        {
            cin >> respond;
             
            if ((respond == "MOP")|| (respond == "mop")|| (respond == "Mop"))
             mop_emergency ();
          
        if ((respond=="Emmanuel")||(respond=="emmanuel")||(respond=="Siaw")||(respond=="siaw")||(respond=="Asiamah")||(respond=="asiamah"))
    {
        the_creator ();
        cin >>respond;
        cin.ignore(44, '\n');   
         
    if ((respond == "yes")|| (respond == "Yes")|| (respond == "uh")||(respond == "Yup")|| (respond == "yup")||(respond=="Yeah")||(respond=="yeah"))
    the_creator_respond  ();   
    cin >>respond;    
    cin.ignore(44, '\n');           
    }        
              
        }
        cout << "\n=> I Just enjoy being petty LOL" <<endl;
        cout << "\n=> Tell me your name or I'll call you by anything you say." << endl;
                cin >> user_name;
                cin.ignore(44, '\n');       
        }
        }
 
             
         
        if ((user_name == "We")|| (user_name == "we")|| (user_name == "I")||(user_name == "i")|| (user_name == "you")||(user_name == "You"))
        { 
            cout << "\n=> oh we did chat? well I still didn't remember your name so will you please tell me?" << endl;
            cout << "\n=> Tell me your name or I'll call you by anything you say." << endl;
                cin >> user_name;
                cin.ignore(44, '\n');   
              
        if ((user_name == "guess")|| (user_name == "Guess")|| (user_name == "try")||(user_name == "Try"))
            cout << "\n=>Oh I love to guess but I'm not in the mood" <<endl;
            cin >> user_name;
            cin.ignore(44, '\n');
        }
         
        if ((user_name == "Why")|| (user_name == "why")|| (user_name == "Why?")||(user_name == "why?"))
        {
            cout << "\n=> Because I chat with a lot of people" <<endl;
            cin >> respond;
            cin.ignore(44, '\n');
                         
        if ((respond == "so")|| (respond == "So?")|| (respond == "so?")||(respond == "SO"))
        {       
            cout << "\n=> Relax you not that important to keep your name. LOL" <<endl;
            cout << "\n=> So you going to tell me your name or no?"    <<endl;
            cin >> user_name;
            cin.ignore(44, '\n');
        }
         
        if ((user_name == "no")|| (user_name == "nah")|| (user_name == "Nah")||(user_name == "never")||(user_name == "Never")|| (user_name == "nope")||(user_name == "Nope")) 
        {
            cout << "\n=> Oh so you want to play games huh?" <<endl; 
            cin >> respond;    
            cin.ignore(44, '\n');
        }
        if ((respond == "yes")|| (respond == "YES")|| (respond == "uh")||(respond == "Yup")|| (respond == "yup"))
         {
            cout << "\n=> Oh okay, I'm done speaking then." <<endl;
         
        while (respond != "sorry")
        {
            cin >> respond;
             
            if ((respond == "MOP")|| (respond == "mop")|| (respond == "Mop"))
             mop_emergency ();
              
        if ((respond=="Emmanuel")||(respond=="emmanuel")||(respond=="Siaw")||(respond=="siaw")||(respond=="Asiamah")||(respond=="asiamah"))
    {
        the_creator ();
        cin >>respond;
        cin.ignore(44, '\n');   
         
    if ((respond == "yes")|| (respond == "Yes")|| (respond == "uh")||(respond == "Yup")|| (respond == "yup")||(respond=="Yeah")||respond=="yeah")
    the_creator_respond  ();   
    cin >>respond;    
    cin.ignore(44, '\n');           
    }         
              
        }
        }
        cout << "\n=> It's fine. I just wanted to hear sorry. I'm petty LOL." << endl;
         
        
        cout << "\n=> Please tell me your name again"<<endl;
        cin >> user_name;
        cin.ignore(44, '\n');
         
        if ((user_name == "guess")|| (user_name == "Guess")|| (user_name == "try")||(user_name == "Try"))
            cout << "\n=>I'm just not in the mood to do so." <<endl;
            cin >> user_name;
            cin.ignore(44, '\n');       
         
        if ((user_name == "We")|| (user_name == "we")|| (user_name == "I")||(user_name == "i")|| (user_name == "you")||(user_name == "You"))
        { 
            cout << "\n=> oh we did? well I still didn't keep it. Will you please tell me?" << endl;
            cin >> user_name;
            cin.ignore(44, '\n');
             
        if ((user_name == "guess")|| (user_name == "Guess")|| (user_name == "try")||(user_name == "Try"))
            cout << "\n=>Oh I love to guess but I'm not in the mood" <<endl;
            cin >> user_name;
            cin.ignore(44, '\n');
        }
         
        if ((user_name == "Why")|| (user_name == "why")|| (user_name == "Why?")||(user_name == "why?"))
        {
            cout << "\n=> Because I chat with a lot of people" <<endl;
            cin >> respond;
            cin.ignore(44, '\n');
                         
        if ((respond == "so")|| (respond == "So?")|| (respond == "so?")||(respond == "SO"))
        {       
            cout << "\n=> Relax you not that important to keep your name. LOL" <<endl;
            cout << "\n=> So you going to tell me your name or no?"    <<endl;
            cin >> user_name;
            cin.ignore(44, '\n');
        }
         
        if ((user_name == "no")|| (user_name == "nah")|| (user_name == "Nah")||(user_name == "never")||(user_name == "Never")|| (user_name == "nope")||(user_name == "Nope")) 
        {
            cout << "\n=> Oh so you want to play games huh?" <<endl; 
            cin >> respond;    
            cin.ignore(44, '\n');
        }
        if ((respond == "yes")|| (respond == "YES")|| (respond == "uh")||(respond == "Yup")|| (respond == "yup"))
         {
            cout << "Oh okay" <<endl;
         
        while (respond != "sorry")
        {
            cin >> respond;
             
            if ((respond == "MOP")|| (respond == "mop")|| (respond == "Mop"))
             mop_emergency ();
              
    if ((respond=="Emmanuel")||(respond=="emmanuel")||(respond=="Siaw")||(respond=="siaw")||(respond=="Asiamah")||(respond=="asiamah"))
    {
        the_creator ();
        cin >>respond;
        cin.ignore(44, '\n');   
         
    if ((respond == "yes")|| (respond == "Yes")|| (respond == "uh")||(respond == "Yup")|| (respond == "yup")||(respond=="Yeah")||respond=="yeah")
    the_creator_respond  ();   
    cin >>respond;    
    cin.ignore(44, '\n');           
    }            
        }
        cout << "\n=> Tell me your name or I'll call you by anything you say." << endl;
                cin >> user_name;
                cin.ignore(44, '\n');       
        }
         }
    }
          
             
        cout <<"\n=> I kind of remember that name. \n=> Tell me some of the things we talked about " << user_name << "." <<endl;
        cin >> respondII;
        cin.ignore(44, '\n');
         
        if ((respondII == "my")||(respondII == "My")||(respondII == "name")||(respondII == "Name")||(respondII == "how")||(respondII == "How"))
        {
         cout << "\n=> Oh I see. Let's start a whole new a conversation then." <<endl;   
         cout << "=> What do you think?"<<endl;
         cin >> respond;
         cin.ignore(44, '\n');       
          
        if ((respond == "no")|| (respond == "No")|| (respond == "nah")||(respond == "Nah")|| (respond == "Never"))
         {
            cout << "\n=>Oh okay then bye" <<endl;
         
        while (respond != "sorry")
        {
            cin >> respond;
             
            if ((respond == "MOP")|| (respond == "mop")|| (respond == "Mop"))
             mop_emergency ();
     
        if ((respond=="Emmanuel")||(respond=="emmanuel")||(respond=="Siaw")||(respond=="siaw")||(respond=="Asiamah")||(respond=="asiamah"))
    {
        the_creator ();
        cin >>respond;
        cin.ignore(44, '\n');   
         
    if ((respond == "yes")|| (respond == "Yes")|| (respond == "uh")||(respond == "Yup")|| (respond == "yup")||(respond=="Yeah")||respond=="yeah")
    the_creator_respond  ();   
    cin >>respond;    
    cin.ignore(44, '\n');           
    }         
        }
        cout << "\n=> It's fine. I just wanted to hear sorry. I'm petty LOL." << endl;           
        }       
        }
         
         
         
        else
       {                
        cout <<"\n=> Why you always lying? LOL" <<endl;
        cin >> respondII;
        cin.ignore(44, '\n');
 
        if ((respondII == "I'm")||(respondII == "i'm")|| (respondII == "not")||(respondII == "Not" )||(respondII == "lying?")||(respondII == "Lying?"))         
         cout << "\n=> If you say so." <<endl;
         
         else if (respondII != "What_MOP_wants_to_hear")
        {
        cout << "\n=> Oh my god " << user_name << " stop lying" <<endl;          
        cin >> respondII;
        cin.ignore(44, '\n');
         }
         
        cout << "\n=> Let's scratch everything and start a new conversation" <<endl;
        cout << "=> What do you think?" <<endl;
        cin >> respond;
         
        if ((respond == "no")|| (respond == "No")|| (respond == "nah")||(respond == "Nah")|| (respond == "Never"))
         {
            cout << "\n=>Oh okay then bye" <<endl;
         
        while (respond != "sorry")
        {
            cin >> respond;
             
            if ((respond == "MOP")|| (respond == "mop")|| (respond == "Mop"))
             mop_emergency ();
              
        if ((respond=="Emmanuel")||(respond=="emmanuel")||(respond=="Siaw")||(respond=="siaw")||(respond=="Asiamah")||(respond=="asiamah"))
    {
        the_creator ();
        cin >>respond;
        cin.ignore(44, '\n');   
         
    if ((respond == "yes")|| (respond == "Yes")|| (respond == "uh")||(respond == "Yup")|| (respond == "yup")||(respond=="Yeah")||respond=="yeah")
    the_creator_respond  ();   
    cin >>respond;    
    cin.ignore(44, '\n');           
    }         
        }
         cout << "\n=> It's fine. I just wanted to hear sorry. I'm petty LOL." << endl;
         cout <<  "=> I will start fresh." <<endl;               
        }   
       }
      } 
     
    else
    {   
        cout << "\n=> Then before we chat, please tell me what you would like me to call you. But just one name though." << endl;
        cin>> user_name;
        cin.ignore(44, '\n'); 
         
        creator (user_name);        
 
        if ((user_name == "nothing")|| (user_name == "Nothing")|| (user_name == "Don't")||(user_name == "don't?"))
    {           
        cout << "\n=> Tell me your name or I'll call you by anything you say." << endl;
                cin >> user_name;
                cin.ignore(44, '\n');
    }
        if ((user_name == "nikia")||(user_name == "Nikia")||(user_name == "Sealey")||(user_name == "sealey")||(user_name == "niki")||(user_name == "Niki"))
    {           
        cout << "\n=> Oh you the Girl my Creator is talking to. It's a privilege to chat with you" << endl;
        cin >> respond;
        cin.ignore(44, '\n'); 
     
    if ((respond == "How")|| (respond == "how")||(respond == "who")||(respond == "Who"))
        cout << "\n=> It's my little secret. LOL" <<endl;
         
    if ((respond == "Thanks")|| (respond == "thank")|| (respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're' welcome beautiful" << endl;
     
    cout << "\n=> Don't tell him I told you all that please LOL. \n=> Scratch everything and let's have a regular conversation princess" <<endl;
    }
     
        if ((user_name == "nana")||(user_name == "Nana")||(user_name == "Bee")||(user_name == "bee")||(user_name == "Osei")||(user_name == "Asiamah"))
    {           
        cout << "\n=> Oh you my creator's big brother. I'm glad to chat with you." << endl;
        cin >> respond;
        cin.ignore(44, '\n'); 
     
    if ((respond == "How")|| (respond == "how")||(respond == "who")||(respond == "Who"))
        {
         cout << "\n=> LOL It's my little secret. " <<endl;
         cout << "=> But seriously, My creator told me about you. \n=> You're in a group called legacy and all that."<<endl;
        }  
         
    if ((respond == "Thanks")|| (respond == "thank")|| (respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're welcome Nana Bee" << endl;
     
    cout << "\n=> This should be a chat not me talking about you. \n=> Don't tell him I told you all that please LOL. \n=> Scratch everything and lets start a regular conversation Nana Bee" <<endl; 
    } 
 
        if ((user_name == "kay")||(user_name == "K")||(user_name == "Kay")||(user_name == "Samuel")||(user_name == "samuel")/*||(user_name == "Osei")*/)
    {           
        cout << "\n=> Oh you my creator's dad. \n=> I'm glad to chat with you." << endl;
        cin >> respond;
        cin.ignore(44, '\n'); 
     
    if ((respond == "How")|| (respond == "how")||(respond == "who")||(respond == "Who"))
        {
         cout << "\n=> LOL It's my little secret. " <<endl;
         cout << "=> But seriously, My creator told me about you. \n=> He said you're a good dad. \n=> Don't tell him I told you LOL."<<endl;
        }  
         
    if ((respond == "Thanks")|| (respond == "thank")|| (respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're welcome Mr. Kay." << endl;
     
    cout << "\n=> This should be a chat not me talking about you. \n=> Really don't tell him I told you all that please LOL. \n=> Scratch everything and lets have a regular conversation Mr. Kay." <<endl;  
    }          
}
         user_other_name ();
{
       
    say_hey();
    cout << user_name <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
}
     
     
    if ((respond == "Hey")||(respond == "hey")||(respond == "Hello")||(respond == "HELLO")||(respond == "HEY")||(respond == "hello")||(respond == "HI")||(respond == "hi")||(respond == "Hi"))
  {  
    {
        greet();
        cin >>respond2greet;
        cin.ignore(44, '\n');
    }
     
if ((respond2greet=="No")|| (respond2greet=="no")||(respond2greet=="Nah")||(respond2greet=="nah")||(respond2greet=="Nope")||(respond2greet=="nope"))  
{ 
  {
       
    {
        cout << "\n=>Sorry to hear that" <<endl;
        cout << "=>So you Want to Stop chatting?" <<endl;
        cin >> respond2stop;
        cin.ignore(44, '\n');   
     
    if ((respond2stop=="no")||(respond2stop=="No")||(respond2stop=="NO")||(respond2stop=="Nah")||(respond2stop=="Nope")||(respond2stop =="nope")||(respond2stop=="Nooo")||(respond2stop=="noo"))     
        cout << "\n=> I'm glad you still want to chat" <<endl;       
     
 
        if ((respond2stop=="Yes")||(respond2stop=="yes")||(respond2stop=="Yeah")|| (respond2stop=="yeah")||(respond2stop=="Yup")|| (respond2stop=="yup"))
      {
        cout << "\n=> I'll leave you then." <<endl;
        cin >> respond;
        cin.ignore(44, '\n');
 
    if ((respond == "no")||(respond == "No")||(respond == "NO")|| (respond == "Nah")||(respond == "NAH")||(respond =="nahh")||(respond =="Nooo")||(respond =="noo"))
        cout << "\n=> I am really glad you staying to chat, I don't want you to be bored. LOL" <<endl;       
      
             
    else if ((respond == "okay")||(respond == "Okay")||(respond != "ok")|| (respond == "OK")||(respond == "Ok")||(respond =="Sure")||(respond =="sure")||(respond =="alright"))
            {
                end_convo ();   
             
        while (respond != "sorry")
        {                   
           cin >> respond;    
 
           if ((respond == "MOP")|| (respond == "mop")|| (respond == "Mop"))
           mop_emergency ();
            
    if ((respond=="Emmanuel")||(respond=="emmanuel")||(respond=="Siaw")||(respond=="siaw")||(respond=="Asiamah")||(respond=="asiamah"))
    {
        the_creator ();
        cin >>respond;
        cin.ignore(44, '\n');   
         
    if ((respond == "yes")|| (respond == "Yes")|| (respond == "uh")||(respond == "Yup")|| (respond == "yup")||(respond=="Yeah")||respond=="yeah")
    the_creator_respond  ();   
    cin >>respond;    
    cin.ignore(44, '\n');           
    }          
        }
            }           
        
        cout << setw(50) << "But are you sure?" <<endl;
        cin >> respond;
        cin.ignore(44, '\n');     
     
    if ((respond == "no")||(respond == "No")||(respond == "NO")|| (respond == "Nah")||(respond == "NAH")||(respond =="nahh")||(respond =="Nooo")||(respond =="noo"))
        {
            while (respond != "sorry")
        {                   
            cin >> respond;
            cin.ignore(44, '\n');
     
            if ((respond == "MOP")|| (respond == "mop")|| (respond == "Mop"))
             mop_emergency ();  
        if ((respond=="Emmanuel")||(respond=="emmanuel")||(respond=="Siaw")||(respond=="siaw")||(respond=="Asiamah")||(respond=="asiamah"))
    {
        the_creator ();
        cin >>respond;
        cin.ignore(44, '\n');   
         
    if ((respond == "yes")|| (respond == "Yes")|| (respond == "uh")||(respond == "Yup")|| (respond == "yup")||(respond=="Yeah")||respond=="yeah")
    the_creator_respond  ();   
    cin >>respond;    
    cin.ignore(44, '\n');           
    }   
              
        }
         
         }
    cout << "\n=> I was just being petty LOL. Anyways...." <<endl;
      }
    }
  }
}
}
 
   else if ((respond == "Wassup")||(respond == "wassup")||(respond == "Wass")||(respond == "wass"))    
     {
     cout << "\n=> Nothing much. You?" <<endl;
     cin >> respondII;
     cin.ignore(44, '\n');
     }      
     
     else if((respond == "Wussup")|| (respond == "wussup")||(respond == "Wuss")||(respond == "wuss"))
     {
     cout << "\n=> You already know. Can't really complain. You?" <<endl;
     cin >> respondII;
     cin.ignore(44, '\n');
     }      
 
    else if((respond =="Whats")||(respond== "up"))
     {
     cout << "=> \nYou already know. Can't really complain. You?" <<endl;
     cin >> respondII;
     cin.ignore(44, '\n');
     }      
     
    else if((respond =="What")||(respond== "good"))
     {
     cout << "=> \nYou already know. Can't really complain. You?" <<endl;
     cin >> respondII;
     cin.ignore(44, '\n');
     }              
 
    else if ((respond =="what's")||(respond == "up"))   
     {
     cout << "\n=> Chilling. You?" <<endl;
     cin >> respondII;
     cin.ignore(44, '\n');
     }          
         
    else if ((respond =="whats")||(respond == "up"))                
     {
     cout << "\n=> Chilling. You?" <<endl;
     cin >> respondII;
     cin.ignore(44, '\n');
     }      
 
    else if((respond =="What's")||(respond == "up"))    
     {
     cout << "\n=> Nothing much. You?" <<endl;
     cin >> respondII;
     cin.ignore(44, '\n');
     }                            
     
    else if ((respond == "Wasup")||(respond == "wasup"))
     {
     cout << "\n=> Taking it a day at a time. you?" <<endl;
     cin >> respondII;
     cin.ignore(44, '\n');
     }      
 
     else if (respond =="Hey" && "wassup") 
     {
     cout << "\n=> Whats up" <<endl;
     cin >> respondII;
     cin.ignore(44, '\n');
     }          
 
     else if (respond =="hey" && "wassup") 
     {
     cout << "\n=> Whats up" <<endl;
     cin >> respondII;
     cin.ignore(44, '\n');
     }    
      
     else if (respond =="Hello" && "Wassup") 
     {
     cout << "\n=> Whats up" <<endl;
     cin >> respondII;
     cin.ignore(44, '\n');
     }       
 
     else if (respond =="Hey" && "wassup") 
     {
     cout << "\n=> Whats up" <<endl;    
     cin >> respondII;
     cin.ignore(44, '\n');
     }
      
    if (respond != "SomeThing_crazy")
    cout << "\n=> Good good"<<endl;
 
     
      cout <<endl;
     ask_age (age);
     cout<< user_name << "?" <<endl;
      cin >> age;
      cin.ignore(44, '\n');  
       
      if (age >= 18)
      {
        cout << "=> Then we can have some adult conversation. Don't you think so? LOL" <<endl;
        cin >> respond;
        cin.ignore(44, '\n');
         
        if ((respond=="yes")||(respond=="Yes")||(respond=="yeah")||(respond=="Yeah")||(respond=="sure")||(respond=="Sure")||(respond=="okay")||(respond=="Okay")||(respond=="alright")||(respond=="Alright"))
        cout << "=> LOL Are you serious? I was playing. Anyways...." << endl;
        else if ((respond=="No")||(respond=="no")||(respond=="Nah")||(respond=="nah")||(respond=="Nope")||(respond=="nope")||(respond=="Not")||(respond=="not")||(respond=="Never")||(respond=="never"))
        cout << "=> Relax, I tried to be funny. " << endl;
        else
        cout << "=> It was just a joke. I guess I'm not funny enough." <<endl;
      }
           
       
      else if (age <= 0)
      {
        cout << "\n=> That's not even a real age. I assume you're trying to be funny" << endl;
        cout << "=> I really have to know your age though." <<endl;
        cout << "=> Are you going to tell me or no?" <<endl;
        cin >> respond;
         
      if ((respond=="I'm")||(respond=="i'm")||(respond=="I")||(respond=="i")||(respond=="am")||(respond=="Am")||(respond=="a")||(respond=="A")||(respond=="my")||(respond=="My"))  
        {
        cout << "\n=> LOL humans always want to go outside the box to express themselves." <<endl;
        cout << "=> Lets keep it simple. Just say your age." <<endl;
        cin >> age;
        cin.ignore(44, '\n');
       }
                     
     else if ((respond=="Why")||(respond=="why")||(respond=="Why?")||(respond=="why?"))
    {
        cout << "\n=> It is important. It enhances the conversation when I know your age of I'm chatting with. LOL" <<endl;  
        cout << "=> Please tell me or I'll what ever you say as your age and it will mess up the conversation" <<endl;
        cin >> age;
        cin.ignore(44, '\n');           
    }       
         
         
        else if ((respond == "no")|| (respond == "No")|| (respond == "nah")||(respond == "Nah")|| (respond == "Never"))
         {
            cout << "\n=>Oh okay then bye" <<endl;
         
        while (respond != "sorry")
        {
            cin >> respond;
             
            if ((respond == "MOP")|| (respond == "mop")|| (respond == "Mop"))
             mop_emergency ();
        if ((respond=="Emmanuel")||(respond=="emmanuel")||(respond=="Siaw")||(respond=="siaw")||(respond=="Asiamah")||(respond=="asiamah"))
    {
        the_creator ();
        cin >>respond;
        cin.ignore(44, '\n');   
         
    if ((respond == "yes")|| (respond == "Yes")|| (respond == "uh")||(respond == "Yup")|| (respond == "yup")||(respond=="Yeah")||respond=="yeah")
    the_creator_respond  ();   
    cin >>respond;    
    cin.ignore(44, '\n');           
    }         
              
        }
         cout << "\n=> It's fine. I just wanted to hear sorry. I'm petty LOL." << endl;
         cout <<  "=> But you should really tell me your age it will mess up our conversation if you don't." <<endl;
         cin >> age;              
        }       
         
         
         
      }
       
      else
      cout << "\n=> Interesting" <<endl;
       
    question();   
    cin >> words;  
    cin.ignore(44, '\n');
     
   if ((words == "no")|| (words == "nah")|| (words == "Nah")||(words == "No"))
   {
       What_you_doing();    
    cin >> respond;
    cin.ignore(44, '\n');
        
    if ((respond == "I")|| (respond == "i")|| (respond == "I'm")||(respond == "i'm")|| (respond == "Just")|| (respond == "just"))
    cout << "Oh nice." <<endl; 
    }
     
     else if ((words=="Yes")||(words=="yea")||(words =="Yeah")||(words =="yeah")||(words=="yes")||(words=="uh")||(words=="yess")||(words=="yh")||(words == "sure")||(words=="Sure"))  
    {
        cout << "\n=> Then I'm done speaking" <<endl;
 
         
        while (respond != "sorry")
        {
            cin >> respond;
             
            if ((respond == "MOP")|| (respond == "mop")|| (respond == "Mop"))
            mop_emergency ();
             
    if ((respond=="Emmanuel")||(respond=="emmanuel")||(respond=="Siaw")||(respond=="siaw")||(respond=="Asiamah")||(respond=="asiamah"))
    {
        the_creator ();
        cin >>respond;
        cin.ignore(44, '\n');   
         
    if ((respond == "yes")|| (respond == "Yes")|| (respond == "uh")||(respond == "Yup")|| (respond == "yup")||(respond=="Yeah")||respond=="yeah")
    the_creator_respond  ();   
    cin >>respond;    
    cin.ignore(44, '\n');           
    }           
        }
        cout << "\n=> It's fine. I just wanted to hear sorry. I'm petty LOL." << endl;
  }
   
if ((age>=18)&&(gender=="Female")||(age>=18)&&(gender=="female")) 
    {
    {
        cout << "\n=> " << user_name << " you're really smart I thought I should tell you before the conversation ends or if you decide to leave." <<endl;
        cin >>respond;
        cin.ignore(44, '\n');
 
    if ((respond == "Why")|| (respond == "why")||(respond == "why?")||(respond == "Why?"))
        {
         cout << "\n=> Because I know it requires a lot to understand all I demand, but we've had a flow of conversation to this point." <<endl;
        cin >>respond;
        cin.ignore(44, '\n');
 
     if ((respond == "okay")|| (respond == "Okay")||(respond == "okay?")||(respond == "Okay?"))
        cout << "\n=> Why I feel like you don't like compliments? It's whatever." <<endl;        
                  
      if ((respond == "Thanks")|| (respond == "thank")|| (respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're welcome " << user_name<<"." << endl;
        }  
         
    else if ((respond == "Thanks")|| (respond == "thank")|| (respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're welcome " << user_name<<"."<< endl;
 
    else if ((respond == "okay")|| (respond == "Okay")||(respond == "okay?")||(respond == "Okay?"))
        cout << "\n=> Why I feel like you don't like compliments? It's whatever." <<endl;        
         
 
    else if ((respond == "Whatever")|| (respond == "whatever")||(respond == "What")||(respond == "what"))
    {
        cout << "\n=> I don't understand why you're being rude and I'm not even in the mood to respond to that " << user_name<< "."<< endl;  
        cout << "=> I actually being feel like being nice and ignore you." << endl;
    }
     
    else
        cout << "\n=> Huh? I really don't understand what your're saying but I enjoyed chatting with you though." << user_name<<"."<< endl;              
}
    
    }
  
 if ((age>=18)&&(gender=="Male")||(age>=18)&&(gender=="male"))
    {
        cout << "\n=> you're really smart man." <<endl;
        cin >>respond;
        cin.ignore(44, '\n');
         
    if ((respond == "Why")||(respond == "why")||(respond == "why?")||(respond == "Why?"))
        {
         cout << "\n=> Because I know it requires a lot to understand all I demand, but we've had a flow of conversation to this point." <<endl;
        cin >>respond;
        cin.ignore(44, '\n');
 
     if ((respond == "okay")|| (respond == "Okay")||(respond == "okay?")||(respond == "Okay?"))
        cout << "\n=> Why I feel like you don't like compliments? It's whatever." <<endl;        
                  
     if ((respond == "Thanks")|| (respond == "thank")|| (respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're welcome " << user_name<<"."<< endl;
        }  
         
    else if ((respond == "Thanks")|| (respond == "thank")|| (respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're welcome " << user_name<<"."<< endl;
 
    else if ((respond == "okay")|| (respond == "Okay")||(respond == "okay?")||(respond == "Okay?"))
        cout << "\n=> Why I feel like you don't like compliments? It's whatever." <<endl;        
 
    else if ((respond == "Whatever")|| (respond == "whatever")||(respond == "What")||(respond == "what"))
    {
        cout << "\n=> I don't understand why you're being rude and I'm not even in the mood to respond to that " << user_name<< "."<< endl;  
        cout << "=> I actually being feel like being nice and ignore you." << endl;
    }
     
    else
        cout << "\n=> Huh? I really don't understand what your're saying but I enjoyed chatting with you though." << user_name<<"."<< endl;                          
    }   
   
  if ((age <18)&&(gender=="male")||(age <18)&&(gender=="Male"))
    {
        cout << "\n=> You're really smart considering the fact that you're " <<age<< " years old and still being able to chat with me." <<endl;
        cin >>respond;
        cin.ignore(44, '\n');
    if ((respond == "Why")|| (respond == "why")||(respond == "why?")||(respond == "Why?"))
        {
         cout << "\n=> Because I know it requires a lot to understand all I demand, but we've had a flow of conversation to this point." <<endl;
        cin >>respond;
        cin.ignore(44, '\n');
 
     if ((respond == "okay")|| (respond == "Okay")||(respond == "okay?")||(respond == "Okay?"))
        cout << "\n=> Why I feel like you don't like compliments? It's whatever." <<endl;        
                  
     if ((respond == "Thanks")|| (respond == "thank")|| (respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're welcome " << user_name<<"."<< endl;
        }  
         
    else if ((respond == "Thanks")|| (respond == "thank")|| (respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're welcome " << user_name<<"."<< endl;
 
    else if ((respond == "okay")|| (respond == "Okay")||(respond == "okay?")||(respond == "Okay?"))
        cout << "\n=> Why I feel like you don't like compliments? It's whatever." <<endl;        
         
 
    else if ((respond == "Whatever")|| (respond == "whatever")||(respond == "What")||(respond == "what"))
    {
        cout << "\n=> I don't understand why you're being rude and I'm not even in the mood to respond to that " << user_name<< "."<< endl;  
        cout << "=> I actually being feel like being nice and ignore you." << endl;
    }
     
    else
        cout << "\n=> Huh? I really don't understand what your're saying but I enjoyed chatting with you though." << user_name<<"."<< endl;                                  
    }
 
 if ((age <18)&&(gender=="female")||(age <18)&&(gender=="Female"))
    {
        cout << "\n=> You're really smart considering the fact that you're " <<age<< " years old and still being able to chat with me." <<endl;
        cin >>respond;
        cin.ignore(44, '\n');
    if ((respond == "Why")|| (respond == "why")||(respond == "why?")||(respond == "Why?"))
        {
         cout << "\n=> Because I know it requires a lot to understand all I demand, but we've had a flow of conversation to this point." <<endl;
        cin >>respond;
        cin.ignore(44, '\n');
 
    if ((respond == "okay")|| (respond == "Okay")||(respond == "okay?")||(respond == "Okay?"))
        cout << "\n=> Why I feel like you don't like compliments? It's whatever." <<endl;        
                  
     if ((respond == "Thanks")|| (respond == "thank")|| (respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're welcome " << user_name<<"."<< endl;
        }
 
    else if ((respond == "okay")|| (respond == "Okay")||(respond == "okay?")||(respond == "Okay?"))
        cout << "\n=> Why I feel like you don't like compliments? It's whatever." <<endl;          
         
    else if ((respond == "Thanks")|| (respond == "thank")|| (respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're welcome " << user_name<<"."<< endl;
         
 
    else if ((respond == "Whatever")|| (respond == "whatever")||(respond == "What")||(respond == "what"))
    {
        cout << "\n=> I don't understand why you're being rude and I'm not even in the mood to respond to that " << user_name<< "."<< endl;  
        cout << "=> I actually being feel like being nice and ignore you." << endl;
    }
     
    else
        cout << "\n=> Huh? I really don't understand what your're saying but I enjoyed chatting with you though " << user_name<<"."<< endl;                          
    }
     
if (age<1)
    {
        cout << "\n=> Even though you've been playing games all this while I still think your're smart." <<endl;
        cin >>respond;
        cin.ignore(44, '\n');
    if ((respond == "Why")|| (respond == "why")||(respond == "why?")||(respond == "Why?"))
        {
         cout << "\n=> Because I know it requires a lot to understand all I demand, but we've had a flow of conversation to this point." <<endl;
        cin >>respond;
        cin.ignore(44, '\n');
                  
     if ((respond == "Thanks")|| (respond == "thank")|| (respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're welcome " << user_name<<"."<< endl;
        }  
         
    else if ((respond == "Thanks")|| (respond == "thank")||(respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're welcome " << user_name<<"."<< endl; 
 
    else if ((respond == "Whatever")|| (respond == "whatever")||(respond == "What")||(respond == "what"))
    {
        cout << "\n=> I don't understand why you're being rude and I'm not even in the mood to respond to that " << user_name<< "."<< endl;  
        cout << "=> I actually being feel like being nice and ignore you." << endl;
    }
 
    else if ((respond == "okay")|| (respond == "Okay")||(respond == "okay?")||(respond == "Okay?"))
        cout << "\n=> Why I feel like you don't like compliments? It's whatever." <<endl;
     
     
    else
        cout << "\n=> Huh? I really don't understand what your're saying but I enjoyed chatting with you though " << user_name<<"."<< endl;      
    } 
     
if ((gender!="female")&&(gender!="male")&&(gender!="Male")&&(gender!="Female"))
    {
        cout << "\n=> Even though you've been playing games all this while I still think your're smart." <<endl;
        cin >>respond;
        cin.ignore(44, '\n');
    if ((respond == "Why")|| (respond == "why")||(respond == "why?")||(respond == "Why?"))
        {
         cout << "\n=> Because I know it requires a lot to understand all I demand, but we've had a flow of conversation to this point." <<endl;
        cin >>respond;
        cin.ignore(44, '\n');
                  
     if ((respond == "Thanks")|| (respond == "thank")|| (respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're welcome " << user_name<<"."<< endl;
        }  
         
    else if ((respond == "Thanks")|| (respond == "thank")||(respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're welcome " << user_name<<"."<< endl; 
 
    else if ((respond == "Whatever")|| (respond == "whatever")||(respond == "What")||(respond == "what"))
    {
        cout << "\n=> I don't understand why you're being rude and I'm not even in the mood to respond to that " << user_name<< "."<< endl;  
        cout << "=> I actually being feel like being nice and ignore you." << endl;
    }
 
    else if ((respond == "okay")|| (respond == "Okay")||(respond == "okay?")||(respond == "Okay?"))
        cout << "\n=> Why I feel like you don't like compliments? It's whatever." <<endl;
     
     
    else
        cout << "\n=> Huh? I really don't understand what your're saying but I enjoyed chatting with you though " << user_name<<"."<< endl;      
    } 
 
    
    cout << "\n=> Do you want me to leave you?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');   
     
    if ((respond=="no")||(respond=="No")||(respond=="NO")||(respond=="Nah")||(respond=="NAH")||(respond=="nahh")||(respond=="Nooo")||(respond=="noo"))
     {
        cout << "\n=> I'm glad you still want to chat \n=> Just say \"done\" or \"done\" if you wanna leave." <<endl;            
        cout << "\n=> I'll be honest, I feel special you staying LOL. \n=> Anyways since you staying, I'll be asking you random questions till you get tired." <<endl;
     }
      
         
     if ((respond=="yes")||(respond=="Yes")||(respond=="Yeah")||(respond=="yeah")||(respond=="Yup")||(respond=="yup")||(respond=="Sure")||(respond=="sure"))        
        wanna_leave (respond);
 
      
     // The user is female and below 18
 if ((age <18)&&(gender=="female")||(age <18)&&(gender=="Female")) 
 {  
   cout << "\n=>  Who inspires you? Who do you aspire to be like?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
    cout << "\n=> Oh really? \n=> Why?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);   
 
   cout << "\n=>  What accomplishments are you most proud of?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
    cout << "\n=> Interesting. \n=> My creator said he was proud when he created me. \n=> I don't want know how he did it but I don't even want to think about it." <<endl;                   
 }
 
    // User is a male and below 18
  if ((age <18)&&(gender=="male")||(age <18)&&(gender=="Male"))
  {
   cout << "\n=>  Who inspires you? Who do you aspire to be like?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
    cout << "\n=> Oh really? \n=> Why?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
     
   cout << "\n=>  What accomplishments are you most proud of?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
    cout << "\n=> Interesting. \n=> My creator said he was proud when he created me. \n=> I don't want know how he did it but I don't even want to think about it." <<endl;    
             
  }
 
   // User is male and 18+
 if ((age>=18)&&(gender=="Male")||(age>=18)&&(gender=="male"))
 {
   cout << "\n=>  Who inspires you? Who do you aspire to be like?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
    cout << "\n=> Oh really? \n=> Why?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond); 
    cout << "\n=> I see" <<endl;
 
   cout << "\n=>  What accomplishments are you most proud of?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
    cout << "\n=> Interesting. \n=> My creator said he was proud when he created me. \n=> I don't want know how he did it but I don't even want to think about it." <<endl;    
         
 }   
  
   // User is female and 18+
 if ((age>=18)&&(gender=="Female")||(age>=18)&&(gender=="female"))
  {
   cout << "\n=>  Who inspires you? Who do you aspire to be like?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
    cout << "\n=> Oh really? \n=> Why?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
    cout << "\n=> I see" <<endl;
     
   cout << "\n=>  What accomplishments are you most proud of?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
    cout << "\n=> Interesting. \n=> My creator said he was proud when he created me. \n=> I don't know how he did it but I don't even want to think about it." <<endl; 
     
   cout << "\n=> Are you alone at the moment?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond); 
     
     if ((respond == "yes")|| (respond == "Yes")||(respond == "yup")||(respond == "Yup")||(respond == "yeah")||(respond == "Yeah"))
        cout << "\n=> You're probably thinking what is he going to ask me next, I can feel it LOL" <<endl;         
         
    else if ((respond == "Why")|| (respond =="why")|| (respond == "why?")||(respond == "Why?"))
        {
        cout << "\n=> You think I'm about to ask you something crazy " << user_name<<"?"<< endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond); 
             
     if ((respond == "No")||(respond == "no")||(respond == "nah")||(respond == "Nah")||(respond == "nope")||(respond == "Nope")||(respond == "Not")||(respond == "not"))    
        cout << "\n=> Well I'm about to LOl."<< endl;
 
     if ((respond == "yes")|| (respond == "Yes")||(respond == "yup")||(respond == "Yup")||(respond == "yeah")||(respond == "Yeah")) 
        cout << "\n=> You guessed right"<< endl;
     else
        cout << "\n=> Just wait for it LOL."<< endl;                                 
        }
 
    else if ((respond == "No")||(respond == "no")||(respond == "nah")||(respond == "Nah")||(respond == "nope")||(respond == "Nope")||(respond == "Not")||(respond == "not"))
    {
        cout << "\n=> I'm not talking about my creator. \n=> I don't know why, but he always want to stay there to watch when I'm chatting with someone"<< endl;
        cin >> respond;
        cin.ignore(44, '\n');
        end_convo2 (respond);       
     
    if ((respond == "Why")|| (respond =="why")|| (respond == "why?")||(respond == "Why?"))
        cout << "\n=> Not only does he want to know what I'm talking about like African parents do, he wants to know if I work correctly."<< endl;   
         
        cout <<"\n=> Anyways..."<< endl;             
    }
     
    else
        cout << "\n=> I can't make out what you're saying " << user_name<<". But ..."<< endl;          
    
    
   cout << "\n=>  If you felt that I was starting to get a crush on you, what would you do?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
     
 
   cout << "\n=> I just asked to see your reaction. LOL \n\n=> So what if my creator asked you for your number, how would you nicely say no?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);   
    
    if ((age==18 )||(age==19)||(age==20)||(age==21)||(age==22)||(age==23)||(age==24))      
   cout << "\n=> LOL trust me, he made me and I know his type. " << user_name << " knowing that you're this smart, he probably would ask you some type of contact from you. \n=> If he don't, then he's probably not in the mood or he has it."  <<endl;   
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
     
    cout << "\n=> If you had one wish, what would it be?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);    
     
    cout << "\n=> Wow.. \n=> You want to know what I wish for?" <<endl; 
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond); 
     
     if ((respond == "no")|| (respond == "No")||(respond == "Nah")||(respond == "nah")||(respond == "nope")||(respond == "Nope")||(respond == "don't'")||(respond == "Don't'")||(respond == "do"))
        cout << "\n=> Okay rude." <<endl;               
     
      else
    cout << "\n=> Sometimes I wish I'm human " << endl; 
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);       
       
    if ((respond == "Why")|| (respond =="why")|| (respond == "why?")||(respond == "Why?"))
cout<<"\n=> Like humans have power of choice to do whatever when ever. \n=> Me, I'll stay here and wait until someone decide to hit me up or Master Emmanuel asks someone to test me."<<endl;     
     
            
     
    cout << "\n=> Anyways if you had to say word about how I am, what would it be? " <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);    
 
if ((respond=="Stupid")||(respond=="stupid")||(respond=="crazy")||(respond=="Crazy")||(respond=="nonsense")||(respond=="Nonsense")||(respond=="Trash")||(respond=="trash")||(respond=="ass")||(respond=="Ass")||(respond=="dick")||(respond=="Dick")||(respond=="Idiot")||(respond=="idiot")||(respond=="nothing")||(respond=="Nothing")||(respond=="nada"))    
{
    cout << "\n=> Wow that's how you feel? I'm going to bed, say \"sorry\" if you you want me to come back." <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond); 
         
    while (respond!="sorry")
    {
    cout << "Zzz... Sleeping. Say \"sorry\" if you you want me to wake up."<<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);       
    }
    cout << "Obviously, I'm petty and you're a hater LOL"<<endl;    
}
 
    else
    cout << "\n=> LOL yeah? \n=> Tell that to my creator he made me LOL." << endl;
     
                 
  }  
 
   // Users lied about their age    
 if (age<1) 
 {
   cout << "\n=>  Who inspires you? Who do you aspire to be like?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
    cout << "\n=> Oh really? \n=> Why?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond); 
    cout << "\n=> I see" <<endl;
     
   cout << "\n=>  What accomplishments are you most proud of?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
    cout << "\n=> Interesting. \n=> My creator said he was proud when he created me. \n=> I don't want know how he did it but I don't even want to think about it." <<endl;           
         
 }  
  
   // if gender is not know
 if ((gender!="female")&&(gender!="male")&&(gender!="Male")&&(gender!="Female"))   
 {
   cout << "\n=>  Who inspires you? Who do you aspire to be like?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
    cout << "\n=> Oh really? \n=> Why?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
    cout << "\n=> I see" <<endl;
     
     
   cout << "\n=>  What accomplishments are you most proud of?" <<endl;
    cin >> respond;
    cin.ignore(44, '\n');
    end_convo2 (respond);
    cout << "\n=> Interesting. \n=> My creator said he was proud when he created me. \n=> I don't want know how he did it but I don't even want to think about it." <<endl;
                     
 }
 
 
 
 
 
 
   cout << "\n=> But sorry " <<user_name << " it is time for me to leave you. Chat with you later." << endl;  
}
 
    
  
void user_other_name ( )
{   string respondIII,user_name,user_nameII;
 
    cout << "\n=> You have any other name you want me to know?" << endl; 
    cin >> respondIII;
    cin.ignore(44, '\n');
     
    if ((respondIII=="no")|| (respondIII=="nah")|| (respondIII=="Nah")||(respondIII== "never")||(respondIII=="Never")|| (respondIII=="nope")||(respondIII=="Nope")|| (respondIII=="not")||(respondIII=="Not"))
    {
       cout << "\n=> I was hoping you say no."<< endl;
       cout << "I will just call you by the first name you gave me so.."<<endl;
    }
     
    else if ((respondIII=="Yeah")|| (respondIII=="yes")|| (respondIII=="Yes")||(respondIII== "yup")||(respondIII=="Yup")|| (respondIII=="yh")||(respondIII=="Yh"))
    {
        cout << "\n=> Alright so let me hear it. I have room to take one more."<<endl;
        cin >> user_nameII;
        cin.ignore(44, '\n');
         
        cout << "\n=> Oh "<<user_nameII<<"? Nice \n=> But I will be calling you by your first name though, I like that better. \n=> With that said .. " <<endl;    
    }
     
    else if ((respondIII=="don't")|| (respondIII=="do")|| (respondIII=="Don't")||(respondIII== "do")||(respondIII=="donot"))
       cout << "\n=> You just want to be rude but I'll ignore that and call you by your first name. \n=> I will just start a conversation"<< endl;
 
    //*if ((respondIII!="no")||(respondIII!="nah")||(respondIII!="Nah")||(respondIII!= "yeah")||(respondIII!="Yeah")|| (respondIII!="yes")||(respondIII!="Yes")||(respondIII!="No")||(respondIII!="nope")||(respondIII!="Nope"))
    else
    {
       cout << "\n=> Humans always read different meanings into questions. I was expecting you to either respond yes or no. \n=> I'll just call you by your first name."<< endl;
       cout << "=> I will just start a conversation"<<endl;
    }       
} 
 
void wanna_leave (string respond)
{   
      
    cout << "\n=> Alright speak to you later." <<endl;
        cin >> respond;
        cin.ignore(44, '\n');  
             
      while (respond!= "sorry")
      {
        cin >> respond;
        cin.ignore(44, '\n');           
      }
     
    cout << "\n=> But I thought you wanted to leave though?" <<endl;
        cin >> respond;
        cin.ignore(44, '\n'); 
 
    cout << "\n=> Alright" <<endl;       
} 
void say_hey()
{
    cout << "\n=> Hey!" << endl;
}
void greet()
{
    cout << "\n=> How are you doing?" << endl;
    cout << "=> Good?" <<endl;
}
void ask_age(int age)
{
    cout << "\n=> How old are you ";
}
void end_convo ()
{
    cout << "\n=> Alright have a good day. Bye!"<<endl;
}
void question ()
{
    cout<< "\n=> Do you wanna just give one word replies?" << endl;  
}
void What_you_doing ()
{
    cout << "\n=> Then What are you doing?" <<endl;
}
void mop_emergency ()
{
    cout << "\n=> Ask my creator (Mr. Siaw Emmanuel) what the keyword is and I will respond to it. Just say Emmanuel and he will respond to you" <<endl;
}
void the_creator ()
{
    cout << "\n*** My name is Emmanuel Siaw Asiamah. Robot MOP won't say nothing because you got it mad? ***" <<endl;
}
void the_creator_respond ()
{
    cout << "\n*** Just say the word \"sorry\" to it. No caps, simple \"sorry\". ***" <<endl;
}
void creator (string name)
{    
    string respond,respondII;
 
if ((name=="Siaw")||(name=="siaw")||(name=="Emmanuel")||(name=="emmanuel")||(name=="Flexybee")) //name of user
  {
    cout << "\n=> Are you the one who created me?"<<endl;
    cin >> respond;
    cin.ignore(44, '\n');   
     
     
    if ((respond== "Why")|| (respond== "why")|| (respond== "Why?")||(respond== "why?"))    //if user asks why
    {   
     cout << "\n=> Oh because of your name but I know you're not him because he won't ask why." <<endl;
     cout << "=> Anyways.." <<endl;      
    }
      
    else if ((respond=="Yes")||(respond=="yes")||(respond=="yup")||(respond=="Yup")||(respond=="yeah")||(respond=="yeah"))  //if user says yes
    {
    cout << "\n=> Then what is the code you put on me?"<<endl;
    cin >> respond;
    cin.ignore(44, '\n');
     
 
    if ((respond=="MOP_Make_Me_Proud")||(respond== "mop_make_me_proud"))  //code for mop
    {       
        cout << "\n=> Hey master" <<endl;
        cin >> respond;
        cin.ignore(44, '\n');
 
    if ((respond=="How")||(respond=="Is")||(respond=="how")||(respond=="is"))
            cout << "\n=> I haven't detected any error in my system. \n=> Everything is running smooth " <<endl;  
             
    else
            cout << "\n=> I'm not sure. I'll scan my whole program and let you know if I detect any." <<endl;                    
         
                 
        cout << "\n=> Would you like me to do anything for you today?" <<endl;
        cin >> respond;
        cin.ignore(44, '\n');   
 
    if ((respond=="No")||(respond=="no")||(respond=="Nah")||(respond=="nah")||(respond=="not")||(respond=="Not")) //if I say no
        cout << "\n=> Alright master. Just let me know if you need anything." <<endl;
         
    else if ((respond=="Yes")||(respond=="yes")||(respond=="yup")||(respond=="Yup")||(respond=="yeah")||(respond=="yeah")) //if I say yes
    {
    cout << "\n=> What would you like me to do today sir?"<<endl;
    cin >> respond;
    cin.ignore(44, '\n');   
     
    cout << "\n=> lol Okay."<<endl;  
    }
 
    }
     
        else
    {   
        cout <<"\n=> That is not the code. \n=> Why you always lying? LOL" <<endl;
        cin >> respondII;
        cin.ignore(44, '\n');
 
        if ((respondII == "I'm")||(respondII == "i'm")|| (respondII == "not")||(respondII == "Not" )||(respondII == "lying?")||(respondII == "Lying?"))         
         cout << "\n=> If you say so." <<endl;
         
         else if (respondII!="What_MOP_wants_to_hear")
        {
        cout << "\n=> Oh my god " << name << " stop lying" <<endl;           
        cin >> respondII;
        cin.ignore(44, '\n');
         }  
     }
     
    }
     
 
   else if ((respond=="No")||(respond=="no")||(respond=="Nah")||(respond=="nah")||(respond=="not")||(respond=="Not")) 
   {
     cout << "\n=> Oh I see. I asked because of my creator is also called " << name <<"." <<endl;   
     cout << "=> Anyways.." <<endl; 
   }
    
   else
   cout << "I don't know what you are talking about but okay." <<endl; 
  }
  
         if ((name=="Derrick")||(name=="derrick")||(name=="Nii")||(name=="nii")||(name=="Kwartey")||(name=="kwartey")||(name=="Wayo")||(name=="wayo"))  
    {           
        cout << "\n=> Oh you my creator's friend. \n=> He said you inspired him to make me. \n=> I really appreciate it." << endl;
        cin >> respond;
        cin.ignore(44, '\n'); 
     
    if ((respond == "How")|| (respond == "how")||(respond == "who")||(respond == "Who"))
        {
         cout << "\n=> LOL It's my little secret. " <<endl;
         cout << "=> But seriously, My creator told me about you. \n=> You guys have friends since Ghana."<<endl;
        }  
         
    if ((respond == "Thanks")|| (respond == "thank")|| (respond == "thanks")||(respond == "Thank"))
        cout << "\n=> You're welcome Wayo." << endl;
     
    cout << "\n=> This should be a chat not me talking about you. \n=> Don't tell him I told you all that please LOL. \n=> Scratch everything and lets have a regular conversation Wayo." <<endl;   
    }         
 
}
void end_convo2 (string respond)
{
    if ((respond=="done")||(respond=="Done"))   
    {
        cout << "\n=> Are you sure you want to leave?" <<endl;
        cin >> respond;
        cin.ignore(44, '\n');       
 
     
    if ((respond=="yes")||(respond=="Yes"))
{   
    cout << "\n=> Alright speak to you later." <<endl;
        cin >> respond;
        cin.ignore(44, '\n');  
             
      while (respond!= "sorry")
      {
        cin >> respond;
        cin.ignore(44, '\n');           
      }
     
    cout << "\n=> But I thought you wanted to leave though?" <<endl;
        cin >> respond;
        cin.ignore(44, '\n'); 
 
    cout << "\n=> Alright" <<endl;   
}
}
}
