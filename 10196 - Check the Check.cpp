/*
 * User: Mauricio Coronel
 * Problem: 10196 - Check the Check
 */

#include <bits/stdc++.h>

using namespace std;

bool blackAttackBoard(int, int, string[8]);
bool whiteAttackBoard(int, int, string[8]);

bool linealMoves(string, int, int, string[8]);
bool diagonalMoves(string, int, int, string[8]);
bool knightMoves(string, int, int, string[8]);

int main()
{
  string board[8];
  int game = 1;

  while (true)
  {
    bool emptyBoard = true;
    string line;

    int row = 0;
    while (row < 8 && getline(cin, line))
    {
      if (line.empty())
        continue;

      board[row] = line;

      if (line != "........")
        emptyBoard = false;

      row++;
    }

    if (emptyBoard)
      break;

    string check = "no";

    for (int y = 0; y < 8; y++)
    {
      for (int x = 0; x < 8; x++)
      {
        if (blackAttackBoard(x, y, board))
        {
          check = "white";
          break;
        }
        else if (whiteAttackBoard(x, y, board))
        {
          check = "black";
          break;
        }
      }
    }
    cout << "Game #" << game << ": " << check << " king is in check." << endl;
    game++;
  }

  return 0;
}

bool blackAttackBoard(int x, int y, string board[8])
{
  if (board[y][x] == 'p')
  {
    if (y + 1 > 7)
      return false;

    if (x + 1 < 8 && board[y + 1][x + 1] == 'K')
      return true;

    if (x - 1 >= 0 && board[y + 1][x - 1] == 'K')
      return true;
  }
  else if (board[y][x] == 'r')
  {
    if (linealMoves("black", x, y, board))
      return true;
  }
  else if (board[y][x] == 'b')
  {
    if (diagonalMoves("black", x, y, board))
      return true;
  }
  else if (board[y][x] == 'q')
  {
    if (linealMoves("black", x, y, board))
      return true;
    if (diagonalMoves("black", x, y, board))
      return true;
  }
  else if (board[y][x] == 'n')
  {
    if (knightMoves("black", x, y, board))
      return true;
  }

  return false;
}

bool whiteAttackBoard(int x, int y, string board[8])
{
  if (board[y][x] == 'P')
  {
    if (y - 1 < 0)
      return false;

    if (x - 1 >= 0 && board[y - 1][x - 1] == 'k')
      return true;

    if (x + 1 < 8 && board[y - 1][x + 1] == 'k')
      return true;
  }
  else if (board[y][x] == 'R')
  {
    if (linealMoves("white", x, y, board))
      return true;
  }
  else if (board[y][x] == 'B')
  {
    if (diagonalMoves("white", x, y, board))
      return true;
  }
  else if (board[y][x] == 'Q')
  {
    if (linealMoves("white", x, y, board))
      return true;
    if (diagonalMoves("white", x, y, board))
      return true;
  }
  else if (board[y][x] == 'N')
  {
    if (knightMoves("white", x, y, board))
      return true;
  }

  return false;
}

bool linealMoves(string side, int pieceX, int pieceY, string board[8])
{
  char king = side == "white" ? 'k' : 'K';

  // X movement
  for (int i = pieceX + 1; i < 8; i++)
  {
    if (board[pieceY][i] == king)
      return true;

    if (board[pieceY][i] != '.')
      break;
  }
  for (int i = pieceX - 1; i >= 0; i--)
  {
    if (board[pieceY][i] == king)
      return true;

    if (board[pieceY][i] != '.')
      break;
  }

  // Y movement
  for (int i = pieceY + 1; i < 8; i++)
  {
    if (board[i][pieceX] == king)
      return true;

    if (board[i][pieceX] != '.')
      break;
  }
  for (int i = pieceY - 1; i >= 0; i--)
  {
    if (board[i][pieceX] == king)
      return true;

    if (board[i][pieceX] != '.')
      break;
  }

  return false;
}

bool diagonalMoves(string side, int pieceX, int pieceY, string board[8])
{
  char king = side == "white" ? 'k' : 'K';

  int x = pieceX + 1;
  int y = pieceY + 1;

  for (int i = 0; i < 8; i++)
  {
    if (x > 7 || y > 7)
      break;

    if (board[y][x] == king)
      return true;

    if (board[y][x] != '.')
      break;

    y++;
    x++;
  }

  x = pieceX - 1;
  y = pieceY - 1;

  for (int i = 0; i < 8; i++)
  {
    if (x < 0 || y < 0)
      break;

    if (board[y][x] == king)
      return true;

    if (board[y][x] != '.')
      break;
    y--;
    x--;
  }

  x = pieceX - 1;
  y = pieceY + 1;

  for (int i = 0; i < 8; i++)
  {
    if (x < 0 || y > 7)
      break;

    if (board[y][x] == king)
      return true;

    if (board[y][x] != '.')
      break;

    y++;
    x--;
  }

  x = pieceX + 1;
  y = pieceY - 1;

  for (int i = 0; i < 8; i++)
  {
    if (x > 7 || y < 0)
      break;

    if (board[y][x] == king)
      return true;

    if (board[y][x] != '.')
      break;

    y--;
    x++;
  }

  return false;
}

bool knightMoves(string side, int pieceX, int pieceY, string board[8])
{
  char king = side == "white" ? 'k' : 'K';

  if (pieceY + 2 < 8 && pieceX + 1 < 8 && board[pieceY + 2][pieceX + 1] == king)
    return true;
  if (pieceY + 2 < 8 && pieceX - 1 >= 0 && board[pieceY + 2][pieceX - 1] == king)
    return true;
  if (pieceY - 2 >= 0 && pieceX + 1 < 8 && board[pieceY - 2][pieceX + 1] == king)
    return true;
  if (pieceY - 2 >= 0 && pieceX - 1 >= 0 && board[pieceY - 2][pieceX - 1] == king)
    return true;

  if (pieceY + 1 < 8 && pieceX + 2 < 8 && board[pieceY + 1][pieceX + 2] == king)
    return true;
  if (pieceY + 1 < 8 && pieceX - 2 >= 0 && board[pieceY + 1][pieceX - 2] == king)
    return true;
  if (pieceY - 1 >= 0 && pieceX + 2 < 8 && board[pieceY - 1][pieceX + 2] == king)
    return true;
  if (pieceY - 1 >= 0 && pieceX - 2 >= 0 && board[pieceY - 1][pieceX - 2] == king)
    return true;

  return false;
}