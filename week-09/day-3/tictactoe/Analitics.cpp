#include "Analitics.h"

Analitics::Analitics() {

}

bool Analitics::analyse_all(std::vector<std::vector<unsigned int>>& board) {
  if (analyse_diagonally_from_left(board)) {
    return true;
  } else if (analyse_diagonally_from_right(board)) {
    return true;
  } else if (analyse_horizontally(board)) {
    return true;
  } else if (analyse_vertically(board)) {
    return true;
  }
  return false;
}

bool Analitics::analyse_diagonally_from_left(std::vector<std::vector<unsigned int>>& board) {
  for (unsigned int i = 0; i < board.size(); ++i) {
    for (unsigned int j = 0; j < board[i].size(); ++j) {
      if (board[i][j] == 1 || board[i][j] == 2) {
        if (board[i][j] == board[i + 1][j + 1] && board[i + 1][j + 1] == board[i + 2][j + 2] && board[i + 2][j + 2] == board[i + 3][j + 3] && board[i + 3][j + 3] == board[i + 4][j + 4]) {
          return true;
        }
      }
    }
  }
  return false;
}

bool Analitics::analyse_diagonally_from_right(std::vector<std::vector<unsigned int>>& board) {
  for (unsigned int i = 0; i < board.size(); ++i) {
    for (unsigned int j = 4; j < board[i].size(); ++j) {
      if (board[i][j] == 1 || board[i][j] == 2) {
        if (board[i][j] == board[i + 1][j - 1] && board[i + 1][j - 1] == board[i + 2][j - 2] && board[i + 2][j - 2] == board[i + 3][j - 3] && board[i + 3][j - 3] == board[i + 4][j - 4]) {
          return true;
        }
      }
    }
  }
  return false;
}

bool Analitics::analyse_horizontally(std::vector<std::vector<unsigned int>>& board) {
  for (unsigned int i = 0; i < board.size(); ++i) {
    for (unsigned int j = 0; j < board[i].size(); ++j) {
      if (board[i][j] == 1 || board[i][j] == 2) {
        if (board[i][j] == board[i + 1][j] && board[i + 1][j] == board[i + 2][j] && board[i + 2][j] == board[i + 3][j] && board[i + 3][j] == board[i + 4][j]) {
          return true;
        }
      }
    }
  }
  return false;
}

bool Analitics::analyse_vertically(std::vector<std::vector<unsigned int>>& board) {
  for (unsigned int i = 0; i < board.size(); ++i) {
    for (unsigned int j = 0; j < board[i].size(); ++j) {
      if (board[i][j] == 1 || board[i][j] == 2) {
        if (board[i][j] == board[i][j + 1] && board[i][j + 1] == board[i][j + 2] && board[i][j + 2] == board[i][j + 3] && board[i][j + 3] == board[i][j + 4]) {
          return true;
        }
      }
    }
  }
  return false;
}
