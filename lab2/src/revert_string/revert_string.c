#include "revert_string.h"

void Swap(char *left, char *right)
{
	char a = *left;
  *left = *right;
  *right = a;
}

void RevertString(char *str)
{
	int i = 0;
  int len = strlen(str);
  for (; i < len / 2; i++)
  {
    Swap(str+i, str+len-i-1);
  }
  *str = '!';
}

