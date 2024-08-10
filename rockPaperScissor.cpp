#include <iostream>
#include <conio.h>
using namespace std;

class temp
{
    char player1, player2;

public:
    void game()
    {
        cout << "Enter '1' for rock, '2' for paper, '3' for scissor (for player 1) : " << endl;
        player1 = _getch();
        cout << 'x' << endl;
        cout << "Enter '1' for rock, '2' for paper, '3' for scissor (for player 2) : " << endl;
        player2 = _getch();
        cout << 'x' << endl;
        if ((player1 == '1' && player2 == '1') || (player1 == '3' && player2 == '3') || (player1 == '2' && player2 == '2'))
            cout << endl
                 << "DRAW!" << endl
                 << endl;
        else if (player1 == '1' && player2 == '3')
            cout << endl
                 << "Player 1 won!" << endl
                 << endl;
        else if (player1 == '1' && player2 == '2')
            cout << endl
                 << "Player 2 won!" << endl
                 << endl;
        else if (player1 == '3' && player2 == '1')
            cout << endl
                 << "Player 2 won!" << endl
                 << endl;
        else if (player1 == '3' && player2 == '2')
            cout << endl
                 << "Player 1 won!" << endl
                 << endl;
        else if (player1 == '2' && player2 == '3')
            cout << endl
                 << "Player 2 won!" << endl
                 << endl;
        else if (player1 == '2' && player2 == '1')
            cout << endl
                 << "Player 1 won!" << endl
                 << endl;
        else
            cout << endl
                 << "Invalid Selection!" << endl
                 << endl;
    }
};

int main()
{
    system("cls");
    temp t1;
    int count;
    cout << "------------------------------ ROCK PAPER SCISSOR ------------------------------ " << endl
         << endl;
    cout << "How many times you want to play a game? (Max : 50)" << endl;
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        cout << endl;
        t1.game();
    }

    getch();
    exit(0);
}
