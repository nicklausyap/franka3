// Date created: 14-AUG-2021 SATURDAY
// This source file is part of the franka3 open source project
// Copyright (c) 2021 nicklaus yap ken yik
// version: 0.1.0

#include <stdio.h> // for printf(), sizeof()
#include <string.h> // for strlen(), memset()
#include "function.h"
#include "version.h"

// Change this for encryption. Max value for each phase is 26
int phase1 = 1;
int phase2 = 1;
int phase3 = 1;

int main()
{
	welcome();
	version();
	copyright();
	int i = 0;
	int val[4096];
	memset(val, '\0', sizeof(int)*4096);
	char buff[4096] = "HELLO WORLD HELLO WORLD"; // Content to be encrypt. Change to your content
	unsigned char val2char[4096] = {0};
	memset(val, '\0', sizeof(unsigned char) * 4096);
	FILE *fp;
	FILE* fp2;
	fp = fopen("encrypt.txt", "w");
	fp2 = fopen("decrypt.txt", "w");

	while(i < strlen(buff)){
		if (buff[i] == 'a') {
			val[i] = 1 + phase1 + phase2 + phase3;
			add();
			i++;
		}
		else if(buff[i] == 'b'){
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
		else if(buff[i] == 'A'){
		val[i] = 27 + phase1 + phase2 + phase3;
		add();
		i++;
		} else if (buff[i] == 'B'){
		val[i] = 28 + phase1 + phase2 + phase3;
		add();
		i++;
		} else if (buff[i] == 'C'){
		val[i] = 29 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'D'){
		val[i] = 30 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'E'){
		val[i] = 31 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'F'){
		val[i] = 32 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'G'){
		val[i] = 33 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'H'){
		val[i] = 34 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'I'){
		val[i] = 35 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'J'){
		val[i] = 36 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'K'){
		val[i] = 37 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'L'){
		val[i] = 38 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'M'){
		val[i] = 39 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'N'){
		val[i] = 40 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'O'){
		val[i] = 41 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'P'){
		val[i] = 42 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'Q'){
		val[i] = 43 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'R'){
		val[i] = 44 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'S'){
		val[i] = 45 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'T'){
		val[i] = 46 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'U'){
		val[i] = 47 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'V'){
		val[i] = 48 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'W'){
		val[i] = 49 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'X'){
		val[i] = 50 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'Y'){
		val[i] = 51 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == 'Z'){
		val[i] = 52 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == '0'){
		val[i] = 53 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == '1'){
		val[i] = 54 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == '2'){
		val[i] = 55 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == '3'){
		val[i] = 56 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == '4'){
		val[i] = 57 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == '5'){
		val[i] = 58 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == '6'){
		val[i] = 59 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == '7'){
		val[i] = 60 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == '8'){
		val[i] = 61 + phase1 + phase2 + phase3;
		add();
		i++;
		}else if (buff[i] == '9'){
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
		else if (buff[i] == 96) {
		val[i] = 81 + phase1 + phase2 + phase3;
		add();
		i++;
		}
		else if (buff[i] == 34) {
		val[i] = 82 + phase1 + phase2 + phase3;
		add();
		i++;
		}
		else if (buff[i] == 92) {
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
		else if (buff[i] == ' '){
		val[i] = 89 + phase1 + phase2 + phase3;
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
	for (int c = 0; c < strlen(buff);) {
		val2char[c] = val[c];
		c++;
	}
	
	fputs(val2char, fp); // write encrypted data to a file

	fclose(fp);

	decipher(&val, strlen(buff));
	decipher2ascii(&val, strlen(buff));

	// copy content from int array val to char array val2char
	for (int f = 0; f < strlen(buff);) {
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