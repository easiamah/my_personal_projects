#include <iostream>
#include <conio.h>
#include <windows.h>
#include <vector>
#include <string>
using namespace std;

 void display_board();  // This a funtion that displays the board
 void screen_layout();
 void displace_dice(int player);
 void fill_dice (vector<char>);
 void switch_players(int &player);
 void checkSlot (char input, int player);
 void checkForWin(int &winFlag);
 void check_for_game_over(int player, int &winFlag);
 void restart_game ();
 void draw_display(int &winFlag, int &draw);
 void display_player_scores();

 
 char slot_1, slot_2, slot_3, slot_4, slot_5, slot_6, slot_7, 
      slot_8, slot_9, slot_10, slot_11, slot_12, slot_13, slot_14,
      slot_15, slot_16, slot_17, slot_18, slot_19, slot_20, slot_21, 
	  slot_22, slot_23, slot_24, slot_25, slot_26, slot_27, slot_28,
	  slot_29, slot_30, slot_31, slot_32, slot_33, slot_34, slot_35,
      slot_36, slot_37, slot_38, slot_39, slot_40, slot_41, slot_42;
 int player(2), winFlag(0), draw(0), player_one_score(0), player_two_score(0);
 char player_input('1'), option;	
 string player_one, player_two;   
 
 vector<char>dice;
 vector<char>dice_two;

int main(){
	cout << "What is Player one's name?\n=> "; getline (cin,player_one);
	cout << "\nWhat is Player two's name?\n=> "; getline (cin,player_two);	
	fill_dice (dice);
	
	do{
		do{
			switch_players(player);
			do{
				system ("cls");	
				display_player_scores();	
				screen_layout();
				cout << "\t||--> CONNECT FOUR <--||";
		   	 	displace_dice(player);
				if (player == 1){
					cout << "\t>>> It is " << player_one <<"'s turn <<<\n";
					if (!(player_input >='1' && player_input <='7')){
						cout << "\t>>> You made a wrong move " << player_one <<", try again <<<\n";	
					}
				} else {
					cout << "\t>>> It is " << player_two <<"'s turn <<<\n";
					if (!(player_input >='1' && player_input <='7')){
						cout << "\t>>> You made a wrong move " << player_two <<", try again <<<\n";	
					}
				}	
				display_board();
				player_input = getche();
				Sleep (0700);		
			} while (!(player_input >='1' && player_input <='7'));	
				checkSlot (player_input, player);
				checkForWin(winFlag);			
		} while ((winFlag != 1) && (winFlag != 2));
		
		if (winFlag == 1) {
			check_for_game_over(player, winFlag);	
		} else {
			draw_display(winFlag, draw);
		}
		
		restart_game ();			
			
			cout << "\n\nDo you want to play again? (y/n): ";
		    cin >> option;
	} while (toupper(option) == 'Y');	
	
	
	
	return 0;
}

