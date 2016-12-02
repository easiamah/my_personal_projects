/* This is my first cpp game*/

#include <iostream>                     // for input and output 
#include <unistd.h>                     // for the timer (sleep)
#include <iomanip>                     // for the postion on the screen (setw)
//#include <stdlib.h>                      not really needed
//#include <cstring>                        not really needed
//#include <sstream>                        not really needed
#include <cmath>                      //  for math calculations  (not really needed for now tho)
#include <stdlib.h>                   // for system clear and generating numbers
#include <fstream>                    // save files
#include <ctime>

using namespace std;

void introduction();                // introduces the game
void game_name();                   // for the game title
void loading_game();                // loads the game
void position_screen();             // position the output on the screen
void real_game(int a, int b, int c,int d, int e, int f,int g, int h, int i);  // generates the random numbers 
int number_checker(int number);      // check for intigers           
void comments();                      // generates comments said in the game
void win_comments();                 // generates winning comments
bool quesions( bool go);            // asks for hint options
void player_score_check (int total_life, int hint, int total_Attempts, int U_L, int H, int U_A);   // checks who did great.
void Save_user_data (int total_life, int hint, int total_Attempts); // saves user data
int end_game ();                   // asks if u want to play again or end. 
void game_over();                  // displays game over
int how_to_play();
bool help();   
void tutorial_output (int pace);



int users_guess;         // users_guess- takes users guess, total_Attempts- calulates total attempts
bool win (false);                        // checks for win 
int RN,RN1,RN2,RN3,RN4,RN5,RN6,RN7,RN8;  // takes the random numbers
unsigned total_life = 5;                // for the life
int hint (3);                           // for the hint chances
bool get;                              // works on hint 
string respond;                        // takes the respond
int U_A, U_L, H;
string U_S;


