#include <iostream>
//#include <conio.h>
//#include <windows.h>
#include <vector>
#include <string>
using namespace std;

 void display_board();  // This a funtion that displays the board 
 void set_position (char &, int player);
 void clear_position (char &);
 char check_slot (char &position);
 void screen_layout();
 void check_for_win(int &, int &);
 void check_for_game_over(int,int&,int&,int&);
 bool dice_choose (vector<char>&, char move);
 void fill_dice (vector<char>);
 void displace_dice ();
 void switch_players(int &);
 void draw_display(int &, int &);
 void restart_game(char&slot_1,char&slot_2,char&slot_3,char&slot_4,char&slot_5,char&slot_6,char&slot_7,char&slot_8,char&slot_9);
 void display_player_scores();
 
 vector<char>dice;
 vector<char>dice_two;
 
 char slot_1, slot_2, slot_3, slot_4, slot_5, slot_6, slot_7, slot_8, slot_9, move='1',position_at,input;
 int flag = 1, re_enter = 0, accept_bool = 1, player = 1, whos_name = 0, player_one_score = 0, player_two_score = 0, draw = 0;
 string player_one, player_two;

int main(){
	cout << "What is Player one's name?\n=> "; getline (cin,player_one);
	cout << "\nWhat is Player two's name?\n=> "; getline (cin,player_two);
	START:
	fill_dice(dice);

	do {
			do{
		            DO_AGAIN :
					  do{
					      system ("clear");
					      display_player_scores();
						  screen_layout(); 	
						  displace_dice();
					      display_board();
					      if (player == 1){
					      	cout << "\t>>> It is " << player_one <<"'s turn <<<\n";
					      	cout << "\t Enter letter 'a' to select and the number 1 - 9 to place it\n";
						  } else {
						  	cout << "\t>>> It is " << player_two <<"'s turn\n <<<";
						  	cout << "\t Enter letter 'b' to select and the number 1 - 9 to place it\n";
						  }
					      check_for_win(flag, whos_name);
					      if(flag == 0){
					      	check_for_game_over(whos_name,flag,player_one_score,player_two_score);
						  	cout << "Would you like to play again? ('Y' or 'N')\n=> "; cin >> input;
						  	if ((input == 'Y')||(input == 'y')){
						  		restart_game(slot_1,slot_2,slot_3,slot_4,slot_5,slot_6,slot_7,slot_8,slot_9);
						  		goto START;
							  }					      	
						  } else if (flag == 3) {
						  	draw_display(flag, draw);
						  	cout << "Would you like to play again? ('Y' or 'N')\n=> "; cin >> input;
						  	if ((input == 'Y')||(input == 'y')){
						  		restart_game(slot_1,slot_2,slot_3,slot_4,slot_5,slot_6,slot_7,slot_8,slot_9);
						  		goto START;
							  }
						  }
					  	  if ((!((move>='1' && move<='9') ||(move =='a')||(move =='b')))||(re_enter == 1)){
					  	  	  cout << "\n\t** Sorry, make another move **\n\n";
							}
						  cout << "\nMove from :\n=> ";
						  move = getche();
						  cout << "\n\nTo :\n=> ";
						  position_at = getche();	
						  re_enter = check_slot(position_at);  	
					  } while ((!((move>='1' && move<='9') ||(move =='a')||(move =='b')))||(re_enter == 1));
					  accept_bool = dice_choose (dice, move);		
		            if (accept_bool == 0){
		            	goto DO_AGAIN;
					}
				set_position(position_at, player);
				switch_players(player);			
			} while (( flag != 0)||( flag != 3));		
		
		cout << "Would you like to play again? ('Y' or 'N')\n=> "; cin >> input;
	} while ((input == 'Y')||(input == 'y'));

	
	return 0;
}
//screen layout
void screen_layout(){ 
	cout << "\n\n\n";
}
//**********************************************
void display_board(){
	cout << "\t\t\t-------------------------------\t\t\t-------------------" << endl;
	cout << "\t\t\t|    " << slot_1 << "    |    " << slot_2 << "    |    "<< slot_3 << "    |\t\t\t|  1  |  2  |  3  |\n";
	cout << "\t\t\t-------------------------------\t\t\t-------------------" << endl;
	cout << "\t\t\t|    " << slot_4 << "    |    " << slot_5 << "    |    "<< slot_6 << "    |\t\t\t|  4  |  5  |  6  |\n";
	cout << "\t\t\t-------------------------------\t\t\t-------------------" << endl;
	cout << "\t\t\t|    " << slot_7 << "    |    " << slot_8 << "    |    "<< slot_9 << "    |\t\t\t|  7  |  8  |  9  |\n";
	cout << "\t\t\t-------------------------------\t\t\t-------------------" << endl;
	cout << "\n\n***************************************************************************\n";
}
void set_position(char &position,int player){
	
	if ((position == '1') && (player == 1)){
	   slot_1 = static_cast<char>(232);	
	}
	else if ((position == '2') && (player == 1)){
		slot_2 = static_cast<char>(232);
	}
	else if ((position == '3') && (player == 1)){
		slot_3 = static_cast<char>(232);
	}
	else if ((position == '4') && (player == 1)){
		slot_4 = static_cast<char>(232);
	}
	else if ((position == '5') && (player == 1)){
		slot_5 = static_cast<char>(232);
	}
	else if ((position == '6') && (player == 1)){
		slot_6 = static_cast<char>(232);
	}
	else if ((position == '7') && (player == 1)){
		slot_7 = static_cast<char>(232);
	}
	else if ((position == '8') && (player == 1)){
		slot_8 = static_cast<char>(232);
	}
	else if ((position == '9') && (player == 1)){
		slot_9 = static_cast<char>(232);
	}		
//----------------------------------------------
	if ((position == '1') && (player == 2)){
	   slot_1 = static_cast<char>(254);	
	}
	else if ((position == '2') && (player == 2)){
		slot_2 = static_cast<char>(254);
	}
	else if ((position == '3') && (player == 2)){
		slot_3 = static_cast<char>(254);
	}
	else if ((position == '4') && (player == 2)){
		slot_4 = static_cast<char>(254);
	}
	else if ((position == '5') && (player == 2)){
		slot_5 = static_cast<char>(254);
	}
	else if ((position == '6') && (player == 2)){
		slot_6 = static_cast<char>(254);
	}
	else if ((position == '7') && (player == 2)){
		slot_7 = static_cast<char>(254);
	}
	else if ((position == '8') && (player == 2)){
		slot_8 = static_cast<char>(254);
	}
	else if ((position == '9') && (player == 2)){
		slot_9 = static_cast<char>(254);
	}							
}
//***************************************
char check_slot (char &position){
	int stop;
	if (position == '1'){
	   if ((slot_1 == static_cast<char>(232))||(slot_1 == static_cast<char>(254))){
	   	stop = 1;
	   }
	}
	else if (position == '2'){
	   if ((slot_2 == static_cast<char>(232))||(slot_2 == static_cast<char>(254))){
	   	stop = 1;
	   }
	}
	else if (position == '3'){
	   if ((slot_3 == static_cast<char>(232))||(slot_3 == static_cast<char>(254))){
	   	stop = 1;
	   }
	}
	else if (position == '4'){
	   if ((slot_4 == static_cast<char>(232))||(slot_4 == static_cast<char>(254))){
	   	stop = 1;
	   }
	}
	else if (position == '5'){
	   if ((slot_5 == static_cast<char>(232))||(slot_5 == static_cast<char>(254))){
	   	stop = 1;
	   }
	}
	else if (position == '6'){
	   if ((slot_6 == static_cast<char>(232))||(slot_6 == static_cast<char>(254))){
	   	stop = 1;
	   }
	}
	else if (position == '7'){
	   if ((slot_7 == static_cast<char>(232))||(slot_7 == static_cast<char>(254))){
	   	stop = 1;
	   }
	}
	else if (position == '8'){
	   if ((slot_8 == static_cast<char>(232))||(slot_8 == static_cast<char>(254))){
	   	stop = 1;
	   }
	}
	else if (position == '9'){
	   if ((slot_9 == static_cast<char>(232))||(slot_9 == static_cast<char>(254))){
	   	stop = 1;
	   }
	} else {
		stop = 0;
	}	
	return stop;						
}
//**************************************************
void check_for_win(int &flag, int& whos_name){
	if (slot_1 == static_cast<char>(232) && slot_2 == static_cast<char>(232) && slot_3 == static_cast<char>(232)){
		flag = 0;  whos_name = 1;	
	}
	else if (slot_4 == static_cast<char>(232) && slot_5 == static_cast<char>(232) && slot_6 == static_cast<char>(232)){
		flag = 0;  whos_name = 1;	
	}
	else if (slot_7 == static_cast<char>(232) && slot_8 == static_cast<char>(232) && slot_9 == static_cast<char>(232)){
		flag = 0;  whos_name = 1;	
	}
	else if (slot_1 == static_cast<char>(232) && slot_4 == static_cast<char>(232) && slot_7 == static_cast<char>(232)){
		flag = 0;  whos_name = 1;	
	}
	else if (slot_1 == static_cast<char>(232) && slot_5 == static_cast<char>(232) && slot_9 == static_cast<char>(232)){
		flag = 0;  whos_name = 1;	
	}	
	else if (slot_2 == static_cast<char>(232) && slot_5 == static_cast<char>(232) && slot_8 == static_cast<char>(232)){
		flag = 0;  whos_name = 1;	
	}
	else if (slot_3 == static_cast<char>(232) && slot_5 == static_cast<char>(232) && slot_7 == static_cast<char>(232)){
		flag = 0;  whos_name = 1;	
	}
	else if (slot_3 == static_cast<char>(232) && slot_6 == static_cast<char>(232) && slot_9 == static_cast<char>(232)){
		flag = 0;  whos_name = 1;	
	}	
//-------------------------------------------------------------------------------------------------------------------		
	else if (slot_1 == static_cast<char>(254) && slot_2 == static_cast<char>(254) && slot_3 == static_cast<char>(254)){
		flag = 0;  whos_name = 2;	
	}
	else if (slot_4 == static_cast<char>(254) && slot_5 == static_cast<char>(254) && slot_6 == static_cast<char>(254)){
		flag = 0;  whos_name = 2;	
	}
	else if (slot_7 == static_cast<char>(254) && slot_8 == static_cast<char>(254) && slot_9 == static_cast<char>(254)){
		flag = 0;  whos_name = 2;	
	}
	else if (slot_1 == static_cast<char>(254) && slot_4 == static_cast<char>(254) && slot_7 == static_cast<char>(254)){
		flag = 0;  whos_name = 2;	
	}
	else if (slot_1 == static_cast<char>(254) && slot_5 == static_cast<char>(254) && slot_9 == static_cast<char>(254)){
		flag = 0;  whos_name = 2;	
	}	
	else if (slot_2 == static_cast<char>(254) && slot_5 == static_cast<char>(254) && slot_8 == static_cast<char>(254)){
		flag = 0;  whos_name = 2;	
	}
	else if (slot_3 == static_cast<char>(254) && slot_5 == static_cast<char>(254) && slot_7 == static_cast<char>(254)){
		flag = 0;  whos_name = 2;	
	}	
	else if (slot_3 == static_cast<char>(254) && slot_6 == static_cast<char>(254) && slot_9 == static_cast<char>(254)){
		flag = 0;  whos_name = 2;	
	}	
//--------------------------------------- Check for draw ----------------------------------------------------------------//
    else if (((slot_1 == static_cast<char>(232))||(slot_1 == static_cast<char>(254)))&&
	         ((slot_2 == static_cast<char>(232))||(slot_2 == static_cast<char>(254)))&&
	         ((slot_3 == static_cast<char>(232))||(slot_3 == static_cast<char>(254)))&&
	         ((slot_4 == static_cast<char>(232))||(slot_4 == static_cast<char>(254)))&&
	         ((slot_5 == static_cast<char>(232))||(slot_5 == static_cast<char>(254)))&&
	         ((slot_6 == static_cast<char>(232))||(slot_6 == static_cast<char>(254)))&&
	         ((slot_7 == static_cast<char>(232))||(slot_7 == static_cast<char>(254)))&&
	         ((slot_8 == static_cast<char>(232))||(slot_8 == static_cast<char>(254)))&&
	         ((slot_9 == static_cast<char>(232))||(slot_9 == static_cast<char>(254)))			 
			 ){
			 	flag = 3;
			 }					
}
//checking for game over
void check_for_game_over(int whos_name,int &flag, int&player_one_score, int&player_two_score){
	   system ("clear");
	   screen_layout();
	   display_board();
	   if (whos_name == 1){
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
	   flag = 1; 	
}
//*************************************
bool dice_choose (vector<char>&dice, char move){
if ((move == 'a')){
		if (dice.empty()){
			cout << "\n**** The container is empty ****\n";
			Sleep (2000);
			return 0;
		}else{		
		 dice.pop_back();
		 return 1;
	    }	
   }
//--------------------------------------------------- 
if ((move == 'b')){
		if (dice_two.empty()){
			cout << "\n**** The container is empty ****\n";
			Sleep (2000);
			return 0;
		}else{		
		 dice_two.pop_back();
		 return 1;
	    }	
   }  
}
//*************************************
void fill_dice (vector<char>){
	for (int i = 0; i < 6; i++){
		dice.push_back(static_cast<char>(232));
	}

	for (int i = 0; i < 6; i++){
		dice_two.push_back(static_cast<char>(254));
	}		
}
void displace_dice (){
	    cout << "\t" << player_one << "'s container\n";
	    cout << "\n\t--------------------------------------------\n";
		for (int i = 0; i < dice.size(); i++){
		cout << "\t" <<dice[i] << "  |";
	}
	cout << "\n\t--------------------------------------------\n";

//-------------------------------------------
	    cout << "\t" << player_two << "'s container\n";
	    cout << "\n\t--------------------------------------------\n";
		for (int i = 0; i < dice_two.size(); i++){
		cout << "\t" <<dice_two[i] << "  |";
	}
	cout << "\n\t--------------------------------------------\n";	
}
//**********************************************
void switch_players(int &player){
	if (player == 1){
		player = 2;
	} else {
		player = 1;		
	}
}
void draw_display(int &flag, int &draw){
	   system ("clear");
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
	   flag = 1; 
	   ++ draw;	
}
void restart_game(char&slot_1,char&slot_2,char&slot_3,char&slot_4,char&slot_5,char&slot_6,char&slot_7,char&slot_8,char&slot_9){
	slot_1 = NULL, slot_2 = NULL, slot_3 = NULL, slot_4 = NULL, slot_5 = NULL, slot_6 = NULL, slot_7 = NULL, slot_8 = NULL, slot_9 = NULL;
	dice.clear();
	dice_two.clear();
}
//Displays player's scores
void display_player_scores(){		
	cout << "\t\t\t>>> "<< static_cast<char>(177)<<" " << player_one << ": " << player_one_score << " <<<  >>> ";
	cout << static_cast<char>(178)<< " " << player_two << ": " << player_two_score << " <<< >>> ";	
	cout << static_cast<char>(176)<< " Drawn : " << draw << " <<< " <<endl;

}
