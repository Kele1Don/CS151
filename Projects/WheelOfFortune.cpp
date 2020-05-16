#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib> 
using namespace std;

//This stores the users information
struct player 
{
    int pmoney;
    string pname;
};

/*********************************************************************
** Function: initialize
** Description: Initializes the struct variables
** Parameters: player& player
*********************************************************************/
void initialize (player& player)
{
    player.pmoney= 0;
    player.pname= "";
}

/*********************************************************************
** Function: objtv
** Description: gets a random phrase from the array
** Parameters: n/a
*********************************************************************/
string objtv()
{
    string phrase[]={"A Friend in Need is a Friend Indeed", "A Bird in the Hand is Worth Two in the Bush",
    "It Takes Two to Tango","A Fool and His Money Are Soon Parted","Once Bitten,Twice Shy", "No news, is Good news","The Apple Doesn't Fall Far From the Tree","Good Things Come to Those Who Wait"};
    string phr;
    

    int i=0; 
    i= rand() % 8;
    phr= phrase[i];
    

    return phr;
}

/*********************************************************************
** Function: puz
** Description: Replaces the words in the phrase with dashes
** Parameters: 
*********************************************************************/
void puz ()
{
    string puzzle;
    for (int i=0; i <= objtv().length(); i++)
    {
		if(objtv().at(i) >= 97 && objtv().at(i)<= 122){
            puzzle += '-';
        }
        else if(objtv().at(i) >= 65 && objtv().at(i)<= 90){
            puzzle += '-';
        }
        else if(objtv().at(i) == 32)
        {
            puzzle += ' ';
        }
	}
	cout << "The puzzle is: " << puzzle << endl;
}

