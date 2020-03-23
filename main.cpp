#include <iostream>
#include <cstring>
#include <fstream>
#include <cstdio>
using namespace std;

bool isValidInput(char input);

int main()
{
    int health = 100;
    int gold = 0;
    int strength = 0;
    int intelligence = 0;
    int xp = 0;
    string name = "";

    cout << "\t\tWelcome to the Generic RPG Game\n";
    cout << "To start, select a pre-defined charater:\n";
    cout << "M for (M)age\n";
    cout << "  Strength = 10\n";
    cout << "  Intelligence = 90\n";
    cout << "W for (W)arrior\n";
    cout << "  Strength = 90\n";
    cout << "  Intelligence = 10\n";
    cout << "P for (P)aladin\n";
    cout << "  Strength = 50\n";
    cout << "  Intelligence = 50\n";
    cout << "R to (R)oll your own.\n";
    cout << "L to (L)oad player data.\n";
    cout << "Q to (Q)uit.\n";

    char input = ' ';

    do{
        cout << ">> ";
        cin >> input;
        input = tolower(input);

    }while(!isValidInput(input));


    if(input == 'l'){
        cout << "Loading...\n";
        /*
        TODO - CHANCE
        LOAD PLAYER DATA FROM A SAVE FILE. IT SHOULD LOAD PLAYER'S NAME,
        STRENGTH, AND INTELLIGENCE FROM 'PLAYER.DAT' WHICH MUST BE CREATED AND
        FORMATTED TO CONTAIN 3 LINES.  THE FIRST LINE CONTAINS THE PLAYER'S NAME
        AS A STRING, THE SECOND LINE IS A NUMBER WHICH REPRESENTS THEIR STRENGTH
        AND THE THIRD LINE IS A NUMBER REPRESENTING THEIR INTELLIGENCE
        */
//-----------------------------------------------------------------------------------//
    ifstream myfile2;
    myfile2.open("Player.dat");
    string line;

    myfile2 >> line >> name >> line >> strength >> line >> intelligence >> line;
    myfile2.close();

//-----------------------------------------------------------------------------------//

    }else if(input == 'q'){
        cout << "Thanks for playing\n";
        return 0;
    }else{
        cout << "Enter your name: ";
        cin >> name;
        cout << endl;

        switch(input){
        case 'm':
            strength = 10;
            intelligence = 90;
            break;
        case 'w':
            strength = 90;
            intelligence = 10;
            break;
        case 'p':
            strength = 50;
            intelligence = 50;
            break;
        case 'r':
            /*
            TODO - GANNON
            SHOULD ALLOW PLAYERS TO ASSIGN THEIR OWN VALUES TO STRENGTH
            AND INTELLIGENCE.  PLAYERS MUST USE 100 POINTS AND
            STRENGTH + INTELLIGENCE MUST EQUAL 100 WHEN THEY'RE DONE.
            */
            break;
        }
    }

    cout << "Welcome " << name << "!\n";
    cout << "Your strength is: " << strength << endl;
    cout << "Your intelligence is: " << intelligence << endl;

    //main game loop
    while(true){

        cout << "What would you like to do?\n";
        cout << "D for (D)isplay stats\n";
        cout << "S for (S)ave game\n";
        cout << "Q for (Q)uit\n";
        cout << ">> ";

        cin >> input;
        input = tolower(input);

        if(input == 'd'){
            cout << "Your stats: " << endl;
            /*
            TODO - TYLER
            WRITE A FUNCTION THAT PRINTS THE PLAYER'S STATS AND IS CALLED HERE.
            THE FUNCTION SHOULD DISPLAY HEALTH, STRENGTH, AND INTELLIGENCE EACH ON
            THEIR OWN LINES.
            */
        }else if(input == 'q'){
            cout << "Goodbye!\n";
            break;
        }else if(input == 's'){
            /*
            TODO - BRENNAN
            SAVE THE GAME IN A FORMAT MATCHING THE FORMAT DESCRIBED ABOVE IN THE
            'LOADING' SECTION.  THE FILE SHOULD BE CALLED 'PLAYER.DAT' WITH 3 LINES.
            LINE 1 SHOULD CONTAIN A STRING WITH THE PLAYER NAME, LINE 2 SHOULD BE A
            NUMBER FOR STRENGTH, LINE 3 SHOULD BE INTELLIGENCE.  IF THE FILE
            DOESN'T EXIST, YOU NEED TO CREATE IT.  IF IT DOES EXIST, OVERWRITE IT.
            YOU MAY NEED TO COORDINATE WITH CHANCE TO ENSURE THAT YOU ARE BOTH
            SAVING AND LOADING IN THE SAME FORMAT.
            */
    return 0;
}

bool isValidInput(char input){
    if(input == 'm' || input == 'w' || input == 'p' || input == 'r' || input == 'q' || input == 'l')
        return true;
    else
        return false;
}

