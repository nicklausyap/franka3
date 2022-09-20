// Date created: 14-AUG-2021 SATURDAY
// This source file is part of the franka3 open source project
// Copyright (c) 2021 nicklaus yap ken yik
// version: 0.1.3

#include <stdio.h> // for printf(), sizeof()
#include <string.h> // for strlen(), memset()
#include <stdlib.h> // for malloc(), EXIT_FAILURE
#include <string.h>
#include "function.h"
#include "version.h"
#include "main.h" // all the define here

// Change this value for your encryption. Min value is 1 and max value for each phase is 33.
// Anything below value 1 is not recommended
int phase1 = 33;
int phase2 = 33;
int phase3 = 32;

void checkInitialPhase()
{
	if (phase1 > 33 || phase2 > 33 || phase3 > 33) {
		printf("%s\n", "Error: Max value for each phase is 33");
		exit(EXIT_FAILURE);
	}
	else if (phase1 < 1 || phase2 < 1 || phase3 < 1) {
		printf("%s\n", "Error: Minimum value for each phase is 1. You can use value 0 but not recommended");
		exit(EXIT_FAILURE);
	}
}

// substitute initial entry. Pass in option and a single character
int initialSubGate(int option, int charac)
{
	int opt1[] = {_1a,_1b,_1c,_1d,_1e,_1f,_1g,_1h,_1i,_1j,_1k,_1l,_1m,_1n,_1o,_1p,_1q,_1r,_1s,_1t,_1u,_1v,_1w,_1x,_1y,_1z,_1A,_1B,_1C,_1D,_1E,_1F,_1G,_1H,_1I,_1J,_1K,_1L,_1M,_1N,_1O,_1P,_1Q,_1R,_1S,_1T,_1U,_1V,_1W,_1X,_1Y,_1Z,_1AA,_1AB,_1AC,_1AD,_1AE,_1AF,_1AG,_1AH,_1AI,_1AJ,_1AK,_1AL,_1AM,_1AN,_1AO,_1AP,_1AQ,_1AR,_1AS,_1AT,_1AU,_1AV,_1AW,_1AX,_1AY,_1AZ,_1BA,_1BB,_1BC,_1BD,_1BE,_1BF,_1BG,_1BH,_1BI,_1BJ,_1BK,_1BL,_1BM,_1BN,_1BO,_1BP,_1BQ,_1BR,_1BS,_1BT,_1BU,_1BV,_1BW};
	// EKMFLGDQVZNTOWYHXUSPAIBRCJ
	if(option == 1){
		if (charac == 'A') {
			return _1a;
		}
		else if(charac == 'B'){
			return _1b;
		}
		else if (charac == 'C') {
			return _1c;
		}
		else if (charac == 'D') {
			return _1d;
		}
		else if (charac == 'E') {
			return _1e;
		}
		else if (charac == 'F') {
			return _1f;
		}
		else if (charac == 'G') {
			return _1g;
		}
		else if (charac == 'H') {
			return _1h;
		}
		else if (charac == 'I') {
			return _1i;
		}
		else if (charac == 'J') {
			return _1j;
		}
		else if (charac == 'K') {
			return _1k;
		}
		else if (charac == 'L') {
			return _1l;
		}
		else if (charac == 'M') {
			return _1m;
		}
		else if (charac == 'N') {
			return _1n;
		}
		else if (charac == 'O') {
			return _1o;
		}
		else if (charac == 'P') {
			return _1p;
		}
		else if (charac == 'Q') {
			return _1q;
		}
		else if (charac == 'R') {
			return _1r;
		}
		else if (charac == 'S') {
			return _1s;
		}
		else if (charac == 'T') {
			return _1t;
		}
		else if (charac == 'U') {
			return _1u;
		}
		else if (charac == 'V') {
			return _1v;
		}
		else if (charac == 'W') {
			return _1w;
		}
		else if (charac == 'X') {
			return _1x;
		}
		else if (charac == 'Y') {
			return _1y;
		}
		else if (charac == 'Z') {
			return _1z;
		}
		else if(charac == 'a'){
			return _1A;
		} else if (charac == 'b'){
			return _1B;
		} else if (charac == 'c'){
			return _1C;
		}else if (charac == 'd'){
			return _1D;
		}else if (charac == 'e'){
			return _1E;
		}else if (charac == 'f'){
			return _1F;
		}else if (charac == 'g'){
			return _1G;
		}else if (charac == 'h'){
			return _1H;
		}else if (charac == 'i'){
			return _1I;
		}else if (charac == 'j'){
			return _1J;
		}else if (charac == 'k'){
			return _1K;
		}else if (charac == 'l'){
			return _1L;
		}else if (charac == 'm'){
			return _1M;
		}else if (charac == 'n'){
			return _1N;
		}else if (charac == 'o'){
			return _1O;
		}else if (charac == 'p'){
			return _1P;
		}else if (charac == 'q'){
			return _1Q;
		}else if (charac == 'r'){
			return _1R;
		}else if (charac == 's'){
			return _1S;
		}else if (charac == 't'){
			return _1T;
		}else if (charac == 'u'){
			return _1U;
		}else if (charac == 'v'){
			return _1V;
		}else if (charac == 'w'){
			return _1W;
		}else if (charac == 'x'){
			return _1X;
		}else if (charac == 'y'){
			return _1Y;
		}else if (charac == 'z'){
			return _1Z;
		}else if (charac == '0'){
			return _1AA;
		}else if (charac == '1'){
			return _1AB;
		}else if (charac == '2'){
			return _1AC;
		}else if (charac == '3'){
			return _1AD;
		}else if (charac == '4'){
			return _1AE;
		}else if (charac == '5'){
			return _1AF;
		}else if (charac == '6'){
			return _1AG;
		}else if (charac == '7'){
			return _1AH;
		}else if (charac == '8'){
			return _1AI;
		}else if (charac == '9'){
			return _1AJ;
		}
		else if (charac == '!') {
			return _1AK;
		}
		else if (charac == '@') {
			return _1AL;
		}
		else if (charac == '#') {
			return _1AM;
		}
		else if (charac == '$') {
			return _1AN;
		}
		else if (charac == '%') {
			return _1AO;
		}
		else if (charac == '^') {
			return _1AP;
		}
		else if (charac == '&') {
			return _1AQ;
		}
		else if (charac == '*') {
			return _1AR;
		}
		else if (charac == '(') {
			return _1AS;
		}
		else if (charac == ')') {
			return _1AT;
		}
		else if (charac == '_') {
			return _1AU;
		}
		else if (charac == '-') {
			return _1AV;
		}
		else if (charac == '+') {
			return _1AW;
		}
		else if (charac == '=') {
			return _1AX;
		}
		else if (charac == '[') {
			return _1AY;
		}
		else if (charac == '{') {
			return _1AZ;
		}
		else if (charac == ']') {
			return _1BA;
		}
		else if (charac == '}') {
			return _1BB;
		}
		else if (charac == 96) { // 96 is ` grave accent
			return _1BC;
		}
		else if (charac == 34) { // 34 is double quotation mark
			return _1BD;
		}
		else if (charac == 92) { // 92 is backslash
			return _1BE;
		}
		else if (charac == '|') {
			return _1BF;
		}
		else if (charac == '.') {
			return _1BG;
		}
		else if (charac == '>') {
			return _1BH;
		}
		else if (charac == '<') {
			return _1BI;
		}
		else if (charac == ',') {
			return _1BJ;
		}
		else if (charac == ' '){
			return _1BK;
		}
		else if (charac == '/') {
			return _1BL;
		}
		else if (charac == '\?') {
			return _1BM;
		}
		else if (charac == '\a') {
			return _1BN;
		}
		else if (charac == '\b') {
			return _1BO;
		}
		else if (charac == 27) { // ascii 27 is escape character
			return _1BP;
		}
		else if (charac == '\f') {
			return _1BQ;
		}
		else if (charac == '\n') {
			return _1BR;
		}
		else if (charac == '\r') {
			return _1BS;
		}
		else if (charac == '\t') {
			return _1BT;
		}
		else if (charac == '\v') {
			return _1BU;
		}
		else if (charac == '\'') {
			return _1BV;
		}else{
			printf("%d, ", charac);
			return charac;
		}


	}

}