int main()
{
  system ("cls");  // To clear the terminal
  sleep (2);        // wait a while before game begin
 
  position_screen();
  game_name();     // Enters the game's name
  sleep (2);       
  system ("cls");  
 
 int end(0);  
 while (end != 2)   // loads the game
      {   
        position_screen();        
        loading_game();
        end ++;  
       }
  
  introduction();

// opening privious file played by gamer___________________________________________
{    
       ifstream get_scores;
   
       get_scores.open ("Game_scores");
       
       cout << "This is previous player's score. \nTry to beat it." << endl << endl;
      
        cout << "\nUser_name |  Total_Attempts | Total_life | Hint" << endl;
        cout << "------------------------------------------------" << endl;
        
       while ( get_scores >> U_S >> U_A  >> U_L >> H )
       cout << U_S << "          " << U_A << "                " << U_L << "           "  << H << endl;
       
       get_scores.close();
} 
  sleep (7);       
  system ("cls");       

START: // This is the start point if you want to play again.  
int num_Of_Attempts(0), total_Attempts (0);




//TUTORIAL______________________________________________________________________
{
  int pace;
  bool get_help;
  
  get_help = help();
  if (get_help == true)
    {
      pace = how_to_play();
     }
 
 else
    {
      goto LEVEL1;
    }    
    
  real_game(RN3, RN8, RN5, RN7, RN6, RN, RN1, RN2, RN4);  // Recieving the random numbers

  cout << endl << endl;
  
        //---------------------------------------------------------------//
        int A[3] [3]= {{RN,RN1,RN2},{RN3,RN4,RN5},{RN6,RN7,RN8}};         //
        cout << "TUTORIAL : You gain >>> two more lifes <<< if you guess this right";  
        cout << endl << endl;                                         //
        cout << "  _____________________  "<< endl << endl;          //
        for (int i=0;i<3;i++)                                       // 
        {                                                          //
           for (int j=0;j<3;j++)                                  //
           cout << setw (6) << A [i] [j];                        //
           cout <<endl;                                         //
        }                                                      //---------------------------------------
        cout << "\n\nRemember you dont't have to use your hint chance if you don't need it" <<endl;   //
        cout << "----------------------------------------------------------------------" <<endl;      //
        cout << "\n-> Press [A] for hint\n-> Press [B] for hint\n-> Press [C] for hint \n" << endl;  //    
       //-------------------------------------------------------//----------------------------------//
      
      tutorial_output (pace);          
}
                  
// LEVEL1______________________________________________________________________
{
LEVEL1: 
  
  real_game(RN3, RN8, RN5, RN7, RN6, RN, RN1, RN2, RN4);  // Recieving the random numbers

  cout << endl << endl;
  
 do{  // Do-while to check for win


        //---------------------------------------------------------------//
        int A[3] [3]= {{RN7,RN1,RN2},{RN3,RN4,RN5},{RN6,RN,RN8}};         //
        cout << "Level 1 : You gain >>> two more lifes <<< if you guess this right";  
        cout << endl << endl;                                         //
        cout << "  _____________________  "<< endl << endl;          //
        for (int i=0;i<3;i++)                                       // 
        {                                                          //
           for (int j=0;j<3;j++)                                  //
           cout << setw (6) << A [i] [j];                        //
           cout <<endl;                                         //
        }                                                      //---------------------------------------
        cout << "\n\nRemember you dont't have to use your hint chance if you don't need it" <<endl;   //
        cout << "----------------------------------------------------------------------" <<endl;      //
        cout << "\n-> Press [A] for hint\n-> Press [B] for hint\n-> Press [C] for hint \n" << endl;  //    
       //-------------------------------------------------------//----------------------------------//
 
 
      cout << "****************************************************************************************************************************************" << endl;
      cout << "In this set of random numbers, there is one special number.\t\t  >>> LIFE: " << total_life << " <<< \t\t  >>> HINTS: " << hint << " <<<"  << endl; 

   
     if ( hint != 0)  // does this hint 
     {  
         
         get = quesions(get); 
         
         if  ( get == true )  // while bool is false  no hint
          {
             cout << "\nThe special number is one of these numbers: " << RN2 << ", " << RN << ", and " << RN3 << "." << endl; 
             hint --;
          }
      }      
  
  
      
      users_guess = number_checker(users_guess);  // accepting users input
  
      if ( users_guess < RN)  // if users guess is less
      { 
         if (total_life == 0)
         {
           break;
         }    
          total_life --; 
        cout << "************************************************************************" << endl;
        comments ();
        cout << "|| Too low, try again ||" << endl;
        num_Of_Attempts ++;
        sleep (5);       
        system ("cls");          
      }
    
     else if ( users_guess > RN) // if users guess is more 
     {  
        if (total_life == 0)
        {
           break;
        }    
         total_life --; 
       cout << "************************************************************************" << endl;
       comments ();
       cout << "|| Too high, try again ||" << endl;
       num_Of_Attempts ++;
       sleep (5);       
       system ("cls");        
      }       
    
      else // winner
     {
        num_Of_Attempts ++;
        system ("cls");
        cout << "**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**" << endl;
        win_comments ();
        cout << "\nYou guessed right." <<endl;
        cout << "You tried " << num_Of_Attempts << " guesses to get it right." << endl; 
        cout << "The special number is "<< RN << "." << endl; 
        win = true;
     }
    
   
     while (total_life == 0)    // game over
     {
       game_over();
      }
   
   
      if ( win == true )
      total_life += 2;

   
  } while ( !win );    // End of do-while
  
  cout << "\nTwo lifes has been added to your life left." <<endl;
  cout << "\nYour total life left is >>> " << total_life << " <<<" << endl;
  cout << "Your total hints left is >>> " << hint << " <<<" << endl;
    
  total_Attempts += num_Of_Attempts;
  
  cout << "Your total attempts is >>> " << total_Attempts << " <<<" << endl;

    
 cout << "\nEnd of level." << endl; 
 cout << "\nPress any key and \"ENTER\" to continue \n=> ";   
           cin >> respond;
           cin.ignore (50, '\n');
                  
 system ("cls");
 
 int end(0);    
 while (end != 2)   // loads the game
      { 
        position_screen();         
        loading_game();
        end ++;  
       } 
  

  win = false; 
  num_Of_Attempts = 0;
   
} //end of level 1 




// LEVEL2______________________________________________________________________
{
  //int num_Of_Attempts(0);

  real_game(RN5, RN1, RN2, RN3, RN4, RN, RN6, RN7, RN8);

  cout << endl << endl;
  
 do{
        //---------------------------------------------------------------//
        int A[3] [3]= {{RN3,RN1,RN2},{RN,RN4,RN5},{RN6,RN7,RN8}};       //
        cout << "Level 2 : You gain >>> one more hint chance <<< if you guess this right";      
        cout << endl << endl;                                         //
        cout << "  _____________________  "<< endl << endl;          //
        for (int i=0;i<3;i++)                                       // 
        {                                                          //
           for (int j=0;j<3;j++)                                  //
           cout << setw (6) << A [i] [j];                        //
           cout <<endl;                                         //
        }                                                      //---------------------------------------
        cout << "\n\nRemember you dont't have to use your hint chance if you don't need it" <<endl;   //
        cout << "----------------------------------------------------------------------" <<endl;      //
        cout << "\n-> Press [A] for hint\n-> Press [B] for hint\n-> Press [C] for hint \n" << endl;  //    
       //-------------------------------------------------------//----------------------------------//

 
      cout << "****************************************************************************************************************************************" << endl;
      cout << "In this set of random numbers, there is one special number.\t\t  >>> LIFE: " << total_life << " <<< \t\t  >>> HINTS: " << hint << " <<<"  << endl;

     if ( hint != 0)
     {  
         get = quesions(get); 
         
         if  ( get == true )
          {
             cout << "\nThe special number is one of these numbers: " << RN << ", " << RN2 << ", and " << RN3 << "." << endl;
             hint --;
          }
      }      
  
  
      
      users_guess = number_checker(users_guess);
    
    
  
      if ( users_guess < RN)
      { 
         if (total_life == 0)
         {
           break;
         }    
          total_life --; 
        cout << "************************************************************************" << endl;
        comments ();
        cout << "|| Too low, try again ||" << endl;
        num_Of_Attempts ++;
        sleep (5);       
        system ("cls");          
      }
    
     else if ( users_guess > RN) 
     {  
        if (total_life == 0)
        {
           break;
        }    
         total_life --; 
       cout << "************************************************************************" << endl;
       comments ();
       cout << "|| Too high, try again ||" << endl;
       num_Of_Attempts ++;
       sleep (5);       
       system ("cls");         
      }    
    
      else // winner
     {
        num_Of_Attempts ++;
        system ("cls");
        cout << "**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**" << endl;
        win_comments ();
        cout << "\nYou guessed right." <<endl;
        cout << "You tried " << num_Of_Attempts << " guesses to get it right." << endl; 
        cout << "The special number is "<< RN << "." << endl; 
        win = true;
     }
    
   
     while (total_life == 0) 
     {
        game_over(); 
      }
   
   
      if ( win == true )
      hint += 1;

   
  } while ( !win );
  
  cout << "\nOne hint has has been added to your hint chances." <<endl;
  cout << "\nYour total life left is >>> " << total_life << " <<<" << endl;
  cout << "Your total hints left is >>> " << hint << " <<<" << endl;
    
  total_Attempts += num_Of_Attempts;
  
  cout << "Your total attempts is >>> " << total_Attempts << " <<<" << endl;

    
 cout << "\nEnd of level." << endl; 
 cout << "\nPress any key and \"ENTER\" to continue \n=> ";   
           cin >> respond;
           cin.ignore (50, '\n');
                  
 system ("cls");
 
 int end(0);    
 while (end != 2)   // loads the game
      { 
        position_screen();         
        loading_game();
        end ++;  
       } 
  

  win = false;   
  num_Of_Attempts = 0;
} //end of level 2

// LEVEL3______________________________________________________________________
{
  //int num_Of_Attempts(0);

  real_game(RN, RN1, RN2, RN3, RN4, RN5, RN6, RN7, RN8);  // Recieving the random numbers

  cout << endl << endl;
  
 do{  // Do-while to check for win

        //---------------------------------------------------------------//
        int A[3] [3]= {{RN5,RN1,RN2},{RN3,RN4,RN},{RN6,RN7,RN8}};       //
        cout << "Level 3 :  You gain >>> two more lifes <<< if you guess this right";  
        cout << endl << endl;                                         //
        cout << "  _____________________  "<< endl << endl;          //
        for (int i=0;i<3;i++)                                       // 
        {                                                          //
           for (int j=0;j<3;j++)                                  //
           cout << setw (6) << A [i] [j];                        //
           cout <<endl;                                         //
        }                                                      //---------------------------------------
        cout << "\n\nRemember you dont't have to use your hint chance if you don't need it" <<endl;   //
        cout << "----------------------------------------------------------------------" <<endl;      //
        cout << "\n-> Press [A] for hint\n-> Press [B] for hint\n-> Press [C] for hint \n" << endl;  //    
       //-------------------------------------------------------//----------------------------------//

 
      cout << "****************************************************************************************************************************************" << endl;
      cout << "In this set of random numbers, there is one special number.\t\t  >>> LIFE: " << total_life << " <<< \t\t  >>> HINTS: " << hint << " <<<"  << endl; 
   
     if ( hint != 0)  // does this hint 
     {  
         get = quesions(get); 
         
         if  ( get == true )  // while bool is false  no hint
          {
             cout << "\nThe special number is one of these numbers: " << RN2 << ", " << RN8 << ", and " << RN << "." << endl; 
             hint --;
          }
      }      
  
  
      
      users_guess = number_checker(users_guess);  // accepting users input
    
    
  
      if ( users_guess < RN)  // if users guess is less
      { 
         if (total_life == 0)
         {
           break;
         }    
          total_life --; 
        cout << "************************************************************************" << endl;
        comments ();
        cout << "|| Too low, try again ||" << endl;
        num_Of_Attempts ++;
        sleep (5);       
        system ("cls");          
      }
    
     else if ( users_guess > RN) // if users guess is more 
     {  
        if (total_life == 0)
        {
           break;
        }    
         total_life --; 
       cout << "************************************************************************" << endl;
       comments ();
       cout << "|| Too high, try again ||" << endl;
       num_Of_Attempts ++;
       sleep (5);       
       system ("cls");        
      }    
    
      else // winner
     {
        num_Of_Attempts ++;
        system ("cls");
        cout << "**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**" << endl;
        win_comments ();
        cout << "\nYou guessed right." <<endl;
        cout << "You tried " << num_Of_Attempts << " guesses to get it right." << endl; 
        cout << "The special number is "<< RN << "." << endl; 
        win = true;
     }
    
   
     while (total_life == 0)    // game over
     {
        game_over();
      }
   
   
      if ( win == true )
      total_life += 2;

   
  } while ( !win );    // End of do-while
  
  cout << "\nTwo lifes has been added to your life left." <<endl;
  cout << "\nYour total life left is >>> " << total_life << " <<<" << endl;
  cout << "Your total hints left is >>> " << hint << " <<<" << endl;
    
  total_Attempts += num_Of_Attempts;
  
  cout << "Your total attempts is >>> " << total_Attempts << " <<<" << endl;

    
 cout << "\nEnd of level." << endl; 
 cout << "\nPress any key and \"ENTER\" to continue \n=> ";   
           cin >> respond;
           cin.ignore (50, '\n');
                  
 system ("cls");
 
 int end(0);    
 while (end != 2)   // loads the game
      { 
        position_screen();         
        loading_game();
        end ++;  
       } 
  

  win = false;   
  num_Of_Attempts = 0;
} //end of level 3

// LEVEL4______________________________________________________________________
{
  //int num_Of_Attempts(0);

  real_game(RN, RN1, RN2, RN3, RN4, RN5, RN6, RN7, RN8);

  cout << endl << endl;
  
 do{

        //---------------------------------------------------------------//
        int A[3] [3]= {{RN8,RN1,RN2},{RN3,RN4,RN5},{RN6,RN7,RN}};       //
        cout << "Level 4 : You gain >>> one more hint chance <<< if you guess this right";    
        cout << endl << endl;                                         //
        cout << "  _____________________  "<< endl << endl;          //
        for (int i=0;i<3;i++)                                       // 
        {                                                          //
           for (int j=0;j<3;j++)                                  //
           cout << setw (6) << A [i] [j];                        //
           cout <<endl;                                         //
        }                                                      //---------------------------------------
        cout << "\n\nRemember you dont't have to use your hint chance if you don't need it" <<endl;   //
        cout << "----------------------------------------------------------------------" <<endl;      //
        cout << "\n-> Press [A] for hint\n-> Press [B] for hint\n-> Press [C] for hint \n" << endl;  //    
       //-------------------------------------------------------//----------------------------------//
     
 
      cout << "****************************************************************************************************************************************" << endl;
      cout << "In this set of random numbers, there is one special number.\t\t  >>> LIFE: " << total_life << " <<< \t\t  >>> HINTS: " << hint << " <<<"  << endl;
   
     if ( hint != 0)
     {  
         get = quesions(get); 
         
         if  ( get == true )
          {
             cout << "\nThe special number is one of these numbers: " << RN << ", " << RN2 << ", and " << RN3 << "." << endl;
             hint --;
          }
      }      
  
  
      
      users_guess = number_checker(users_guess);
    
    
  
      if ( users_guess < RN)
      { 
         if (total_life == 0)
         {
           break;
         }    
          total_life --; 
        cout << "************************************************************************" << endl;
        comments ();
        cout << "|| Too low, try again ||" << endl;
        num_Of_Attempts ++;
        sleep (5);       
        system ("cls");          
      }
    
     else if ( users_guess > RN) 
     {  
        if (total_life == 0)
        {
           break;
        }    
         total_life --; 
       cout << "************************************************************************" << endl;
       comments ();
       cout << "|| Too high, try again ||" << endl;
       num_Of_Attempts ++;
       sleep (5);       
       system ("cls");         
      }    
    
      else // winner
     {
        num_Of_Attempts ++;
        system ("cls");  
        cout << "**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**" << endl;
        win_comments ();
        cout << "\nYou guessed right." <<endl;
        cout << "You tried " << num_Of_Attempts << " guesses to get it right." << endl; 
        cout << "The special number is "<< RN << "." << endl;
        win = true;
     }
    
   
     while (total_life == 0) 
     {
        game_over();
      }
   
   
      if ( win == true )
      hint += 1;

   
  } while ( !win );
  
  cout << "\nOne hint has has been added to your hint chances." <<endl;
  cout << "\nYour total life left is >>> " << total_life << " <<<" << endl;
  cout << "Your total hints left is >>> " << hint << " <<<" << endl;
    
  total_Attempts += num_Of_Attempts;
  
  cout << "Your total attempts is >>> " << total_Attempts << " <<<" << endl;

    
 cout << "\nEnd of level." << endl; 
 cout << "\nPress any key and \"ENTER\" to continue \n=> ";    
           cin >> respond;
           cin.ignore (50, '\n');
                  
 system ("cls");
 
 int end(0);    
 while (end != 2)   // loads the game
      { 
        position_screen();         
        loading_game();
        end ++;  
       } 
  
  win = false;    
  num_Of_Attempts = 0;
} //end of level 4
// LEVEL5______________________________________________________________________
{
  int num_Of_Attempts(0);

  real_game(RN6, RN1, RN2, RN3, RN4, RN5, RN6, RN7, RN8);  // Recieving the random numbers
  cout << endl << endl;
  
 do{  // Do-while to check for win

        //---------------------------------------------------------------//
        int A[3] [3]= {{RN,RN1,RN2},{RN3,RN4,RN5},{RN6,RN7,RN8}};       //
        cout << "Level 5 : You gain >>> two more lifes <<< if you guess this right";  
        cout << endl << endl;                                         //
        cout << "  _____________________  "<< endl << endl;          //
        for (int i=0;i<3;i++)                                       // 
        {                                                          //
           for (int j=0;j<3;j++)                                  //
           cout << setw (6) << A [i] [j];                        //
           cout <<endl;                                         //
        }                                                      //---------------------------------------
        cout << "\n\nRemember you dont't have to use your hint chance if you don't need it" <<endl;   //
        cout << "----------------------------------------------------------------------" <<endl;      //
        cout << "\n-> Press [A] for hint\n-> Press [B] for hint\n-> Press [C] for hint \n" << endl;  //    
       //-------------------------------------------------------//----------------------------------//
      
 
      cout << "****************************************************************************************************************************************" << endl;
      cout << "In this set of random numbers, there is one special number.\t\t  >>> LIFE: " << total_life << " <<< \t\t  >>> HINTS: " << hint << " <<<"  << endl; 
   
     if ( hint != 0)  // does this hint 
     {  
         get = quesions(get); 
         
         if  ( get == true )  // while bool is false  no hint
          {
             cout << "\nThe special number is one of these numbers: " << RN2 << ", " << RN1 << ", and " << RN << "." << endl; 
             hint --;
          }
      }      
  
  
      
      users_guess = number_checker(users_guess);  // accepting users input
    
    
  
      if ( users_guess < RN)  // if users guess is less
      { 
         if (total_life == 0)
         {
           break;
         }    
          total_life --; 
        cout << "************************************************************************" << endl;
        comments ();
        cout << "|| Too low, try again ||" << endl;
        num_Of_Attempts ++;
        sleep (5);       
        system ("cls");          
      }
    
     else if ( users_guess > RN) // if users guess is more 
     {  
        if (total_life == 0)
        {
           break;
        }    
         total_life --; 
       cout << "************************************************************************" << endl;
       comments ();
       cout << "|| Too high, try again ||" << endl;
       num_Of_Attempts ++;
       sleep (5);       
       system ("cls");        
      }    
    
      else // winner
     {
        num_Of_Attempts ++;
        system ("cls"); 
        cout << "**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**" << endl;
        win_comments ();
        cout << "\nYou guessed right." <<endl;
        cout << "You tried " << num_Of_Attempts << " guesses to get it right." << endl; 
        cout << "The special number is "<< RN << "." << endl;
        win = true;
     }
    
   
     while (total_life == 0)    // game over
     {
        game_over();
      }
   
   
      if ( win == true )
      total_life += 2;

   
  } while ( !win );    // End of do-while
  
  cout << "\nTwo lifes has been added to your life left." <<endl;
  cout << "\nYour total life left is >>> " << total_life << " <<<" << endl;
  cout << "Your total hints left is >>> " << hint << " <<<" << endl;
    
  total_Attempts += num_Of_Attempts;
  
  cout << "Your total attempts is >>> " << total_Attempts << " <<<" << endl;

    
 cout << "\nEnd of level." << endl; 
 cout << "\nPress any key and \"ENTER\" to continue \n=> ";    
           cin >> respond;
           cin.ignore (50, '\n');
                  
 system ("cls");
 
 int end(0);    
 while (end != 2)   // loads the game
      { 
        position_screen();         
        loading_game();
        end ++;  
       } 
  
  win = false;   
  num_Of_Attempts = 0;
} //end of level 5


// LEVEL6______________________________________________________________________
{
  //int num_Of_Attempts(0);

  real_game(RN2, RN1, RN, RN3, RN4, RN5, RN6, RN7, RN8);

  cout << endl << endl;
  
 do{

        //---------------------------------------------------------------//
        int A[3] [3]= {{RN,RN1,RN2},{RN3,RN4,RN5},{RN6,RN7,RN8}};       //
        cout << "Level 6 : You gain >>> one more hint chance <<< if you guess this right";  
        cout << endl << endl;                                         //
        cout << "  _____________________  "<< endl << endl;          //
        for (int i=0;i<3;i++)                                       // 
        {                                                          //
           for (int j=0;j<3;j++)                                  //
           cout << setw (6) << A [i] [j];                        //
           cout <<endl;                                         //
        }                                                      //---------------------------------------
        cout << "\n\nRemember you dont't have to use your hint chance if you don't need it" <<endl;   //
        cout << "----------------------------------------------------------------------" <<endl;      //
        cout << "\n-> Press [A] for hint\n-> Press [B] for hint\n-> Press [C] for hint \n" << endl;  //    
       //-------------------------------------------------------//----------------------------------// 
 
      cout << "****************************************************************************************************************************************" << endl;
      cout << "In this set of random numbers, there is one special number.\t\t  >>> LIFE: " << total_life << " <<< \t\t  >>> HINTS: " << hint << " <<<"  << endl;
   
     if ( hint != 0)
     {  
         get = quesions(get); 
         
         if  ( get == true )
          {
             cout << "\nThe special number is one of these numbers: " << RN1 << ", " << RN << ", and " << RN3 << "." << endl;
             hint --;
          }
      }      
  
  
      
      users_guess = number_checker(users_guess);
    
    
  
      if ( users_guess < RN)
      { 
         if (total_life == 0)
         {
           break;
         }    
          total_life --; 
        cout << "************************************************************************" << endl;
        comments ();
        cout << "|| Too low, try again ||" << endl;
        num_Of_Attempts ++;
        sleep (5);       
        system ("cls");          
      }
    
     else if ( users_guess > RN) 
     {  
        if (total_life == 0)
        {
           break;
        }    
         total_life --; 
       cout << "************************************************************************" << endl;
       comments ();
       cout << "|| Too high, try again ||" << endl;
       num_Of_Attempts ++;
       sleep (5);       
       system ("cls");         
      }    
    
      else // winner
     {
        num_Of_Attempts ++;
        system ("cls"); 
        cout << "**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**" << endl;
        win_comments ();
        cout << "\nYou guessed right." <<endl;
        cout << "You tried " << num_Of_Attempts << " guesses to get it right." << endl; 
        cout << "The special number is "<< RN << "." << endl;
        win = true;
     }
    
   
     while (total_life == 0) 
     {
        game_over();
      }
   
   
      if ( win == true )
      hint += 1;

   
  } while ( !win );
  
  cout << "\nOne hint has has been added to your hint chances." <<endl;
  cout << "\nYour total life left is >>> " << total_life << " <<<" << endl;
  cout << "Your total hints left is >>> " << hint << " <<<" << endl;
    
  total_Attempts += num_Of_Attempts;
  
  cout << "Your total attempts is >>> " << total_Attempts << " <<<" << endl;

    
 cout << "\nEnd of level." << endl; 
 cout << "\nPress any key and \"ENTER\" to continue \n=> ";   
           cin >> respond;
           cin.ignore (50, '\n');
                  
 system ("cls");
 
 int end(0);    
 while (end != 2)   // loads the game
      { 
        position_screen();         
        loading_game();
        end ++;  
       } 
  
  win = false; 
   
  num_Of_Attempts = 0;
} //end of level 6

 player_score_check ( total_life, hint, total_Attempts, U_L, H, U_A);
 
 int get_end = end_game (); // calls for end game funtion.
 if ( get_end == 1)
 {
    goto START;
  }
 
  else 
  {
    cout << "Thanks for playing" << endl;
   }  


   return 0;
}

