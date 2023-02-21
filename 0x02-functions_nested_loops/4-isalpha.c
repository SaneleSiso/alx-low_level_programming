#include "main.h"
/*
 * _isalpha - checks for alphabetic character
 * @letter: the character to be checked
 * Return: 1 if letter is a letter, 0 otherwise
 */
int _isalpha(int letter)
{
	return ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z'));
}