void showOption()
{
	printf("%s\n", "Choose an option(1-3): ");
	printf("%s\n", "1. encrypt file (max size: 2KB file) ");
	printf("%s\n", "2. currently not supported ");
	printf("%s\n", "3. currently not supported ");
}

int main()
{
	welcome();
	version();
	copyright();
	checkInitialPhase();
	showOption();
	int h = 0; /* used for storing single character input */
	int i = 0;
	char* thefilename = malloc(sizeof(char) * 255);
	memset(thefilename, '\0', sizeof(char) * 255);
	int val[2048];
	memset(val, '\0', sizeof(int) * 2048);
	
	// char* buff = "HELLO WORLD HELLO WORLD+++@ABCD,,,//////// \'  "; // Content to be encrypt. Change to your content
	char* buf = ":HELLO WORLD:;; 1234567890 HELLO WORLD+++@ABCD,,,/////////? \'  ";
	char* buff = malloc(sizeof(unsigned char) * 2048);
	if (buf == NULL) {
		exit(EXIT_FAILURE);
	}
	memset(buf, '\0', sizeof(unsigned char) * 2048);
	char* val2char = malloc(sizeof(unsigned char) * 2048);
	if (val2char == NULL) {
		exit(EXIT_FAILURE);
	}
	memset(val2char, '\0', sizeof(unsigned char) * 2048);

	printf("%s", "option: ");
	h = getc(stdin);
	/* option input */
	/* 49 is ascii number 1 */
	if (h == 49) {
		/* read the newline left by h int variable */
		gets(stdin);
		printf("%s", "enter filename: ");
		gets(thefilename);
	}
	else {
		/* terminate the program cause the option given is wrong */
		printf("%s", "option number does not exist ");
		return 1;
	}

	char* source = malloc(sizeof(unsigned char) * 2048);
	memset(source, '\0', sizeof(unsigned char) * 2048);
	int symbol;
	int number = 0;
	FILE* fp_r = fopen(thefilename, "r");
	if (fp_r != NULL)
	{
		while ((symbol = getc(fp_r)) != EOF)
		{
			source[number] = symbol;
			number++;
			//strcat(source, &symbol);
		}
		fclose(fp_r);
	}
	else {
		printf("%s\n", "error opening file");
		return 1;
	}

	printf("%s %d\n", "length of file: ", strlen(source));
	FILE *fp;
	FILE* fp2;
	fp = fopen("encrypt.txt", "w");
	fp2 = fopen("decrypt.txt", "w");

	/* option 1 does not introduce initial subGate*/
	if (h == 49) {
		while (i < strlen(source)) {
			if (source[i] == 'a') {
				val[i] = 1 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'b') {
				val[i] = 2 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'c') {
				val[i] = 3 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'd') {
				val[i] = 4 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'e') {
				val[i] = 5 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'f') {
				val[i] = 6 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'g') {
				val[i] = 7 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'h') {
				val[i] = 8 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'i') {
				val[i] = 9 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'j') {
				val[i] = 10 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'k') {
				val[i] = 11 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'l') {
				val[i] = 12 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'm') {
				val[i] = 13 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'n') {
				val[i] = 14 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'o') {
				val[i] = 15 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'p') {
				val[i] = 16 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'q') {
				val[i] = 17 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'r') {
				val[i] = 18 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 's') {
				val[i] = 19 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 't') {
				val[i] = 20 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'u') {
				val[i] = 21 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'v') {
				val[i] = 22 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'w') {
				val[i] = 23 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'x') {
				val[i] = 24 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'y') {
				val[i] = 25 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'z') {
				val[i] = 26 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'A') {
				val[i] = 27 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'B') {
				val[i] = 28 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'C') {
				val[i] = 29 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'D') {
				val[i] = 30 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'E') {
				val[i] = 31 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'F') {
				val[i] = 32 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'G') {
				val[i] = 33 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'H') {
				val[i] = 34 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'I') {
				val[i] = 35 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'J') {
				val[i] = 36 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'K') {
				val[i] = 37 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'L') {
				val[i] = 38 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'M') {
				val[i] = 39 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'N') {
				val[i] = 40 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'O') {
				val[i] = 41 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'P') {
				val[i] = 42 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'Q') {
				val[i] = 43 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'R') {
				val[i] = 44 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'S') {
				val[i] = 45 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'T') {
				val[i] = 46 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'U') {
				val[i] = 47 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'V') {
				val[i] = 48 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'W') {
				val[i] = 49 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'X') {
				val[i] = 50 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'Y') {
				val[i] = 51 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 'Z') {
				val[i] = 52 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '0') {
				val[i] = 53 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '1') {
				val[i] = 54 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '2') {
				val[i] = 55 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '3') {
				val[i] = 56 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '4') {
				val[i] = 57 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '5') {
				val[i] = 58 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '6') {
				val[i] = 59 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '7') {
				val[i] = 60 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '8') {
				val[i] = 61 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '9') {
				val[i] = 62 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '!') {
				val[i] = 63 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '@') {
				val[i] = 64 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '#') {
				val[i] = 65 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '$') {
				val[i] = 66 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '%') {
				val[i] = 67 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '^') {
				val[i] = 68 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '&') {
				val[i] = 69 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '*') {
				val[i] = 70 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '(') {
				val[i] = 71 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == ')') {
				val[i] = 72 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '_') {
				val[i] = 73 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '-') {
				val[i] = 74 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '+') {
				val[i] = 75 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '=') {
				val[i] = 76 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '[') {
				val[i] = 77 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '{') {
				val[i] = 78 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == ']') {
				val[i] = 79 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '}') {
				val[i] = 80 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 96) { // 96 is ` grave accent
				val[i] = 81 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 34) { // 34 is double quotation mark
				val[i] = 82 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 92) { // 92 is backslash
				val[i] = 83 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '|') {
				val[i] = 84 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '.') {
				val[i] = 85 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '>') {
				val[i] = 86 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '<') {
				val[i] = 87 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == ',') {
				val[i] = 88 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == ' ') {
				val[i] = 89 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '/') {
				val[i] = 90 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '\?') {
				val[i] = 91 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '\a') {
				val[i] = 92 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '\b') {
				val[i] = 93 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 27) { // ascii 27 is escape character
				val[i] = 94 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '\f') {
				val[i] = 95 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '\n') {
				val[i] = 96 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '\r') {
				val[i] = 97 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '\t') {
				val[i] = 98 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '\v') {
				val[i] = 99 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == '\'') {
				val[i] = 100 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 5) {
				val[i] = 101 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 6) {
				val[i] = 102 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 4) {
				val[i] = 103 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 17) {
				val[i] = 104 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 22) {
				val[i] = 105 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 26) {
				val[i] = 106 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 14) {
				val[i] = 107 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 20) {
				val[i] = 108 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 15) {
				val[i] = 109 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 23) {
				val[i] = 110 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 25) {
				val[i] = 111 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 24) {
				val[i] = 112 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 21) {
				val[i] = 113 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 19) {
				val[i] = 114 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 16) {
				val[i] = 115 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 1) {
				val[i] = 116 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 2) {
				val[i] = 117 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 18) {
				val[i] = 118 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 3) {
				val[i] = 119 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 28) {
				val[i] = 120 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 29) {
				val[i] = 121 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 30) {
				val[i] = 122 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 59) {
				val[i] = 123 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 58) {
				val[i] = 124 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (source[i] == 64) {
				val[i] = 125 + phase1 + phase2 + phase3;
				add();
				i++;
			}
		}

	// copy content from int array val to char array val2char
		for (int c = 0; c < strlen(source);) {
			val2char[c] = val[c];
			c++;
		}

		fputs(val2char, fp); // write encrypted data to a file

		fclose(fp);

		decipher(&val, strlen(source));
		// Need this function cause the char not map to ascii. After that only passed to reverseInitialSubGate()
		decipher2ascii(&val, strlen(source));

		// copy content from int array val to char array val2char
		for (int f = 0; f < strlen(source);) {
			val2char[f] = val[f];
			f++;
		}

		fputs(val2char, fp2); // write decrypted data to a file

		fclose(fp2);
	}

	else {



		while (i < strlen(buf)) {

			buff[i] = initialSubGate(1, buf[i]);

			if (buff[i] == 'a') {
				val[i] = 1 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'b') {
				val[i] = 2 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'c') {
				val[i] = 3 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'd') {
				val[i] = 4 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'e') {
				val[i] = 5 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'f') {
				val[i] = 6 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'g') {
				val[i] = 7 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'h') {
				val[i] = 8 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'i') {
				val[i] = 9 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'j') {
				val[i] = 10 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'k') {
				val[i] = 11 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'l') {
				val[i] = 12 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'm') {
				val[i] = 13 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'n') {
				val[i] = 14 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'o') {
				val[i] = 15 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'p') {
				val[i] = 16 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'q') {
				val[i] = 17 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'r') {
				val[i] = 18 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 's') {
				val[i] = 19 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 't') {
				val[i] = 20 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'u') {
				val[i] = 21 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'v') {
				val[i] = 22 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'w') {
				val[i] = 23 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'x') {
				val[i] = 24 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'y') {
				val[i] = 25 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'z') {
				val[i] = 26 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'A') {
				val[i] = 27 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'B') {
				val[i] = 28 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'C') {
				val[i] = 29 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'D') {
				val[i] = 30 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'E') {
				val[i] = 31 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'F') {
				val[i] = 32 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'G') {
				val[i] = 33 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'H') {
				val[i] = 34 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'I') {
				val[i] = 35 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'J') {
				val[i] = 36 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'K') {
				val[i] = 37 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'L') {
				val[i] = 38 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'M') {
				val[i] = 39 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'N') {
				val[i] = 40 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'O') {
				val[i] = 41 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'P') {
				val[i] = 42 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'Q') {
				val[i] = 43 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'R') {
				val[i] = 44 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'S') {
				val[i] = 45 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'T') {
				val[i] = 46 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'U') {
				val[i] = 47 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'V') {
				val[i] = 48 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'W') {
				val[i] = 49 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'X') {
				val[i] = 50 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'Y') {
				val[i] = 51 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 'Z') {
				val[i] = 52 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '0') {
				val[i] = 53 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '1') {
				val[i] = 54 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '2') {
				val[i] = 55 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '3') {
				val[i] = 56 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '4') {
				val[i] = 57 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '5') {
				val[i] = 58 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '6') {
				val[i] = 59 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '7') {
				val[i] = 60 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '8') {
				val[i] = 61 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '9') {
				val[i] = 62 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '!') {
				val[i] = 63 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '@') {
				val[i] = 64 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '#') {
				val[i] = 65 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '$') {
				val[i] = 66 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '%') {
				val[i] = 67 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '^') {
				val[i] = 68 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '&') {
				val[i] = 69 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '*') {
				val[i] = 70 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '(') {
				val[i] = 71 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == ')') {
				val[i] = 72 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '_') {
				val[i] = 73 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '-') {
				val[i] = 74 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '+') {
				val[i] = 75 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '=') {
				val[i] = 76 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '[') {
				val[i] = 77 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '{') {
				val[i] = 78 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == ']') {
				val[i] = 79 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '}') {
				val[i] = 80 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 96) { // 96 is ` grave accent
				val[i] = 81 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 34) { // 34 is double quotation mark
				val[i] = 82 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 92) { // 92 is backslash
				val[i] = 83 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '|') {
				val[i] = 84 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '.') {
				val[i] = 85 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '>') {
				val[i] = 86 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '<') {
				val[i] = 87 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == ',') {
				val[i] = 88 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == ' ') {
				val[i] = 89 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '/') {
				val[i] = 90 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '\?') {
				val[i] = 91 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '\a') {
				val[i] = 92 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '\b') {
				val[i] = 93 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 27) { // ascii 27 is escape character
				val[i] = 94 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '\f') {
				val[i] = 95 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '\n') {
				val[i] = 96 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '\r') {
				val[i] = 97 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '\t') {
				val[i] = 98 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '\v') {
				val[i] = 99 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == '\'') {
				val[i] = 100 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 5) {
				val[i] = 101 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 6) {
				val[i] = 102 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 4) {
				val[i] = 103 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 17) {
				val[i] = 104 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 22) {
				val[i] = 105 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 26) {
				val[i] = 106 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 14) {
				val[i] = 107 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 20) {
				val[i] = 108 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 15) {
				val[i] = 109 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 23) {
				val[i] = 110 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 25) {
				val[i] = 111 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 24) {
				val[i] = 112 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 21) {
				val[i] = 113 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 19) {
				val[i] = 114 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 16) {
				val[i] = 115 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 1) {
				val[i] = 116 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 2) {
				val[i] = 117 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 18) {
				val[i] = 118 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 3) {
				val[i] = 119 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 28) {
				val[i] = 120 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 29) {
				val[i] = 121 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 30) {
				val[i] = 122 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 59) {
				val[i] = 123 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 58) {
				val[i] = 124 + phase1 + phase2 + phase3;
				add();
				i++;
			}
			else if (buff[i] == 64) {
				val[i] = 125 + phase1 + phase2 + phase3;
				add();
				i++;
			}
		}

		// strlen does not work for integer array. Do not use. For debug purpose only
		//for(int a = 0 ; a < sizeof(val)/sizeof(val[0]);) {
			//printf("%d, ", val[a]);
		//a++;
	//}

	// copy content from int array val to char array val2char
		for (int c = 0; c < strlen(buf);) {
			val2char[c] = val[c];
			c++;
		}

		fputs(val2char, fp); // write encrypted data to a file

		fclose(fp);

		decipher(&val, strlen(buf));
		// Need this function cause the char not map to ascii. After that only passed to reverseInitialSubGate()
		decipher2ascii(&val, strlen(buf));
		reverseInitialSubGate(&val, strlen(buf));

		// copy content from int array val to char array val2char
		for (int f = 0; f < strlen(buf);) {
			val2char[f] = val[f];
			f++;
		}

		fputs(val2char, fp2); // write decrypted data to a file

		fclose(fp2);
		// Value after decipher. Do not use. For debug purpose only
		//printf("%s","decipher:\n");
		//for (int a = 0; a < sizeof(val) / sizeof(val[0]);) {
			//printf("%d, ", val[a]);
			//a++;
		//}
	}
}