// introduction____________________________________________________________________
void introduction()
{
  position_screen();
  cout << "__________________________________________________"<< endl; 
  cout << setw(35) << "=>  Hello <=" << endl;
  cout << "__________________________________________________" << endl;  
        cout.flush();
        sleep (2);       
       system ("cls"); 
        
  position_screen();
  cout << "__________________________________________________"<< endl; 
  cout << setw(35) << "=> Welcome to the guessing game <=" << endl;
  cout << "__________________________________________________"<< endl; 
        cout.flush();
        sleep (3);       
       system ("cls");
       
  position_screen();
  cout << "_____________________________________________________________________________________________________"<< endl; 
  cout << setw(35) << "=> Since the beginning of man, he has been marked with his ability of his instincts <=" << endl;
  cout << "_____________________________________________________________________________________________________"<< endl; 
        cout.flush();
        sleep (4);       
       system ("cls");    

  position_screen();
  cout << "__________________________________________________"<< endl; 
  cout << setw(35) << "=> How good is your instincts? <=" << endl;
  cout << "__________________________________________________"<< endl; 
        cout.flush();
        sleep (4);       
       system ("cls"); 
            
  
  position_screen();
  cout << "_________________________________________________________________________________________"<< endl; 
  cout << setw(75) << "=> You would guess different numbers to see how good you are at guessing <=" << endl;
  cout << "_________________________________________________________________________________________"<< endl; 
        cout.flush();
        sleep (4);       
       system ("cls");  
  
  position_screen();
  cout << "_________________________________" << endl; 
  cout << setw(25) << "=> Good luck!!! <=" << endl;
  cout << "_________________________________" << endl;  
        cout.flush();
        sleep (2);       
       system ("cls");  
}
// game_name________________________________________________________________________
void game_name()
{
         // print line 0 of the fame
         for (int i=0; i<20; i++) cout << "*";
         cout << endl;

         // print line 1 of frame: < age - 2 spaces>
         cout << "*";
         for (int i=0; i < 20 - 2; i++) cout << " ";
         cout << "*" << endl;

         // print line 2 of frame; centered messages
         cout << "*";
         for (int i=0; i < (20 - 16)/2; i++) cout << " ";
         cout << "GUESS OR TRY";
         for (int i=0; i < (20 - 16)/2; i++) cout << " ";
         cout << "*" << endl;

         // print line 3 of frame: < age - 2 spaces>
         cout << "*";
         for (int i=0; i < 20 - 2; i++) cout << " ";
         cout << "*" << endl;

         // print line 4 of the fame
         for (int i=0; i<20; i++) cout << "*";
         cout << endl;
         
}
// loading_game________________________________________________________________________________
void loading_game()
{
        cout << setw(35) << "loading";  
        cout.flush();
        sleep (1);
        cout << ".";
        cout.flush();
        sleep (1);   
        cout << ".";
        cout.flush();
        sleep (1);      
        cout << ".";
        cout.flush();
        sleep (1);     
        system ("cls");
} 
//________________________________________________________________________________________ 
void position_screen()
{
cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
}    
//help_________________________________________________________
bool help()
{
  bool help;
  string respond;
  
 do{ 
     cout << "Will you like to see a quick tutorial on how to play this game? \n=> ";
     cin >> respond;
     sleep (2);           
     system ("cls");      
   } while ((respond != "yes")&&(respond != "Yes")&&(respond != "YES")&&(respond != "y")&&(respond != "Y")&&(respond != "NO")&&(respond != "no")&&(respond != "N")&&(respond != "n"));
  
  if ((respond == "yes")|| (respond == "Yes")|| (respond == "YES")||(respond == "Y")|| (respond == "y"))
  {
    return true;
  }
  else
  {
    return false;
  }
     sleep (2);           
     system ("cls");  
}
//how_to_play_______________________________________________________
int how_to_play()
{ 
   int speed = 0;
  do{
     AGAIN:
     cout << "How fast will you like the tutorial?" <<endl;
     sleep (1);     
     cout << "\nChoose 1 for very fast \nChoose 2 for very modrate speed \nChoose 3 for normal pace\nChoose 4 for very slow\n\n=> ";
     cin >> speed;
     
     if ( speed > 4)
        {
            sleep (1);           
            system ("cls");         
            goto AGAIN;
         }
    
     sleep (1);           
     system ("cls");      
     } while ((speed != 1)&&(speed != 2)&&(speed != 3)&&(speed != 4));
     
     return speed;
 
}
// Real_game________________________________________________________
void real_game(int a, int b, int c,int d, int e, int f,int g, int h, int i)
{

    unsigned guess  = time (0);
    unsigned guess1 = time (0);
    unsigned guess2 = time (0);
    unsigned guess3 = time (0);
    unsigned guess4 = time (0);
    unsigned guess5 = time (0);
    unsigned guess6 = time (0);
    unsigned guess7 = time (0);
    unsigned guess8 = time (0);  
         
    RN  = 1 + rand()%10; 
    RN1 = 1 + rand()%10;
    RN2 = 1 + rand()%10;
    RN3 = 1 + rand()%10;
    RN4 = 1 + rand()%10;
    RN5 = 1 + rand()%10;
    RN6 = 1 + rand()%10;
    RN7 = 1 + rand()%10;
    RN8 = 1 + rand()%10;
           
}  
// Number_checker___________________________________________________________________________
int number_checker(int number)
{ 
   string number_Entry;
   int numberResult;
   bool loop_check;
   bool stop = true;
   

   do {  // loop to verify proper entry of data 
         if ( stop != false)
         {
           cout << "\nCan you guess what it is?" <<endl;
           cout << "->-<->-<->-<->-<->-<->-<->-<->-<->-<->-<->" <<endl;
           cout << "=> ";
          }
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

// comments________________________________________________________________________________________________________________
void comments ()
{
  unsigned guess  = time (0);
  srand (guess);
  int comment  = 1 + rand()%10;
  
    if ( comment == 1)
  { 
    cout << "-> You definitely got that wrong <-\n" << endl;
   } 
  
  else if ( comment == 2)
   { 
     cout << "-> You should try harder <-\n" << endl;
   }   

  else if ( comment == 3)
   { 
     cout << "-> Goodness, you suck at guessing <-\n" << endl;
   }   
  
  else if ( comment == 4)
   { 
     cout << "-> Are you even trying? <- \n" << endl;
   } 
 
  else if ( comment == 5)
   { 
     cout << "-> I should go to bed <-\n" << endl;
   }   

  else if ( comment == 6)
   { 
     cout << "-> Put a little more effort <-\n" << endl;
   }   
  else if ( comment == 7)
   { 
     cout << "-> You not far from game over actually <-\n" << endl;
   }        
  else if ( comment == 8)
   { 
     cout << "-> Getting close <- \n" << endl;
   }
  else if ( comment == 9)
   { 
     cout << "-> I guess you should give up <-\n" << endl;
   } 
  else
   { 
     cout << "-> You're getting there don't give up <-\n" << endl;
   }          
}
//win_comments________________________________________________________________________________________________________________
void win_comments ()
{
  unsigned guess  = time (0);
  srand (guess);
  int comment  = 1 + rand()%10;
  
    if (( comment == 1)||( comment == 2))
  {
    cout << "-> Men you're good <-" << endl;
   } 
  
  else if (( comment == 3)||( comment == 4))
   { 
     cout << "-> Oh wow you actually got it right <-" << endl;
   }   

  else if (( comment == 5)||( comment == 6))
   {
     cout << "-> I knew you could do this <-" << endl;
   }   
  
  else if (( comment == 7)||( comment == 8))
   { 
     cout << "-> You were born for this, I'm proud <- " << endl;
   } 
 
  else 
   { 
     cout << "-> You're a beast at this <-" << endl;
   }           
}
//game over________________________________________________________________________________________________
void game_over()
{
       system ("cls");
       cout << "__________________" << endl;
       cout << "****************" << endl;
       cout << "------------------" << endl;
       cout << "/*/ GAME OVER /*/" << endl;
       cout << "__________________" << endl;
       cout << "****************" << endl;
       cout << "------------------" << endl;
       sleep (10);    
}
// quesions________________________________________________________________________________________________________________
bool quesions( bool go)
{
    string respond;
    go = false;
    int comment_stop (0);
    
 ask: 
  unsigned guess  = time (0);
  srand (guess);
  int comment  = 1 + rand()%10;    
    
    
    if ( hint != 0)
    {      
      
           cout << "\n -> Do you want to use a hint? (Yes or No) <- \n=> " ;
           cin >> respond;
           cin.ignore (50, '\n');
    
           if ((respond == "yes")|| (respond == "Yes")|| (respond == "YES")||(respond == "Yup")|| (respond == "yup")||(respond=="Yeah")||(respond=="yeah")||(respond=="y")||(respond=="Y"))
               {
                  cout << "\n-> Press a hint choice <-\n=> " ;
                  cin >> respond;
                  cin.ignore (50, '\n'); 
                  cout << endl;  
                  
                  if ((respond == "A") || (respond == "a") || (respond == "B") || (respond == "b") || (respond == "C") || (respond == "c"))
                   {
                      return go = true;
                   }   
                   
                   else
                   {
                      return go = false;
                   }                    
                   
                }
                                
                
        else if ((respond=="1")||(respond=="2")||(respond=="3")||(respond=="4")||(respond=="5")||(respond=="6")||(respond=="7")||(respond=="8")||(respond=="9")||(respond=="10")||(respond=="0"))   
             {
                 string respond;
                
               while (comment_stop != 2)
               { //begining of while loop
                   if (( comment == 1)||( comment == 2))
                   {
                     cout << "\nDo you even read before you answer? (You just had to say either yes or no) <--" ;
                     ++ comment_stop;
                    }
                   
                  else if (( comment == 3)||( comment == 4))
                  {  
                    cout << "\nNo offense, do you need reading lessons? (You just had to say either yes or no) <-- " ;
                    ++ comment_stop;
                  } 
                
                 else if (( comment == 5)||( comment == 6))
                  {
                   cout << "\nI feel like I am talking to myself. (You just had to say either yes or no) <-- " ;
                   ++ comment_stop;
                  }
                    

                 else if (( comment == 7)||( comment == 8))
                 { 
                   cout << "\nYou really should read first. (You just had to say either yes or no) <--" ;
                   ++ comment_stop;
                 } 
 
                else 
                { 
                  cout << "\nDoes anyone read anymore? (You just had to say either yes or no) <--" ;
                  ++ comment_stop;
                }                  
                   goto ask;
             } //end of while loop  
                
                  cout << "\n----I GIVE UP!----\n";
                  goto go_ahead;
           }    
                
          else
          {
              go_ahead:
              comment_stop == 0;
              
              if (( comment == 1)||( comment == 2))
               {
                 cout << "-> Alright, do your thing smart Einstein!. <-" << endl;
                }           
                
               else if (( comment == 3)||( comment == 4))
               {  
                 cout << "-> Okay, just know you are on your own, Hope you get it right. <-" <<endl;
                } 
                
                else if (( comment == 5)||( comment == 6))
                 {
                   cout << "-> It will be really funny, if you get this wrong <-" << endl;
                 }  

                 else if (( comment == 7)||( comment == 8))
                 { 
                   cout << "-> Just don't waste life. <- " << endl;
                 } 
 
               else 
                { 
                  cout << "-> You can do this, I believe in you. <-" << endl;
                }                    
                          
             return go = false;
          }
     }   
  } 
// player_score check;__________________________________________________________________________________________________________
void player_score_check (int total_life, int hint, int total_Attempts, int U_L, int H, int U_A)
{
   bool add_current = false;
   cout << endl << endl;
   
   if ( total_Attempts < U_A)
    {
      cout << " >>> You currently have the highest score in \"GUESS or TRY\" <<<" << endl;
      add_current = true;
    }
    else if  ( total_Attempts == U_A)
    {
         if ( total_life > U_L)//totatl attempts is the same or greater than you won
        {
          cout << " >>> You currently have the highest score in \"GUESS or TRY\" <<<" << endl; 
          add_current = true;
        }
         else if (total_life == U_L) //compare hints to see if they are equal
         {
             if (hint > H )//compare hints to see if greater
             {
               cout << " >>> You currently have the highest score in \"GUESS or TRY\" <<<" << endl;
               add_current = true;
             }
        
          }
        else//loss
        {
          cout << " >>> You were not able to break the highest score <<<" << endl; 
        }
    
    }
    else//lost
    {
      cout << " >>> You were not able to break the highest score <<<" << endl; 
    }
        cout << endl << endl;
        cout << "\nUser_name |  Total_Attempts | Total_life | Hint" << endl;
        cout << "------------------------------------------------" << endl;
        
       cout << U_S << " :" << "          " << U_A << "                " << U_L << "           "  << H << endl << endl; 
       cout << "You :" << "          " << total_Attempts << "                " << total_life << "           "  << hint << endl;   
   
   if (add_current != false) // calling for save file funtion
   {
     Save_user_data (total_life, hint, total_Attempts);
    } 
}
    
//Saving the game____________________________________________________________
void Save_user_data (int total_life, int hint, int total_Attempts) {
   
   cout << "\nYou should save your scores"<<endl;
   string user_respond;
   do { 
        cout << "\nWould you want to save your final score? (Yes or no) \n=> ";
        getline (cin,user_respond);
       } while ((user_respond != "YES")&&(user_respond != "yes")&&(user_respond != "Yes")&&(user_respond != "Y")&&(user_respond != "y")&&(user_respond != "NO")&&(user_respond != "no")&&(user_respond != "No"));
       
   if ((user_respond == "YES")||(user_respond == "yes")||(user_respond == "Yes")||(user_respond == "Y")||(user_respond == "y")){
        cout << "\nEnter a single name? (eg: Emmanuel) \n=> ";
        cin>> user_respond;   
   
        ofstream push_scores;
   
       push_scores.open ("Game_scores");
       
       push_scores << user_respond << "          ";
       push_scores << total_Attempts << "                ";
       push_scores << total_life << "           ";
       push_scores << hint;

       push_scores.close();
}
           
              cout << "Your scores is saved successfully." << endl;
              sleep (2);           
              system ("cls");
}

// End sessions_____________________________________________________________________________________________________________________________
 int end_game () {
      cout << "Do you want to restart the game \n=> ";
      cin >> respond;
      cin.ignore (50, '\n');
      
          if ((respond == "yes")|| (respond == "Yes")|| (respond == "uh")||(respond == "Yup")|| (respond == "yup")||(respond=="Yeah")||(respond=="yeah"))
          {
              total_life = 5;
              hint = 3;
               int end(0);  
               
              sleep (2);           
              system ("cls");
              
               while (end != 2)   // loads the game
               {   
                 position_screen();        
                 loading_game();
                 end ++;  
               }          
              return 1;
            }   
          return 0;
      }
//____________________________________________________________________________________________________________________________________________________________
void tutorial_output (int pace)
{
        cout << "****************************************************************************************************************************************" << endl;
        cout << "In this set of random numbers, there is one special number.\t\t  >>> LIFE: 5 <<< \t\t  >>> HINTS: 3 <<<"  << endl; 
        cout.flush();
        sleep (pace); 
//______________________________________________________________________________________________________________________________________________________________________
           cout << "\nCan you guess what it is?" <<endl;
           cout << "->-<->-<->-<->-<->-<->-<->-<->-<->-<->-<->" <<endl;
           cout << "=> ";
           cout.flush();
           sleep (pace);           
           cout << "2";
           cout.flush(); 
           sleep (pace);  
           cout << "                 <------- The user puts his/her guessed number and press \"Enter\"." << endl << endl;
           cout.flush();
           sleep (pace);               
//______________________________________________________________________________________________________________________________________________________________________  
        cout << "************************************************************************" << endl;
        cout << "|| Too low, try again ||";
        cout.flush();
        sleep (pace);
        cout << "                 <------- If the user's guess is lower than the lucky number in the set of numbers"  << endl;  
        cout.flush();      
        sleep (pace);
        cout.flush();    
//______________________________________________________________________________________________________________________________________________________________________        
           cout << "\nCan you guess what it is?" <<endl;
           cout << "->-<->-<->-<->-<->-<->-<->-<->-<->-<->-<->" <<endl;
           cout << "=> ";
           cout.flush();
           sleep (pace);                    
           cout << "10"; 
           sleep (pace); 
           cout.flush();
           cout << "                 <------- The user is asked to try again and again as long as they have life"  << endl << endl;
           cout.flush();
           sleep (pace);                                 
//______________________________________________________________________________________________________________________________________________________________________
       cout << "************************************************************************" << endl;
       cout.flush();
       sleep (pace);       
       cout << "|| Too high, try again ||";
       cout.flush();
       sleep (pace);        
       cout << "                 <------- If the user's guess is higher than the lucky number in the set of numbers"  << endl;
       sleep (pace);
       cout.flush();                        
//______________________________________________________________________________________________________________________________________________________________________       
           cout << "\n -> Do you want to use a hint? (Yes or No) <- \n=> " ;
           cout << "yes";
           cout.flush();
           sleep (pace);
           cout << "                 <------- User is also provided with hint chances and asked if they need them"  << endl << endl;
           sleep (pace); 
           cout.flush();                                         

           cout << "\n-> Press a hint choice <-\n=> " ; 
           cout.flush();
           cout << "A";
           cout.flush();
           sleep (pace);            
           cout << "                 <------- User then puts his hint option"  << endl << endl;
           sleep (pace);                         
           cout.flush();                       
     
      cout << "\nThe special number is one of these numbers: " << RN2 << ", " << RN << ", and " << RN3 << "." << endl;
           sleep (pace); 
           cout.flush();
//______________________________________________________________________________________________________________________________________________________________________        
           cout << "\nCan you guess what it is?" <<endl;
           cout << "->-<->-<->-<->-<->-<->-<->-<->-<->-<->-<->" <<endl;
           cout << "=> ";
           cout.flush();
           sleep (pace);
           cout << "4"; 
           cout.flush();
           sleep (pace);
           cout << "                 <------- Out of the hints provided the user makes a choice." << endl << endl;
           sleep (pace);
           cout.flush();
                                         
                   
      
//______________________________________________________________________________________________________________________________________________________________________      
        cout << "**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**0**" << endl;       
        cout << "\nYou guessed right.";
        cout.flush();
        sleep (pace);         
        cout << "                 <------- When user guesses the right number."  << endl;        
        cout << "You tried 3 guesses to get it right." << endl; 
        cout << "The special number is 4." << endl; 
   

//______________________________________________________________________________________________________________________________________________________________________  
  cout << "\nTwo lifes has been added to your life left." <<endl;
  cout << "\nYour total life left is >>> 5 <<<" << endl;
  cout << "Your total hints left is >>> 2 <<<" << endl;
  cout.flush();
  sleep (pace);     
  
  cout << "\nYour total attempts is >>> 3 <<<" << endl;

    
 cout << "\nEnd of level." << endl; 
 cout << "\nPress any key and \"ENTER\" to continue \n=> ";
 cout.flush();
 sleep (pace); 
         
  system ("cls");  
  
  position_screen();
  cout << "____________________________________" << endl; 
  cout << setw(25) <<"=> You are ready now. <=" << endl;
  cout << "____________________________________" << endl; 
  cout.flush();
  sleep (pace);    
              
  system ("cls");  
  
  position_screen();
  cout << "_________________________________" << endl; 
  cout << setw(25) << "=> Good luck!!! <=" << endl;
  cout << "_________________________________" << endl; 
  cout.flush();
  sleep (pace);    
              
  system ("cls"); 
}
//End of 1st game GUESS or TRY_________________________________________________________________________________________________________________________________