//**********************************************
void screen_layout(){ 
	cout << "\n\n\n";
}
//*******************
//Displays player's scores
void display_player_scores(){		
	cout << "\t\t\t>>> "<< static_cast<char>(177)<<" " << player_one << ": " << player_one_score << " <<<  >>> ";
	cout << static_cast<char>(178)<< " " << player_two << ": " << player_two_score << " <<< >>> ";	
	cout << static_cast<char>(176)<< " Drawn : " << draw << " <<< " <<endl;

}
//**********************
//checking for game over
void check_for_game_over(int player, int &winFlag){
	   system ("cls");
	   screen_layout();
	   display_board();
	   if (player == 1){
	      cout << "\t>>> congratulation " << player_one <<" <<<\n";	
	      ++ player_one_score;
	   } else {
	   	  cout << "\t>>> congratulation " << player_two <<" <<<\n";
	   	 ++ player_two_score;
	   }
	   
       cout << "\t\t\t__________________" << endl;
       cout << "\t\t\t****************" << endl;
       cout << "\t\t\t------------------" << endl;
       cout << "\t\t\t/*/ YOU WON!!! /*/" << endl;
       cout << "\t\t\t__________________" << endl;
       cout << "\t\t\t****************" << endl;
       cout << "\t\t\t------------------" << endl;
       Sleep (2000);
	   winFlag = 0;	
}
//**********************
void draw_display(int &flag, int &draw){
	   system ("cls");
	   screen_layout();
	   display_board();
       cout << "\t\t\t____________________" << endl;
       cout << "\t\t\t********************" << endl;
       cout << "\t\t\t--------------------" << endl;
       cout << "\t\t\t/*/ IT's A DRAW! /*/" << endl;
       cout << "\t\t\t____________________" << endl;
       cout << "\t\t\t********************" << endl;
       cout << "\t\t\t--------------------" << endl;
       Sleep (2000);
	   winFlag = 0; 
	   ++ draw;	
}
//*******************************************
void display_board(){
   cout << "\t-----------------------------------------------------------------------" << endl;
   cout << "\t|    " << slot_1 << "    |    " << slot_2 << "    |    "<< slot_3 << "    |    " << slot_4 << "    |    " << slot_5 << "    |    "<< slot_6 << "    |    "<< slot_7 << "    |    " <<  endl;
   cout << "\t-----------------------------------------------------------------------" << endl;
   cout << "\t|    " << slot_8 << "    |    " << slot_9 << "    |    "<< slot_10 << "    |    " << slot_11 << "    |    " << slot_12 << "    |    "<< slot_13 << "    |    "<< slot_14 << "    |    " << endl;
   cout << "\t-----------------------------------------------------------------------" << endl;
   cout << "\t|    " << slot_15 << "    |    " << slot_16 << "    |    "<< slot_17 << "    |    " << slot_18 << "    |    " << slot_19 << "    |    "<< slot_20 << "    |    "<< slot_21 << "    |    " <<  endl;
   cout << "\t-----------------------------------------------------------------------" << endl;
   cout << "\t|    " << slot_22 << "    |    " << slot_23 << "    |    "<< slot_24 << "    |    " << slot_25 << "    |    " << slot_26 << "    |    "<< slot_27 << "    |    "<< slot_28 << "    |    " <<  endl;
   cout << "\t-----------------------------------------------------------------------" << endl;
   cout << "\t|    " << slot_29 << "    |    " << slot_30 << "    |    "<< slot_31 << "    |    " << slot_32 << "    |    " << slot_33 << "    |    "<< slot_34 << "    |    "<< slot_35 << "    |    " << endl;
   cout << "\t-----------------------------------------------------------------------" << endl;
   cout << "\t|    " << slot_36 << "    |    " << slot_37 << "    |    "<< slot_38 << "    |    " << slot_39 << "    |    " << slot_40 << "    |    "<< slot_41 << "    |    "<< slot_42 << "    |    " << endl;
   cout << "\t-----------------------------------------------------------------------" << endl;	
	
	cout << "\n\n***************************************************************************\n";
}
//*************************************
void fill_dice (vector<char>){
	for (int i = 0; i < 7; i++){
		dice.push_back(static_cast<char>(232));
	}
	for (int i = 0; i < 7; i++){
		dice_two.push_back(static_cast<char>(254));
	}		
}
void displace_dice (int player){	
	if (player == 1){
	    cout << "\n\t-------------------------------------------------------\n";
		for (int i = 0; i < dice.size(); i++){
			cout << "\t"<< (i+1) << ") " << dice[i] << "  |";
	    }
		cout << "\n\t-------------------------------------------------------\n";		
	}
//-------------------------------------------
    else {
	    cout << "\n\t-------------------------------------------------------\n";
		for (int i = 0; i < dice_two.size(); i++){
			cout << "\t" << (i+1) << ") " << dice_two[i] << "  |";
		}
		cout << "\n\t-------------------------------------------------------\n";  	
	}	
}
//**********************************************
void switch_players(int &player){
	if (player == 1){
		player = 2;
	} else {
		player = 1;		
	}
}
//**************************************************
void restart_game(){
   slot_1 = NULL, slot_2 = NULL, slot_3 = NULL, slot_4 = NULL, slot_5 = NULL, slot_6 = NULL, slot_7 = NULL, slot_8 = NULL, slot_9 = NULL,
   slot_10 = NULL, slot_11 = NULL, slot_12 = NULL, slot_13 = NULL, slot_14 = NULL,slot_15 = NULL, slot_16 = NULL, slot_17 = NULL, slot_18 = NULL, 
   slot_19 = NULL, slot_20 = NULL, slot_21 = NULL, slot_22 = NULL, slot_23 = NULL, slot_24 = NULL, slot_25 = NULL, slot_26 = NULL, slot_27 = NULL, 
   slot_28 = NULL, slot_29 = NULL, slot_30 = NULL, slot_31 = NULL, slot_32 = NULL, slot_33 = NULL, slot_34 = NULL, slot_35 = NULL, slot_36 = NULL, 
   slot_37 = NULL, slot_38 = NULL, slot_39 = NULL, slot_40 = NULL, slot_41 = NULL, slot_42 = NULL;   	
}
//*******************************
void checkSlot (char input, int player){
	if ( input == '1'){
		if ((slot_36 != (static_cast<char>(254))) && (slot_36 != (static_cast<char>(232)))){
			if (player == 1){
				slot_36 = (static_cast<char>(232));
			} else {
				slot_36 = (static_cast<char>(254));
			}
		} else if ((slot_29 != (static_cast<char>(254))) && (slot_29 != (static_cast<char>(232)))){
			if (player == 1){
				slot_29 = (static_cast<char>(232));
			} else {
				slot_29 = (static_cast<char>(254));
			}			
		} else if ((slot_22 != (static_cast<char>(254))) && (slot_22 != (static_cast<char>(232)))){
			if (player == 1){
				slot_22 = (static_cast<char>(232));
			} else {
				slot_22 = (static_cast<char>(254));
			}			
		} else if ((slot_15 != (static_cast<char>(254))) && (slot_15 != (static_cast<char>(232)))){
			if (player == 1){
				slot_15 = (static_cast<char>(232));
			} else {
				slot_15 = (static_cast<char>(254));
			}			
		} else if ((slot_8 != (static_cast<char>(254))) && (slot_8 != (static_cast<char>(232)))){
			if (player == 1){
				slot_8 = (static_cast<char>(232));
			} else {
				slot_8 = (static_cast<char>(254));
			}			
		} else if ((slot_1 != (static_cast<char>(254))) && (slot_1 != (static_cast<char>(232)))){
			if (player == 1){
				slot_1 = (static_cast<char>(232));
			} else {
				slot_1 = (static_cast<char>(254));
			}			
		}
	} // End of input 1 
	else if ( input == '2'){
		if ((slot_37 != (static_cast<char>(254))) && (slot_37 != (static_cast<char>(232)))){
			if (player == 1){
				slot_37 = (static_cast<char>(232));
			} else {
				slot_37 = (static_cast<char>(254));
			}
		} else if ((slot_30 != (static_cast<char>(254))) && (slot_30 != (static_cast<char>(232)))){
			if (player == 1){
				slot_30 = (static_cast<char>(232));
			} else {
				slot_30 = (static_cast<char>(254));
			}			
		} else if ((slot_23 != (static_cast<char>(254))) && (slot_23 != (static_cast<char>(232)))){
			if (player == 1){
				slot_23 = (static_cast<char>(232));
			} else {
				slot_23 = (static_cast<char>(254));
			}			
		} else if ((slot_16 != (static_cast<char>(254))) && (slot_16 != (static_cast<char>(232)))){
			if (player == 1){
				slot_16 = (static_cast<char>(232));
			} else {
				slot_16 = (static_cast<char>(254));
			}			
		} else if ((slot_9 != (static_cast<char>(254))) && (slot_9 != (static_cast<char>(232)))){
			if (player == 1){
				slot_9 = (static_cast<char>(232));
			} else {
				slot_9 = (static_cast<char>(254));
			}			
		} else if ((slot_2 != (static_cast<char>(254))) && (slot_2 != (static_cast<char>(232)))){
			if (player == 1){
				slot_2 = (static_cast<char>(232));
			} else {
				slot_2 = (static_cast<char>(254));
			}			
		}
	} // End of input 2
	else if ( input == '3'){
		if ((slot_38 != (static_cast<char>(254))) && (slot_38 != (static_cast<char>(232)))){
			if (player == 1){
				slot_38 = (static_cast<char>(232));
			} else {
				slot_38 = (static_cast<char>(254));
			}
		} else if ((slot_31 != (static_cast<char>(254))) && (slot_31 != (static_cast<char>(232)))){
			if (player == 1){
				slot_31 = (static_cast<char>(232));
			} else {
				slot_31 = (static_cast<char>(254));
			}			
		} else if ((slot_24 != (static_cast<char>(254))) && (slot_24 != (static_cast<char>(232)))){
			if (player == 1){
				slot_24 = (static_cast<char>(232));
			} else {
				slot_24 = (static_cast<char>(254));
			}			
		} else if ((slot_17 != (static_cast<char>(254))) && (slot_17 != (static_cast<char>(232)))){
			if (player == 1){
				slot_17 = (static_cast<char>(232));
			} else {
				slot_17 = (static_cast<char>(254));
			}			
		} else if ((slot_10 != (static_cast<char>(254))) && (slot_10 != (static_cast<char>(232)))){
			if (player == 1){
				slot_10 = (static_cast<char>(232));
			} else {
				slot_10 = (static_cast<char>(254));
			}			
		} else if ((slot_3 != (static_cast<char>(254))) && (slot_3 != (static_cast<char>(232)))){
			if (player == 1){
				slot_3 = (static_cast<char>(232));
			} else {
				slot_3 = (static_cast<char>(254));
			}		
		}
	} // End of input 3	
	else if ( input == '4'){
		if ((slot_39 != (static_cast<char>(254))) && (slot_39 != (static_cast<char>(232)))){
			if (player == 1){
				slot_39 = (static_cast<char>(232));
			} else {
				slot_39 = (static_cast<char>(254));
			}
		} else if ((slot_32 != (static_cast<char>(254))) && (slot_32 != (static_cast<char>(232)))){
			if (player == 1){
				slot_32 = (static_cast<char>(232));
			} else {
				slot_32 = (static_cast<char>(254));
			}			
		} else if ((slot_25 != (static_cast<char>(254))) && (slot_25 != (static_cast<char>(232)))){
			if (player == 1){
				slot_25 = (static_cast<char>(232));
			} else {
				slot_25 = (static_cast<char>(254));
			}			
		} else if ((slot_18 != (static_cast<char>(254))) && (slot_18 != (static_cast<char>(232)))){
			if (player == 1){
				slot_18 = (static_cast<char>(232));
			} else {
				slot_18 = (static_cast<char>(254));
			}			
		} else if ((slot_11 != (static_cast<char>(254))) && (slot_11 != (static_cast<char>(232)))){
			if (player == 1){
				slot_11 = (static_cast<char>(232));
			} else {
				slot_11 = (static_cast<char>(254));
			}			
		} else if ((slot_4 != (static_cast<char>(254))) && (slot_4 != (static_cast<char>(232)))){
			if (player == 1){
				slot_4 = (static_cast<char>(232));
			} else {
				slot_4 = (static_cast<char>(254));
			}			
		}
	} // End of input 4	
	else if ( input == '5'){
		if ((slot_40 != (static_cast<char>(254))) && (slot_40 != (static_cast<char>(232)))){
			if (player == 1){
				slot_40 = (static_cast<char>(232));
			} else {
				slot_40 = (static_cast<char>(254));
			}
		} else if ((slot_33 != (static_cast<char>(254))) && (slot_33 != (static_cast<char>(232)))){
			if (player == 1){
				slot_33 = (static_cast<char>(232));
			} else {
				slot_33 = (static_cast<char>(254));
			}			
		} else if ((slot_26 != (static_cast<char>(254))) && (slot_26 != (static_cast<char>(232)))){
			if (player == 1){
				slot_26 = (static_cast<char>(232));
			} else {
				slot_26 = (static_cast<char>(254));
			}			
		} else if ((slot_19 != (static_cast<char>(254))) && (slot_19 != (static_cast<char>(232)))){
			if (player == 1){
				slot_19 = (static_cast<char>(232));
			} else {
				slot_19 = (static_cast<char>(254));
			}			
		} else if ((slot_12 != (static_cast<char>(254))) && (slot_12 != (static_cast<char>(232)))){
			if (player == 1){
				slot_12 = (static_cast<char>(232));
			} else {
				slot_12 = (static_cast<char>(254));
			}			
		} else if ((slot_5 != (static_cast<char>(254))) && (slot_5 != (static_cast<char>(232)))){
			if (player == 1){
				slot_5 = (static_cast<char>(232));
			} else {
				slot_5 = (static_cast<char>(254));
			}			
		}
	} // End of input 5	
	else if ( input == '6'){
		if ((slot_41 != (static_cast<char>(254))) && (slot_41 != (static_cast<char>(232)))){
			if (player == 1){
				slot_41 = (static_cast<char>(232));
			} else {
				slot_41 = (static_cast<char>(254));
			}
		} else if ((slot_34 != (static_cast<char>(254))) && (slot_34 != (static_cast<char>(232)))){
			if (player == 1){
				slot_34 = (static_cast<char>(232));
			} else {
				slot_34 = (static_cast<char>(254));
			}			
		} else if ((slot_27 != (static_cast<char>(254))) && (slot_27 != (static_cast<char>(232)))){
			if (player == 1){
				slot_27 = (static_cast<char>(232));
			} else {
				slot_27 = (static_cast<char>(254));
			}			
		} else if ((slot_20 != (static_cast<char>(254))) && (slot_20 != (static_cast<char>(232)))){
			if (player == 1){
				slot_20 = (static_cast<char>(232));
			} else {
				slot_20 = (static_cast<char>(254));
			}			
		} else if ((slot_13 != (static_cast<char>(254))) && (slot_13 != (static_cast<char>(232)))){
			if (player == 1){
				slot_13 = (static_cast<char>(232));
			} else {
				slot_13 = (static_cast<char>(254));
			}			
		} else if ((slot_6 != (static_cast<char>(254))) && (slot_6 != (static_cast<char>(232)))){
			if (player == 1){
				slot_6 = (static_cast<char>(232));
			} else {
				slot_6 = (static_cast<char>(254));
			}			
		}
	} // End of input 6
	else if ( input == '7'){
		if ((slot_42 != (static_cast<char>(254))) && (slot_42 != (static_cast<char>(232)))){
			if (player == 1){
				slot_42 = (static_cast<char>(232));
			} else {
				slot_42 = (static_cast<char>(254));
			}
		} else if ((slot_35 != (static_cast<char>(254))) && (slot_35 != (static_cast<char>(232)))){
			if (player == 1){
				slot_35 = (static_cast<char>(232));
			} else {
				slot_35 = (static_cast<char>(254));
			}			
		} else if ((slot_28 != (static_cast<char>(254))) && (slot_28 != (static_cast<char>(232)))){
			if (player == 1){
				slot_28 = (static_cast<char>(232));
			} else {
				slot_28 = (static_cast<char>(254));
			}			
		} else if ((slot_21 != (static_cast<char>(254))) && (slot_21 != (static_cast<char>(232)))){
			if (player == 1){
				slot_21 = (static_cast<char>(232));
			} else {
				slot_21 = (static_cast<char>(254));
			}			
		} else if ((slot_14 != (static_cast<char>(254))) && (slot_14 != (static_cast<char>(232)))){
			if (player == 1){
				slot_14 = (static_cast<char>(232));
			} else {
				slot_14 = (static_cast<char>(254));
			}			
		} else if ((slot_7 != (static_cast<char>(254))) && (slot_7 != (static_cast<char>(232)))){
			if (player == 1){
				slot_7 = (static_cast<char>(232));
			} else {
				slot_7 = (static_cast<char>(254));
			}			
		}
	} // End of input 5					
} //End of function

