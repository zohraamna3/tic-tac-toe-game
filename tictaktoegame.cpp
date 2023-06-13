#include <iostream>
#include <string>
using namespace std;
class ticTakToe
{
private:
    int board[3][3];
    int row, column;


public:
//setter function
    void setboard()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                board[i][j] = 2;
            }

        }
    }
    //prototypes of the function of the class
    void printBoard();  //function to print board
    void getMove(bool choice);   //function to getting the moves of players
    void checkingMove();     //function for checking the moves of players
    void checkWinner();      //function for checking winners
};
void ticTakToe::printBoard()   //definition og displaying table
{           cout<<"            ===================================================================================\n";
            cout<<"            |                               TIC TAK TOE TABLE                                 |\n";
            cout<<"            ===================================================================================\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            cout << "            |              ";
            if (board[i][j] == 1 || board[i][j] == 0)
                cout << board[i][j];
        }
        cout << "            |              \n";
        cout<<"            ===================================================================================\n";
        
    }
    
}
void ticTakToe::getMove(bool choice)    //definition of getting moves of the players
{
    bool flag = 1;
    do
    {
        cout << "Enter the row : ";
        cin >> row;
        if (row > 2)
        {
            cout << "Enter the row again : ";
            cin >> row;
        }
        cout << "Enter the column : ";
        cin >> column;
        if (column > 2)
        {
            cout << "Enter the column again : ";
            cin >> column;
        }
        if (board[row][column] == 2)
        {
            board[row][column] = choice;
            flag = 0;
        }
        else
        {
            cout<<endl<<endl;
            cout << "                    ______________________________________________________\n";
            cout << "                    |***********This space is already filled**************|" << endl;
            cout << "                    |------------------------AGAIN------------------------|\n";
            cout << "                    |_____________________________________________________|\n";
            cout<<endl;
        }
    } while (flag);
    flag = 1;
}
void ticTakToe::checkingMove()  //definition of checking moves of playyer function
{
    bool flag = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == 2)
            {
                cout<<endl;
                cout << "                 _________________________________________________\n";
                cout << "                 |            Empty spaces are available          | \n";
                cout << "                 |________________________________________________|\n";
                flag = 0;
                return;
            }

        }

    }
    if (flag)
    {
        cout<<endl<<endl;
        cout << "                |********************Board is fully filled*******************|\n";
        cout << "                **************************************************************\n";
        cout << "                |*************************MATCH DRAWED***********************|\n";
        cout << "                **************************************************************\n";
        system("cls");
    }

}
void ticTakToe::checkWinner()   //definition of checking winner of game function
{
    if (board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1)
    {
        cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 1 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
        exit(0);

    }
    else if (board[0][1] == 1 && board[0][2] == 1 && board[0][0] == 1)
    {
       cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 1 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
         exit(0);

    }
    else if (board[1][0] == 1 && board[1][1] == 1 && board[1][2] == 1)
    {
       cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 1 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
         exit(0);
    }
    else if (board[2][0] == 1 && board[2][1] == 1 && board[2][2] == 1)
    {
       cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 1 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
 exit(0);
    }
    else if (board[0][0] == 1 && board[1][0] == 1 && board[2][0] == 1)
    {
         cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 1 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
         exit(0);
 }
    else if (board[0][1] == 1 && board[1][1] == 1 && board[2][1] == 1)
    {
        cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 1 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
         exit(0);

    }
    else if (board[0][2] == 1 && board[1][2] == 1 && board[2][2] == 1)
    {
        cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 1 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
         exit(0);

    }
    else if(board[0][2]==1&&board[1][1]==1&&board[2][0]==1)
    {
         cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 1 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
         exit(0);
    }
    if (board[0][0] == 0 && board[1][1] == 0 && board[2][2] == 0)
    {
         cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 2 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
         exit(0);

    }
    else if (board[0][1] == 0 && board[0][2] == 0 && board[0][0] == 0)
    {
        cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 2 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
         exit(0);
    }
    else if (board[1][0] == 0 && board[1][1] == 0 && board[1][2] == 0)
    {
         cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 2 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
         exit(0);
    }
    else if (board[2][0] == 0 && board[2][1] == 0 && board[2][2] == 0)
    {
         cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 2 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
         exit(0);
    }
    else if (board[0][0] == 0 && board[1][0] == 0 && board[2][0] == 0)
    {
       cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 2 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
         exit(0);
    }
    else if (board[0][1] == 0 && board[1][1] == 0 && board[2][1] == 0)
    {
        cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 2 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
         exit(0);
    }
    else if (board[0][2] == 0 && board[1][2] == 0 && board[2][2] == 0)
    {
         cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 2 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
         exit(0);

    }
     else if(board[0][2]==0&&board[1][1]==0&&board[2][0]==0)
    {
         cout << "                               -------------------------------------------\n";
        cout << "                               *******************************************\n";
        cout << "                               |                player 1 wins            |\n";
        cout << "                               *******************************************\n";
        cout << "                               -------------------------------------------\n";
         exit(0);
    }

}
//her the body of main function starts
int main()
{
    
    ticTakToe p1;  //object of tic tak toe game class
    p1.setboard();
    bool choice, flag = 1, reloop = 1;
    cout<<"                           ***************************************************************\n";
    cout<<"                           |                       GAME STARTED                          |\n";
    cout<<"                           ***************************************************************\n";
    cout<<endl<<endl;
    cout << "                                   -----------------------------------------\n";
    cout << "                                   |        SYMBOLS OF BOTH PLAYERS        |\n";
    cout << "                                   -----------------------------------------\n";
    cout << "                                   |     player 1       |       1          |\n";
    cout << "                                   |     player 2       |       0          |\n";
    cout << "                                   -----------------------------------------\n";
    cout<<endl<<endl;
    do
    {
            p1.printBoard();
        do
        { system("color 5f");
            cout << "--------------------\n";
            cout << "|    player 1 :    |\n";
            cout << "--------------------\n";
            choice = 1;
            if (choice == 1)
            {
                p1.getMove(choice);
                flag = 0;
            }
            else {
                cout << "*****worng symbol***** \n";
            }
        } while (flag);
        system("cls");
         cout<<"                           ***************************************************************\n";
    cout<<"                           |                       GAME STARTED                          |\n";
    cout<<"                           ***************************************************************\n";
    cout<<endl<<endl;
    cout << "                                   -----------------------------------------\n";
    cout << "                                   |        SYMBOLS OF BOTH PLAYERS        |\n";
    cout << "                                   -----------------------------------------\n";
    cout << "                                   |     player 1       |       1          |\n";
    cout << "                                   |     player 2       |       0          |\n";
    cout << "                                   -----------------------------------------\n";
    cout<<endl<<endl;
        p1.printBoard();
        p1.checkWinner();
        p1.checkingMove();
        flag = 1;
        do
        {
             system("color 2f");
            cout << "--------------------\n";
            cout << "|    player 2 :    |\n";
            cout << "--------------------\n";

            choice = 0;
            if (choice == 0)
            {
                p1.getMove(choice);
                flag = 0;
            }
            else {
                cout << "*****worng symbol***** \n";
            }
        } while (flag);
        flag = 1;
        system("cls");
         cout<<"                           ***************************************************************\n";
    cout<<"                           |                       GAME STARTED                          |\n";
    cout<<"                           ***************************************************************\n";
    cout<<endl<<endl;
    cout << "                                   -----------------------------------------\n";
    cout << "                                   |        SYMBOLS OF BOTH PLAYERS        |\n";
    cout << "                                   -----------------------------------------\n";
    cout << "                                   |     player 1       |       1          |\n";
    cout << "                                   |     player 2       |       0          |\n";
    cout << "                                   -----------------------------------------\n";
    cout<<endl<<endl;
        p1.printBoard();
        p1.checkingMove();
        
        p1.checkWinner();
        system("cls");
        cout<<"                           ***************************************************************\n";
    cout<<"                           |                       GAME STARTED                          |\n";
    cout<<"                           ***************************************************************\n";
    cout<<endl<<endl;
    cout << "                                   -----------------------------------------\n";
    cout << "                                   |        SYMBOLS OF BOTH PLAYERS        |\n";
    cout << "                                   -----------------------------------------\n";
    cout << "                                   |     player 1       |       1          |\n";
    cout << "                                   |     player 2       |       0          |\n";
    cout << "                                   -----------------------------------------\n";
    cout<<endl<<endl;


        // cout << "press 0-Exit Game\nPress 1-Continue Game \n                  >>Enter : ";
        //cin >> reloop;
    } while (reloop);


    return 0;
}
