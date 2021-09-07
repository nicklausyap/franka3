// Date created: 14-AUG-2021 SATURDAY
// This source file is part of the franka3 open source project
// Copyright (c) 2021 nicklaus yap ken yik
// version: 0.1.2

#include <stdlib.h> // for abs(), exit()
#include "function.h"

void add(void)
{
	phase1 = phase1 + 1;
	//printf("phase1: %d\n", phase1); // debug only
	if(phase1 > 33){
		phase2 = phase2 + 1;
		//printf("phase2: %d\n", phase2); // debug only
		phase1 = 1;
	}
	else
	{
	
	}

	if(phase2 > 33){
		phase3 = phase3 + 1;
		phase2 = 1;
	}
	else
	{

	}

	if(phase3 > 33){
		phase3 = 1;
	}
	else
	{

	}
 
}

void checkDecipherPhase()
{
	if (phase1 > 33 || phase2 > 33 || phase3 > 33) {
		printf("%s\n", "Error: Max value for decipher phase is 33");
		exit(EXIT_FAILURE);
	}
	else if (phase1 < 1 || phase2 < 1 || phase3 < 1) {
		printf("%s\n", "Error: Minimum value for decipher phase is 1. You can use value 0 but not recommended");
		exit(EXIT_FAILURE);
	}
}

void decipher(int *val, int len)
{
	// Your phase must be same as your initial phase you use to encrypt your content in order to decrypt it
	phase1 = 33;
	phase2 = 33;
	phase3 = 32;
	checkDecipherPhase();
	int i = 0;
	while (i < len) {
			val[i] = val[i] - phase1 - phase2 - phase3;
			// if value become negative then convert to positive number in order to output to a file
			// This prevent the program from going into hang mode when can't decrypt
			if (val[i] < 0) {
				val[i] = abs(val[i]);
			}
			add();
			i++;
		}
}

