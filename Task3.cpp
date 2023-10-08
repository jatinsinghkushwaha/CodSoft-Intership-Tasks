// CodSoft Internship
// Domain Name - C++ Programming
// Task - 3(TIC-TAC-TOE-GAME)
// Intern Name - Jatin Singh Kushwaha

#include <iostream>
#include <vector>
using namespace std;

// Function to initialize the Tic Tac Toe board
void initializeBoard(vector<vector<char>> &board)
{
    for (int i = 0; i < 3; i++)
    {
        vector<char> row;
        for (int j = 0; j < 3; j++)
        {
            row.push_back(' ');
        }
        board.push_back(row);
    }
}

// Function to print the Tic Tac Toe board
void printBoard(const vector<vector<char>> &board)
{
    cout << "  1 2 3" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << " ";
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j];
            if (j < 2)
                cout << "|";
        }
        cout << endl;
        if (i < 2)
            cout << "  -+-+-" << endl;
    }
}

// Function to check if the game is over
bool isGameOver(const vector<vector<char>> &board)
{
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
        {
            return true; // Row win
        }
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
        {
            return true; // Column win
        }
    }
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        return true; // Diagonal win (top-left to bottom-right)
    }
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return true; // Diagonal win (top-right to bottom-left)
    }

    // Check for a draw
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == ' ')
            {
                return false; // Game is not over yet
            }
        }
    }
    return true; // It's a draw
}

int main()
{
    vector<vector<char>> board;
    initializeBoard(board);
    int currentPlayer = 1;
    int row, col;

    cout << "Welcome to Tic Tac Toe!" << endl;

    while (true)
    {
        printBoard(board);
        cout << "Player " << currentPlayer << ", enter row and column (e.g., 1 2): ";
        cin >> row >> col;

        // Check if the input is valid
        if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ')
        {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        // Place the player's symbol on the board
        board[row - 1][col - 1] = (currentPlayer == 1) ? 'X' : 'O';

        // Check if the game is over
        if (isGameOver(board))
        {
            printBoard(board);
            if (currentPlayer == 1)
            {
                cout << "Player 1 (X) wins!" << endl;
            }
            else
            {
                cout << "Player 2 (O) wins!" << endl;
            }
            break;
        }

        // Switch to the other player
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }

    return 0;
}