/*****************************************************************************
** Function: inp
** Description: Asks for the number of players and rounds after greeting user
** Parameters: playeram
*****************************************************************************/
int inp(char playeram)
{
    
    cout<<"**** Wheel Of Fortune ****"<<endl<<endl;
    cout<<"a) Single player?"<<endl;
    cout<<"         Or "<<endl;
    cout<<"b) Multiplayer?"<<endl;
    cin>>playeram;
    
    if (playeram == 'a')
    {
        player one;
        one.pmoney=0;

        cout<<"Player one, what is your name?"<<endl;
        cin>> one.pname;
        system("clear");

        cout <<"Welcome " <<one.pname<<"!"<<endl;
        puz();
        menu(one);
    }

    else if (playeram == 'b')
    {
        int players;
        cout<<"The max is 3 players so how much people are playing? ";
        cin>>players;

        if (players == 2)
        {
            player one;
            one.pmoney=0;

            cout<<"Player one, what is your name?"<<endl;
            cin>> one.pname;
            system("clear");

            cout <<"Welcome " <<one.pname<<"!"<<endl;

            player two;
            two.pmoney=0;

            cout<<"Player two, what is your name?"<<endl;
            cin>> two.pname;
            system("clear");

            cout <<"Welcome " <<two.pname<<"!"<<endl;

            puz();
            menu(one);
            menu(two);
            
        }

        else if (players == 3)
        {
            player one;
            one.pmoney=0;

            cout<<"Player one, what is your name?"<<endl;
            cin>> one.pname;
            system("clear");

            cout <<"Welcome " <<one.pname<<"!"<<endl;

            player two;
            two.pmoney=0;

            cout<<"Player two, what is your name?"<<endl;
            cin>> two.pname;
            system("clear");

            cout <<"Welcome " <<two.pname<<"!"<<endl;

            player three;
            three.pmoney=0;

            cout<<"Player three, what is your name?"<<endl;
            cin>> three.pname;
            system("clear");

            cout <<"Welcome " <<three.pname<<"!"<<endl;

            puz();
            menu(one);
            menu(two);
            menu(three);

        }
    }
}
	
	
/*************************************************************************************
** Function: spin
** Description: Spins the wheel, giving the player a random value or bankrupts them
** Parameters: player& player
*************************************************************************************/
int spin(player& player)
{
    int x;
    int wheel[24];
    
    for (int i=0; i<=23; i++)
    {
        wheel[i]= rand() %1001;
    }


    bool roundover= false;
    srand(time(NULL));
	x= rand() %24;
    

    if (x == 1 || x == 6 || x == 8 || x== 14 || x == 16 || x == 21 || x == 23)
    {
        cout<<"OOPS! You just went BANKRUPT!"<<endl;
        player.pmoney = 0; 
        roundover=true;
    }

    else
    {
        cout<<"The wheel landed on "<< wheel[x]<< "!"<<endl;
        cout<<"You just got $"<<wheel[x]<< " in your bank!"<<endl;
        player.pmoney += wheel[x];
        roundover=false;
    }
}
/*********************************************************************
** Function: solve
** Description: Checks the user's guess against the puzzle phrase
** Parameters: roundover
*********************************************************************/
bool solve (bool& roundover)
{
    string playersolving;
    cout<<"Go ahead and solve: "<<endl;
    cin>> playersolving;

    if (playersolving == objtv())
    {
        cout<<"AMAZING!!! THAT IS CORRECT!"<<endl;
        roundover=true;
    }

    if (playersolving != objtv())
    {
        roundover=true;
        cout<<"Oof! The phrase actually is "<< objtv()<<endl;

    }

}
/*********************************************************************
** Function: win
** Description: Selects the winner based on their money
** Parameters: onemoney,twomoney,threemoney
*********************************************************************/
void game_winner (int& onemoney, int& twomoney, int& threemoney){
	if ((onemoney > twomoney) && (onemoney > threemoney))
    {
		player one;
        cout <<one.pname<< " has won the game!!!" << endl;
        cout<<" Congratulations!";
	}
	else if ((twomoney > onemoney) && (twomoney > threemoney))
    {
		player two;
        cout <<two.pname<< " has won the game!!!" << endl;
        cout<<" Congratulations!";
	}
	else if ((threemoney > onemoney) && (threemoney > twomoney))
    {
		player three;
        cout <<three.pname<< " has won the game!!!" << endl;
        cout<<" Congratulations!";
	}
}
/*********************************************************************
** Function: replace
** Description: Replaces the dashes with correct guesses
** Parameters: hidden, str, letter
*********************************************************************/
void replace(string& hidden, string& str, char& letter)
{
    for(int i=0; i < objtv().length(); i++)
    {
        if(objtv().at(i) == letter)
        {
          hidden.at(i) = letter;
        }
    }
    cout << "The message is: " << hidden << endl;
}
/*********************************************************************
** Function: letterguess
** Description: takes the user's letter guess
** Parameters: letter
*********************************************************************/
void letterguess(char &letter)
{
    cout << "Guess a letter: ";
    cin >> letter;
    cin.ignore();
}
/*********************************************************************
** Function: addmoney
** Description: checks how many letters were found 
** Parameters: player& player, char l
*********************************************************************/
void addmoney (player& player, char& l)
{
 
    int num, total,found = 0;
    bool roundover;
    
	for(int i=0; i < objtv().length(); i++)
    {
        if(objtv().at(i) == l)
        {
           found = found + 1;
        }
    }

    total = num * found;
    cout << found << " found. Total: $" << total << endl;
    if(found == 0)
    {
		cout << "You guessed incorrectly:(" << endl;
        roundover = true;
    }
}
/*********************************************************************
** Function: boardup
** Description: updates the board
** Parameters: num, playertotal, puzzle, hddenPuzzle, letter, roundover
** Post-Conditions: changes roundover, total money, updates puzzle and calls letters found money functions
*********************************************************************/
void board(int num, int& playertotal, string puzzle, string& hiddenPuzzle, char& letter, bool& roundover)
{

}
/*********************************************************************
** Function: vowel
** Description: gives the option of buying vowel if user as enough money
** Parameters: playertotal, puzzle, hiddenPuzzle, letter
*********************************************************************/
void can_buy_a_vowel (int& playertotal, string puzzle, string& hiddenPuzzle, char& letter)
{
        if (playertotal>=250)
        {
            playertotal-= 250;
            cout<<"Choose a vowel: "<<endl;
            cin>> letter;
            letterguess(letter);
		    replace(hiddenPuzzle, puzzle, letter); //updates hidden with vowel
            

        }
        else    
        {
            cout<<"SORRY! You do not have enough cash to buy a vowel!";
        }    
}
/*********************************************************************
** Function: print_menu
** Description: prints main menu with questions
** Parameters: puzzle, hiddenPuzzle, letter, playertotal, num, roundover
** Pre-Conditions: strings and variables defined in main choose a number between 1 and 3
** Post-Conditions: prints out the choice
*********************************************************************/
void print_menu(string& puzzle, string& hiddenPuzzle, char& letter, int& playertotal, int& num, bool& roundover){
	int answer;
	bool win;
	cout << "Would you like to: " << endl; 
	cout << "   (1)Spin the wheel " << endl;
	cout << "   (2)Solve the puzzle " << endl;
	cout << "   (3)Buy a vowel" << endl;
	cin >> answer;
	cin.ignore();
	
	//could make these to functions
	if (answer == 1){
		spin(num); //spin wheel to get rand num
		check_wheel(num, playertotal, puzzle, hiddenPuzzle, letter, roundover);
		
	}
	else if (answer == 2){
		complete_puzzle (puzzle, roundover);
		//function checking if won the game (guessed correct) then keep everyones money and they go bankrupt
		}
	else if (answer == 3){
		can_buy_a_vowel (playertotal, puzzle, hiddenPuzzle, letter);//can keep adding letters
	}
}
/*********************************************************************
** Function: main
** Description: runs the program with all the functions
** Parameters: none
** Pre-Conditions: none
** Post-Conditions: none
*********************************************************************/
int main(){
//variables:
	int num = 0, rounds, players, roundTotal1=0, roundTotal2=0, roundTotal3=0, total1=0, total2=0, total3=0, found; //need something to set spin to a value
	string puzzle, hiddenPuzzle; //variable where puzzle will be set
	char vowel;
	bool roundover = false, gameover = false;
	
	//Gets the puzzle and the rounds and players playing
		get_user_inputs(rounds, players);

	//need to loop until player loses turn
	switch(players){
	case 1:
		for(int i=1; i<=rounds; i++){ //looping for amount of rounds specified
			
			get_puzzle (puzzle); //gets puzzle string
		//Hides puzzle	
			hidden_puzzle (hiddenPuzzle, puzzle);  //changing hidden puzzle into dashes
			
			do{
		//Pints the menu for player
			print_menu(puzzle, hiddenPuzzle, vowel, total1, num, roundover);
		
			}while (roundover != true); //loop while someone hasnt won
		}
		//Compare game totals to see who has won
			game_winner (total1, total2, total3);
		break;
		
	}
	

	return 0;
    
}