void decipher2ascii(int *val, int len)
{
	int i = 0;
	while (i < len) {
		if (val[i] == 1) {
			val[i] = 'a';
			i++;
		}
		else if (val[i] == 2) {
			val[i] = 'b';
			i++;
		}
		else if (val[i] == 3) {
			val[i] = 'c';
			i++;
		}
		else if (val[i] == 4) {
			val[i] = 'd';
			i++;
		}
		else if (val[i] == 5) {
			val[i] = 'e';
			i++;
		}
		else if (val[i] == 6) {
			val[i] = 'f';
			i++;
		}
		else if (val[i] == 7) {
			val[i] = 'g';
			i++;
		}
		else if (val[i] == 8) {
			val[i] = 'h';
			i++;
		}
		else if (val[i] == 9) {
			val[i] = 'i';
			i++;
		}
		else if (val[i] == 10) {
			val[i] = 'j';
			i++;
		}
		else if (val[i] == 11) {
			val[i] = 'k';
			i++;
		}
		else if (val[i] == 12) {
			val[i] = 'l';
			i++;
		}
		else if (val[i] == 13) {
			val[i] = 'm';
			i++;
		}
		else if (val[i] == 14) {
			val[i] ='n';
			i++;
		}
		else if (val[i] == 15) {
			val[i] = 'o';
			i++;
		}
		else if (val[i] == 16) {
			val[i] = 'p';
			i++;
		}
		else if (val[i] == 17) {
			val[i] = 'q';
			i++;
		}
		else if (val[i] == 18) {
			val[i] = 'r';
			i++;
		}
		else if (val[i] == 19) {
			val[i] = 's';
			i++;
		}
		else if (val[i] == 20) {
			val[i] = 't';
			i++;
		}
		else if (val[i] == 21) {
			val[i] = 'u';
			i++;
		}
		else if (val[i] == 22) {
			val[i] = 'v';
			i++;
		}
		else if (val[i] == 23) {
			val[i] = 'w';
			i++;
		}
		else if (val[i] == 24) {
			val[i] = 'x';
			i++;
		}
		else if (val[i] == 25) {
			val[i] = 'y';
			i++;
		}
		else if (val[i] == 26) {
			val[i] = 'z';
			i++;
		}
		else if (val[i] == 27) {
			val[i] = 'A';
			i++;
		}
		else if (val[i] == 28) {
			val[i] = 'B';
			i++;
		}
		else if (val[i] == 29) {
			val[i] = 'C';
			i++;
		}
		else if (val[i] == 30) {
			val[i] = 'D';
			i++;
		}
		else if (val[i] == 31) {
			val[i] = 'E';
			i++;
		}
		else if (val[i] == 32) {
			val[i] = 'F';
			i++;
		}
		else if (val[i] == 33) {
			val[i] = 'G';
			i++;
		}
		else if (val[i] == 34) {
			val[i] = 'H';
			i++;
		}
		else if (val[i] == 35) {
			val[i] = 'I';
			i++;
		}
		else if (val[i] == 36) {
			val[i] = 'J';
			i++;
		}
		else if (val[i] == 37) {
			val[i] = 'K';
			i++;
		}
		else if (val[i] == 38) {
			val[i] =  'L';
			i++;
		}
		else if (val[i] == 39) {
			val[i] =  'M';
			i++;
		}
		else if (val[i] == 40) {
			val[i] = 'N';
			i++;
		}
		else if (val[i] == 41) {
			val[i] = 'O';
			i++;
		}
		else if (val[i] == 42) {
			val[i] = 'P';
			i++;
		}
		else if (val[i] == 43) {
			val[i] = 'Q';
			i++;
		}
		else if (val[i] == 44) {
			val[i] = 'R';
			i++;
		}
		else if (val[i] == 45) {
			val[i] = 'S';
			i++;
		}
		else if (val[i] == 46) {
			val[i] = 'T';
			i++;
		}
		else if (val[i] == 47) {
			val[i] = 'U';
			i++;
		}
		else if (val[i] == 48) {
			val[i] = 'V';
			i++;
		}
		else if (val[i] == 49) {
			val[i] = 'W';
			i++;
		}
		else if (val[i] == 50) {
			val[i] = 'X';
			i++;
		}
		else if (val[i] == 51) {
			val[i] = 'Y';
			i++;
		}
		else if (val[i] == 52) {
			val[i] = 'Z';
			i++;
		}
		else if (val[i] == 53) {
			val[i] = '0';
			i++;
		}
		else if (val[i] == 54) {
			val[i] = '1';
			i++;
		}
		else if (val[i] == 55) {
			val[i] = '2';
			i++;
		}
		else if (val[i] == 56) {
			val[i] = '3';
			i++;
		}
		else if (val[i] == 57) {
			val[i] = '4';
			i++;
		}
		else if (val[i] == 58) {
			val[i] = '5';
			i++;
		}
		else if (val[i] == 59) {
			val[i] = '6';
			i++;
		}
		else if (val[i] == 60) {
			val[i] = '7';
			i++;
		}
		else if (val[i] == 61) {
			val[i] = '8';
			i++;
		}
		else if (val[i] == 62) {
		val[i] = '9';
			i++;
		}
		else if (val[i] == 63) {
			val[i] = '!';
			i++;
		}
		else if (val[i] == 64) {
			val[i] = '@';
			i++;
		}
		else if (val[i] == 65) {
			val[i] = '#';
			i++;
		}
		else if (val[i] == 66) {
			val[i] = '$';
			i++;
		}
		else if (val[i] == 67) {
			val[i] = '%';
			i++;
		}
		else if (val[i] == 68) {
			val[i] = '^';
			i++;
		}
		else if (val[i] == 69) {
			val[i] = '&';
			i++;
		}
		else if (val[i] == 70) {
			val[i] = '*';
			i++;
		}
		else if (val[i] == 71) {
			val[i] = '(';
			i++;
		}
		else if (val[i] == 72) {
			val[i] = ')';
			i++;
		}
		else if (val[i] == 73) {
			val[i] = '_';
			i++;
		}
		else if (val[i] == 74) {
			val[i] = '-';
			i++;
		}
		else if (val[i] == 75) {
			val[i] = '+';
			i++;
		}
		else if (val[i] == 76) {
			val[i] = '=';
			i++;
		}
		else if (val[i] == 77) {
			val[i] = '[';
			i++;
		}
		else if (val[i] == 78) {
			val[i] = '{';
			i++;
		}
		else if (val[i] == 79) {
			val[i] = ']';
			i++;
		}
		else if (val[i] == 80) {
			val[i] = '}';
			i++;
		}
		else if (val[i] == 81) {
			val[i] = 96;
			i++;
		}
		else if (val[i] == 82) {
			val[i] = 34;
			i++;
		}
		else if (val[i] == 83) {
			val[i] = 92;
			i++;
		}
		else if (val[i] == 84) {
			val[i] = '|';
			i++;
		}
		else if (val[i] == 85) {
			val[i] = '.';
			i++;
		}
		else if (val[i] == 86) {
			val[i] = '>';
			i++;
		}
		else if (val[i] == 87) {
			val[i] = '<';
			i++;
		}
		else if (val[i] == 88) {
			val[i] = ',';
			i++;
		}
		else if (val[i] == 89) {
			val[i] = ' ';
			i++;
		}
		else if (val[i] == 90) {
			val[i] = '/';
			i++;
		}
		else if (val[i] == 91) {
			val[i] = '\?';
			i++;
		}
		else if (val[i] == 92) {
			val[i] = '\a';
			i++;
		}
		else if (val[i] == 93) {
			val[i] = '\b';
			i++;
		}
		else if (val[i] == 94) {
			val[i] = '\e';
			i++;
		}
		else if (val[i] == 95) {
			val[i] = '\f';
			i++;
		}
		else if (val[i] == 96){
			val[i] = '\n';
			i++;
		}
		else if (val[i] == 97){ 
			val[i] = '\r';
			i++;
		}
		else if (val[i] == 98) {
			val[i] = '\t';
			i++;
		}
		else if (val[i] == 99) {
			val[i] = '\v';
			i++;
		}
		else if (val[i] == 100) {
			val[i] = '\'';
			i++;
		}

	}
}