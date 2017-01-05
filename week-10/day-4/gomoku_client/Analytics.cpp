#include "Analytics.h"

bool Analytics::is_game_won(std::vector<std::vector<int>>& board, int x, int y) {
  if (is_five_vertically(board, x, y)) {
    return true;
  } else if (is_five_horizontally(board, x, y)) {
    return true;
  } else if (is_five_diagonally_from_left(board, x, y)) {
    return true;
  } else if (is_five_diagonally_from_right(board, x, y)) {
    return true;
  }
  return false;
}

bool Analytics::is_five_vertically(std::vector<std::vector<int>>& board, int x, int y) {
  int hit = 1;
  int i = x, j = y;
  while (j < 18 && board[i][j] == board[i][j + 1]) {
    ++hit;
    if (hit == 5) {
      return true;
    }
    ++j;
  }
  j = y;
  while (j > 0 && board[i][j] == board[i][j - 1]) {
    ++hit;
    if (hit == 5) {
      return true;
    }
    --j;
  }
  return false;
}

bool Analytics::is_five_horizontally(std::vector<std::vector<int>>& board, int x, int y) {
  int hit = 1;
  int i = x, j = y;
  while (i < 18 && board[i][j] == board[i + 1][j]) {
    ++hit;
    if (hit == 5) {
      return true;
    }
    ++i;
  }
  i = x;
  while (i > 0 && board[i][j] == board[i - 1][j]) {
    ++hit;
    if (hit == 5) {
      return true;
    }
    --i;
  }
  return false;
}

bool Analytics::is_five_diagonally_from_left(std::vector<std::vector<int>>& board, int x, int y) {
  int hit = 1;
  int i = x, j = y;
  while (i < 18 && j < 18 && board[i][j] == board[i + 1][j + 1]) {
    ++hit;
    if (hit == 5) {
      return true;
    }
    ++i;
    ++j;
  }
  i = x, j = y;
  while (i > 0 && j > 0 && board[i][j] == board[i - 1][j - 1]) {
    ++hit;
    if (hit == 5) {
      return true;
    }
    --i;
    --j;
  }
  return false;
}

bool Analytics::is_five_diagonally_from_right(std::vector<std::vector<int>>& board, int x, int y) {
  int hit = 1;
  int i = x, j = y;
  while (i < 18 && j > 0 && board[i][j] == board[i + 1][j - 1]) {
    ++hit;
    if (hit == 5) {
      return true;
    }
    ++i;
    --j;
  }
  i = x, j = y;
  while (i > 0 && j < 18 && board[i][j] == board[i - 1][j + 1]) {
    ++hit;
    if (hit == 5) {
      return true;
    }
    --i;
    ++j;
  }
  return false;
}