void checkForWin(int &winFlag){
	if ((slot_36 == (static_cast<char>(254))) && (slot_29 == (static_cast<char>(254))) && (slot_22 == (static_cast<char>(254))) && (slot_15 == (static_cast<char>(254))) ||
	     (slot_36 == (static_cast<char>(232))) && (slot_29 == (static_cast<char>(232))) && (slot_22 == (static_cast<char>(232))) && (slot_15 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_29 == (static_cast<char>(254))) && (slot_22 == (static_cast<char>(254))) && (slot_15 == (static_cast<char>(254))) && (slot_8 == (static_cast<char>(254))) ||
	     (slot_29 == (static_cast<char>(232))) && (slot_22 == (static_cast<char>(232))) && (slot_15 == (static_cast<char>(232))) && (slot_8 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	else if ((slot_22 == (static_cast<char>(254))) && (slot_15 == (static_cast<char>(254))) && (slot_8 == (static_cast<char>(254))) && (slot_1 == (static_cast<char>(254))) ||
	     (slot_22 == (static_cast<char>(232))) && (slot_15 == (static_cast<char>(232))) && (slot_8 == (static_cast<char>(232))) && (slot_1 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	// Checking for row 2	 
	else if ((slot_37 == (static_cast<char>(254))) && (slot_30 == (static_cast<char>(254))) && (slot_23 == (static_cast<char>(254))) && (slot_16 == (static_cast<char>(254))) ||
	     (slot_37 == (static_cast<char>(232))) && (slot_30 == (static_cast<char>(232))) && (slot_23 == (static_cast<char>(232))) && (slot_16 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_30 == (static_cast<char>(254))) && (slot_23 == (static_cast<char>(254))) && (slot_16 == (static_cast<char>(254))) && (slot_9 == (static_cast<char>(254))) ||
	     (slot_30 == (static_cast<char>(232))) && (slot_23 == (static_cast<char>(232))) && (slot_16 == (static_cast<char>(232))) && (slot_9 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	else if ((slot_23 == (static_cast<char>(254))) && (slot_16 == (static_cast<char>(254))) && (slot_9 == (static_cast<char>(254))) && (slot_2 == (static_cast<char>(254))) ||
	     (slot_23 == (static_cast<char>(232))) && (slot_16 == (static_cast<char>(232))) && (slot_9 == (static_cast<char>(232))) && (slot_2 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	// Checking for row 3	 
	else if ((slot_38 == (static_cast<char>(254))) && (slot_31 == (static_cast<char>(254))) && (slot_24 == (static_cast<char>(254))) && (slot_17 == (static_cast<char>(254))) ||
	     (slot_38 == (static_cast<char>(232))) && (slot_31 == (static_cast<char>(232))) && (slot_24 == (static_cast<char>(232))) && (slot_17 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_31 == (static_cast<char>(254))) && (slot_24 == (static_cast<char>(254))) && (slot_17 == (static_cast<char>(254))) && (slot_10 == (static_cast<char>(254))) ||
	     (slot_31 == (static_cast<char>(232))) && (slot_24 == (static_cast<char>(232))) && (slot_17 == (static_cast<char>(232))) && (slot_10 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	else if ((slot_24 == (static_cast<char>(254))) && (slot_17 == (static_cast<char>(254))) && (slot_10 == (static_cast<char>(254))) && (slot_3 == (static_cast<char>(254))) ||
	     (slot_24 == (static_cast<char>(232))) && (slot_17 == (static_cast<char>(232))) && (slot_10 == (static_cast<char>(232))) && (slot_3 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// Checking for row 4	 
	else if ((slot_39 == (static_cast<char>(254))) && (slot_32 == (static_cast<char>(254))) && (slot_25 == (static_cast<char>(254))) && (slot_18 == (static_cast<char>(254))) ||
	     (slot_39 == (static_cast<char>(232))) && (slot_32 == (static_cast<char>(232))) && (slot_25 == (static_cast<char>(232))) && (slot_18 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_32 == (static_cast<char>(254))) && (slot_25 == (static_cast<char>(254))) && (slot_18 == (static_cast<char>(254))) && (slot_11 == (static_cast<char>(254))) ||
	     (slot_32 == (static_cast<char>(232))) && (slot_25 == (static_cast<char>(232))) && (slot_18 == (static_cast<char>(232))) && (slot_11 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	else if ((slot_25 == (static_cast<char>(254))) && (slot_18 == (static_cast<char>(254))) && (slot_11 == (static_cast<char>(254))) && (slot_4 == (static_cast<char>(254))) ||
	     (slot_25 == (static_cast<char>(232))) && (slot_18 == (static_cast<char>(232))) && (slot_11 == (static_cast<char>(232))) && (slot_4 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// Checking for row 5	 
	else if ((slot_40 == (static_cast<char>(254))) && (slot_33 == (static_cast<char>(254))) && (slot_26 == (static_cast<char>(254))) && (slot_19 == (static_cast<char>(254))) ||
	     (slot_40 == (static_cast<char>(232))) && (slot_33 == (static_cast<char>(232))) && (slot_26 == (static_cast<char>(232))) && (slot_19 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_33 == (static_cast<char>(254))) && (slot_26 == (static_cast<char>(254))) && (slot_19 == (static_cast<char>(254))) && (slot_12 == (static_cast<char>(254))) ||
	     (slot_33 == (static_cast<char>(232))) && (slot_26 == (static_cast<char>(232))) && (slot_19 == (static_cast<char>(232))) && (slot_12 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	else if ((slot_26 == (static_cast<char>(254))) && (slot_19 == (static_cast<char>(254))) && (slot_12 == (static_cast<char>(254))) && (slot_5 == (static_cast<char>(254))) ||
	     (slot_26 == (static_cast<char>(232))) && (slot_19 == (static_cast<char>(232))) && (slot_12 == (static_cast<char>(232))) && (slot_5 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// Checking for row 6	 
	else if ((slot_41 == (static_cast<char>(254))) && (slot_34 == (static_cast<char>(254))) && (slot_27 == (static_cast<char>(254))) && (slot_20 == (static_cast<char>(254))) ||
	     (slot_41 == (static_cast<char>(232))) && (slot_34 == (static_cast<char>(232))) && (slot_27 == (static_cast<char>(232))) && (slot_20 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_34 == (static_cast<char>(254))) && (slot_27 == (static_cast<char>(254))) && (slot_20 == (static_cast<char>(254))) && (slot_13 == (static_cast<char>(254))) ||
	     (slot_34 == (static_cast<char>(232))) && (slot_27 == (static_cast<char>(232))) && (slot_20 == (static_cast<char>(232))) && (slot_13 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	else if ((slot_27 == (static_cast<char>(254))) && (slot_20 == (static_cast<char>(254))) && (slot_13 == (static_cast<char>(254))) && (slot_6 == (static_cast<char>(254))) ||
	     (slot_27 == (static_cast<char>(232))) && (slot_20 == (static_cast<char>(232))) && (slot_13 == (static_cast<char>(232))) && (slot_6 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// Checking for row 7	 
	else if ((slot_42 == (static_cast<char>(254))) && (slot_35 == (static_cast<char>(254))) && (slot_28 == (static_cast<char>(254))) && (slot_21 == (static_cast<char>(254))) ||
	     (slot_42 == (static_cast<char>(232))) && (slot_35 == (static_cast<char>(232))) && (slot_28 == (static_cast<char>(232))) && (slot_21 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_35 == (static_cast<char>(254))) && (slot_28 == (static_cast<char>(254))) && (slot_21 == (static_cast<char>(254))) && (slot_14 == (static_cast<char>(254))) ||
	     (slot_35 == (static_cast<char>(232))) && (slot_28 == (static_cast<char>(232))) && (slot_21 == (static_cast<char>(232))) && (slot_14 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	else if ((slot_28 == (static_cast<char>(254))) && (slot_21 == (static_cast<char>(254))) && (slot_14 == (static_cast<char>(254))) && (slot_7 == (static_cast<char>(254))) ||
	     (slot_28 == (static_cast<char>(232))) && (slot_21 == (static_cast<char>(232))) && (slot_14 == (static_cast<char>(232))) && (slot_7 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	// Column 1
	else if ((slot_36 == (static_cast<char>(254))) && (slot_37 == (static_cast<char>(254))) && (slot_38 == (static_cast<char>(254))) && (slot_39 == (static_cast<char>(254))) ||
	     (slot_36 == (static_cast<char>(232))) && (slot_37 == (static_cast<char>(232))) && (slot_38 == (static_cast<char>(232))) && (slot_39 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_37 == (static_cast<char>(254))) && (slot_38 == (static_cast<char>(254))) && (slot_39 == (static_cast<char>(254))) && (slot_40 == (static_cast<char>(254))) ||
	     (slot_37 == (static_cast<char>(232))) && (slot_38 == (static_cast<char>(232))) && (slot_39 == (static_cast<char>(232))) && (slot_40 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	else if ((slot_38 == (static_cast<char>(254))) && (slot_39 == (static_cast<char>(254))) && (slot_40 == (static_cast<char>(254))) && (slot_41 == (static_cast<char>(254))) ||
	     (slot_38 == (static_cast<char>(232))) && (slot_39 == (static_cast<char>(232))) && (slot_40 == (static_cast<char>(232))) && (slot_41 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	else if ((slot_39 == (static_cast<char>(254))) && (slot_40 == (static_cast<char>(254))) && (slot_41 == (static_cast<char>(254))) && (slot_42 == (static_cast<char>(254))) ||
	     (slot_39 == (static_cast<char>(232))) && (slot_40 == (static_cast<char>(232))) && (slot_41 == (static_cast<char>(232))) && (slot_42 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// Column 2
	else if ((slot_29 == (static_cast<char>(254))) && (slot_30 == (static_cast<char>(254))) && (slot_31 == (static_cast<char>(254))) && (slot_32 == (static_cast<char>(254))) ||
	     (slot_29 == (static_cast<char>(232))) && (slot_30 == (static_cast<char>(232))) && (slot_31 == (static_cast<char>(232))) && (slot_32 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_30 == (static_cast<char>(254))) && (slot_31 == (static_cast<char>(254))) && (slot_32 == (static_cast<char>(254))) && (slot_33 == (static_cast<char>(254))) ||
	     (slot_30 == (static_cast<char>(232))) && (slot_31 == (static_cast<char>(232))) && (slot_32 == (static_cast<char>(232))) && (slot_33 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	else if ((slot_31 == (static_cast<char>(254))) && (slot_32 == (static_cast<char>(254))) && (slot_33 == (static_cast<char>(254))) && (slot_34 == (static_cast<char>(254))) ||
	     (slot_31 == (static_cast<char>(232))) && (slot_32 == (static_cast<char>(232))) && (slot_33 == (static_cast<char>(232))) && (slot_34 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	else if ((slot_32 == (static_cast<char>(254))) && (slot_33 == (static_cast<char>(254))) && (slot_34 == (static_cast<char>(254))) && (slot_35 == (static_cast<char>(254))) ||
	     (slot_32 == (static_cast<char>(232))) && (slot_33 == (static_cast<char>(232))) && (slot_34 == (static_cast<char>(232))) && (slot_35 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// Column 3
	else if ((slot_22 == (static_cast<char>(254))) && (slot_23 == (static_cast<char>(254))) && (slot_24 == (static_cast<char>(254))) && (slot_25 == (static_cast<char>(254))) ||
	     (slot_22 == (static_cast<char>(232))) && (slot_23 == (static_cast<char>(232))) && (slot_24 == (static_cast<char>(232))) && (slot_25 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_23 == (static_cast<char>(254))) && (slot_24 == (static_cast<char>(254))) && (slot_25 == (static_cast<char>(254))) && (slot_26 == (static_cast<char>(254))) ||
	     (slot_23 == (static_cast<char>(232))) && (slot_24 == (static_cast<char>(232))) && (slot_25 == (static_cast<char>(232))) && (slot_26 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	else if ((slot_24 == (static_cast<char>(254))) && (slot_25 == (static_cast<char>(254))) && (slot_26 == (static_cast<char>(254))) && (slot_27 == (static_cast<char>(254))) ||
	     (slot_24 == (static_cast<char>(232))) && (slot_25 == (static_cast<char>(232))) && (slot_26 == (static_cast<char>(232))) && (slot_27 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	else if ((slot_25 == (static_cast<char>(254))) && (slot_26 == (static_cast<char>(254))) && (slot_27 == (static_cast<char>(254))) && (slot_28 == (static_cast<char>(254))) ||
	     (slot_25 == (static_cast<char>(232))) && (slot_26 == (static_cast<char>(232))) && (slot_27 == (static_cast<char>(232))) && (slot_28 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// Column 4
	else if ((slot_15 == (static_cast<char>(254))) && (slot_16 == (static_cast<char>(254))) && (slot_17 == (static_cast<char>(254))) && (slot_18 == (static_cast<char>(254))) ||
	     (slot_15 == (static_cast<char>(232))) && (slot_16 == (static_cast<char>(232))) && (slot_17 == (static_cast<char>(232))) && (slot_18 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_16 == (static_cast<char>(254))) && (slot_17 == (static_cast<char>(254))) && (slot_18 == (static_cast<char>(254))) && (slot_19 == (static_cast<char>(254))) ||
	     (slot_16 == (static_cast<char>(232))) && (slot_17 == (static_cast<char>(232))) && (slot_18 == (static_cast<char>(232))) && (slot_19 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	else if ((slot_17 == (static_cast<char>(254))) && (slot_18 == (static_cast<char>(254))) && (slot_19 == (static_cast<char>(254))) && (slot_20 == (static_cast<char>(254))) ||
	     (slot_17 == (static_cast<char>(232))) && (slot_18 == (static_cast<char>(232))) && (slot_19 == (static_cast<char>(232))) && (slot_20 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	else if ((slot_21 == (static_cast<char>(254))) && (slot_22 == (static_cast<char>(254))) && (slot_23 == (static_cast<char>(254))) && (slot_24 == (static_cast<char>(254))) ||
	     (slot_21 == (static_cast<char>(232))) && (slot_22 == (static_cast<char>(232))) && (slot_23 == (static_cast<char>(232))) && (slot_24 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// Column 5
	else if ((slot_8 == (static_cast<char>(254))) && (slot_9 == (static_cast<char>(254))) && (slot_10 == (static_cast<char>(254))) && (slot_11 == (static_cast<char>(254))) ||
	     (slot_8 == (static_cast<char>(232))) && (slot_9 == (static_cast<char>(232))) && (slot_10 == (static_cast<char>(232))) && (slot_11 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_9 == (static_cast<char>(254))) && (slot_10 == (static_cast<char>(254))) && (slot_11 == (static_cast<char>(254))) && (slot_12 == (static_cast<char>(254))) ||
	     (slot_9 == (static_cast<char>(232))) && (slot_10 == (static_cast<char>(232))) && (slot_11 == (static_cast<char>(232))) && (slot_12 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	else if ((slot_10 == (static_cast<char>(254))) && (slot_11 == (static_cast<char>(254))) && (slot_12 == (static_cast<char>(254))) && (slot_13 == (static_cast<char>(254))) ||
	     (slot_10 == (static_cast<char>(232))) && (slot_11 == (static_cast<char>(232))) && (slot_12 == (static_cast<char>(232))) && (slot_13 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	else if ((slot_11 == (static_cast<char>(254))) && (slot_12 == (static_cast<char>(254))) && (slot_13 == (static_cast<char>(254))) && (slot_14 == (static_cast<char>(254))) ||
	     (slot_11 == (static_cast<char>(232))) && (slot_12 == (static_cast<char>(232))) && (slot_13 == (static_cast<char>(232))) && (slot_14 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 	 	 	 		 
	// Column 6
	else if ((slot_1 == (static_cast<char>(254))) && (slot_2 == (static_cast<char>(254))) && (slot_3 == (static_cast<char>(254))) && (slot_4 == (static_cast<char>(254))) ||
	     (slot_1 == (static_cast<char>(232))) && (slot_2 == (static_cast<char>(232))) && (slot_3 == (static_cast<char>(232))) && (slot_4 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_2 == (static_cast<char>(254))) && (slot_3 == (static_cast<char>(254))) && (slot_4 == (static_cast<char>(254))) && (slot_5 == (static_cast<char>(254))) ||
	     (slot_2 == (static_cast<char>(232))) && (slot_3 == (static_cast<char>(232))) && (slot_4 == (static_cast<char>(232))) && (slot_5 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	else if ((slot_3 == (static_cast<char>(254))) && (slot_4 == (static_cast<char>(254))) && (slot_5 == (static_cast<char>(254))) && (slot_6 == (static_cast<char>(254))) ||
	     (slot_3 == (static_cast<char>(232))) && (slot_4 == (static_cast<char>(232))) && (slot_5 == (static_cast<char>(232))) && (slot_6 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	else if ((slot_4 == (static_cast<char>(254))) && (slot_5 == (static_cast<char>(254))) && (slot_6 == (static_cast<char>(254))) && (slot_7 == (static_cast<char>(254))) ||
	     (slot_4 == (static_cast<char>(232))) && (slot_5 == (static_cast<char>(232))) && (slot_6 == (static_cast<char>(232))) && (slot_7 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// 1 hori 1
	else if ((slot_22 == (static_cast<char>(254))) && (slot_16 == (static_cast<char>(254))) && (slot_10 == (static_cast<char>(254))) && (slot_4 == (static_cast<char>(254))) ||
	     (slot_22 == (static_cast<char>(232))) && (slot_16 == (static_cast<char>(232))) && (slot_10 == (static_cast<char>(232))) && (slot_4 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	// 1 hori 2	 
	else if ((slot_29 == (static_cast<char>(254))) && (slot_23 == (static_cast<char>(254))) && (slot_17 == (static_cast<char>(254))) && (slot_11 == (static_cast<char>(254))) ||
	     (slot_29 == (static_cast<char>(232))) && (slot_23 == (static_cast<char>(232))) && (slot_17 == (static_cast<char>(232))) && (slot_11 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	else if ((slot_23 == (static_cast<char>(254))) && (slot_17 == (static_cast<char>(254))) && (slot_11 == (static_cast<char>(254))) && (slot_5 == (static_cast<char>(254))) ||
	     (slot_23 == (static_cast<char>(232))) && (slot_17 == (static_cast<char>(232))) && (slot_11 == (static_cast<char>(232))) && (slot_5 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	// 1 hori 3	 	
	else if ((slot_36 == (static_cast<char>(254))) && (slot_30 == (static_cast<char>(254))) && (slot_24 == (static_cast<char>(254))) && (slot_18 == (static_cast<char>(254))) ||
	     (slot_36 == (static_cast<char>(232))) && (slot_30 == (static_cast<char>(232))) && (slot_24 == (static_cast<char>(232))) && (slot_18 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	else if ((slot_30 == (static_cast<char>(254))) && (slot_24 == (static_cast<char>(254))) && (slot_18 == (static_cast<char>(254))) && (slot_12 == (static_cast<char>(254)))||
	      (slot_30 == (static_cast<char>(232))) && (slot_24 == (static_cast<char>(232))) && (slot_18 == (static_cast<char>(232))) && (slot_12 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_24 == (static_cast<char>(254))) && (slot_18 == (static_cast<char>(254))) && (slot_12 == (static_cast<char>(254))) && (slot_6 == (static_cast<char>(254)))||
	       (slot_24 == (static_cast<char>(232))) && (slot_18 == (static_cast<char>(232))) && (slot_12 == (static_cast<char>(232))) && (slot_6 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	// 1 hori 4	 	
	else if ((slot_37 == (static_cast<char>(254))) && (slot_31 == (static_cast<char>(254))) && (slot_25 == (static_cast<char>(254))) && (slot_19 == (static_cast<char>(254))) ||
	     (slot_37 == (static_cast<char>(232))) && (slot_31 == (static_cast<char>(232))) && (slot_25 == (static_cast<char>(232))) && (slot_19 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	else if ((slot_31 == (static_cast<char>(254))) && (slot_25 == (static_cast<char>(254))) && (slot_19 == (static_cast<char>(254))) && (slot_13 == (static_cast<char>(254)))||
	      (slot_31 == (static_cast<char>(232))) && (slot_25 == (static_cast<char>(232))) && (slot_19 == (static_cast<char>(232))) && (slot_13 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_25 == (static_cast<char>(254))) && (slot_19 == (static_cast<char>(254))) && (slot_13 == (static_cast<char>(254))) && (slot_7 == (static_cast<char>(254)))||
	       (slot_25 == (static_cast<char>(232))) && (slot_19 == (static_cast<char>(232))) && (slot_13 == (static_cast<char>(232))) && (slot_7 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	// 1 hori 5	 
	else if ((slot_38 == (static_cast<char>(254))) && (slot_32 == (static_cast<char>(254))) && (slot_26 == (static_cast<char>(254))) && (slot_20 == (static_cast<char>(254))) ||
	     (slot_38 == (static_cast<char>(232))) && (slot_32 == (static_cast<char>(232))) && (slot_26 == (static_cast<char>(232))) && (slot_20 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }		 
	else if ((slot_32 == (static_cast<char>(254))) && (slot_26 == (static_cast<char>(254))) && (slot_20 == (static_cast<char>(254))) && (slot_14 == (static_cast<char>(254))) ||
	     (slot_32 == (static_cast<char>(232))) && (slot_26 == (static_cast<char>(232))) && (slot_20 == (static_cast<char>(232))) && (slot_14 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// 1 hori 6	 
	else if ((slot_39 == (static_cast<char>(254))) && (slot_33 == (static_cast<char>(254))) && (slot_27 == (static_cast<char>(254))) && (slot_21 == (static_cast<char>(254))) ||
	     (slot_39 == (static_cast<char>(232))) && (slot_33 == (static_cast<char>(232))) && (slot_27 == (static_cast<char>(232))) && (slot_21 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// 2 hori 1	 
	else if ((slot_15 == (static_cast<char>(254))) && (slot_23 == (static_cast<char>(254))) && (slot_31 == (static_cast<char>(254))) && (slot_39 == (static_cast<char>(254))) ||
	     (slot_15 == (static_cast<char>(232))) && (slot_23 == (static_cast<char>(232))) && (slot_31 == (static_cast<char>(232))) && (slot_39 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// 2 hori 2	 
	else if ((slot_8 == (static_cast<char>(254))) && (slot_16 == (static_cast<char>(254))) && (slot_24 == (static_cast<char>(254))) && (slot_32 == (static_cast<char>(254))) ||
	     (slot_8 == (static_cast<char>(232))) && (slot_16 == (static_cast<char>(232))) && (slot_24 == (static_cast<char>(232))) && (slot_32 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	else if ((slot_16 == (static_cast<char>(254))) && (slot_24 == (static_cast<char>(254))) && (slot_32 == (static_cast<char>(254))) && (slot_40 == (static_cast<char>(254))) ||
	      (slot_16 == (static_cast<char>(232))) && (slot_24 == (static_cast<char>(232))) && (slot_32 == (static_cast<char>(232))) && (slot_40 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// 2 hori 3	 	
	else if ((slot_1 == (static_cast<char>(254))) && (slot_9 == (static_cast<char>(254))) && (slot_17 == (static_cast<char>(254))) && (slot_25 == (static_cast<char>(254))) ||
	      (slot_1 == (static_cast<char>(232))) && (slot_9 == (static_cast<char>(232))) && (slot_17 == (static_cast<char>(232))) && (slot_25 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	else if ((slot_9 == (static_cast<char>(254))) && (slot_17 == (static_cast<char>(254))) && (slot_25 == (static_cast<char>(254))) && (slot_33 == (static_cast<char>(254)))||
	       (slot_9 == (static_cast<char>(232))) && (slot_17 == (static_cast<char>(232))) && (slot_25 == (static_cast<char>(232))) && (slot_33 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
	else if ((slot_17 == (static_cast<char>(254))) && (slot_25 == (static_cast<char>(254))) && (slot_33 == (static_cast<char>(254))) && (slot_41 == (static_cast<char>(254)))||
	     (slot_17 == (static_cast<char>(232))) && (slot_25 == (static_cast<char>(232))) && (slot_33 == (static_cast<char>(232))) && (slot_41 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// 2 hori 4	 	
	else if ((slot_2 == (static_cast<char>(254))) && (slot_10 == (static_cast<char>(254))) && (slot_18 == (static_cast<char>(254))) && (slot_26 == (static_cast<char>(254))) ||
	      (slot_2 == (static_cast<char>(232))) && (slot_10 == (static_cast<char>(232))) && (slot_18 == (static_cast<char>(232))) && (slot_26 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	else if ((slot_10 == (static_cast<char>(254))) && (slot_18 == (static_cast<char>(254))) && (slot_26 == (static_cast<char>(254))) && (slot_34 == (static_cast<char>(254))) ||
	       (slot_10 == (static_cast<char>(232))) && (slot_18 == (static_cast<char>(232))) && (slot_26 == (static_cast<char>(232))) && (slot_34 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	else if ((slot_18 == (static_cast<char>(254))) && (slot_26 == (static_cast<char>(254))) && (slot_34 == (static_cast<char>(254))) && (slot_42 == (static_cast<char>(254))) ||
	        (slot_18 == (static_cast<char>(232))) && (slot_26 == (static_cast<char>(232))) && (slot_34 == (static_cast<char>(232))) && (slot_42 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// 2 hori 5	 	
	else if ((slot_3 == (static_cast<char>(254))) && (slot_11 == (static_cast<char>(254))) && (slot_19 == (static_cast<char>(254))) && (slot_27 == (static_cast<char>(254))) ||
	      (slot_3 == (static_cast<char>(232))) && (slot_11 == (static_cast<char>(232))) && (slot_19 == (static_cast<char>(232))) && (slot_27 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	else if ((slot_11 == (static_cast<char>(254))) && (slot_19 == (static_cast<char>(254))) && (slot_27 == (static_cast<char>(254))) && (slot_35 == (static_cast<char>(254))) ||
	       (slot_11 == (static_cast<char>(232))) && (slot_19 == (static_cast<char>(232))) && (slot_27 == (static_cast<char>(232))) && (slot_35 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }	
	// 2 hori 6	 	
	else if ((slot_4 == (static_cast<char>(254))) && (slot_12 == (static_cast<char>(254))) && (slot_20 == (static_cast<char>(254))) && (slot_28 == (static_cast<char>(254))) ||
	      (slot_4 == (static_cast<char>(232))) && (slot_12 == (static_cast<char>(232))) && (slot_20 == (static_cast<char>(232))) && (slot_28 == (static_cast<char>(232)))){
	     	winFlag = 1;
		 }
    //___________________________ Check For draw______________________________________________________________
    else if (((slot_1 == static_cast<char>(232))||(slot_1 == static_cast<char>(254)))&&
	         ((slot_2 == static_cast<char>(232))||(slot_2 == static_cast<char>(254)))&&
	         ((slot_3 == static_cast<char>(232))||(slot_3 == static_cast<char>(254)))&&
	         ((slot_4 == static_cast<char>(232))||(slot_4 == static_cast<char>(254)))&&
	         ((slot_5 == static_cast<char>(232))||(slot_5 == static_cast<char>(254)))&&
	         ((slot_6 == static_cast<char>(232))||(slot_6 == static_cast<char>(254)))&&
	         ((slot_7 == static_cast<char>(232))||(slot_7 == static_cast<char>(254)))			 
			 ){
			 	winFlag = 2;
			 }				 			 			 		 	 		 	 	 	 		 	 	 		 		 		 	 		 	 	 	 		 			 
} //end of check for win

