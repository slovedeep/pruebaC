/*
 * main.c
 *
 *  Created on: 26 nov. 2020
 *      Author: loved
 */


#include <stdio.h>
#include <string.h>


void main(){
    int numberAttempts, i, j, posWord;
    char alphabet[3][9] = {
        { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', },
		{ 'J', 'K', 'L', 'M', 'N', 'Ñ', 'O', 'P', 'Q', },
		{ 'R', 'S', 'T','U', 'W', 'W', 'X', 'Y', 'Z', }
    };
    char *word[]= {"MOSCA" , "TRINEO" , "TEMPERAMENTO" , "LAMPARA" , "MARIPOSA" }; // lista de palabras
    char wordToComplete[strlen(word[posWord])];

	printf("**************************************\n"
			"*******Bienvenid@ Al Ahorcado*********\n"
			"**************************************\n");
	printf("Probando!!!!!!!!!!!!");
	fflush(stdout);
    do{
        printf("Por favor, escoge el nivel de dificultat\n"
			" 1. Fácil\n"
			" 2. Normal\n"
			" 3. Difícil\n"
			" 4. Experto\n");
        fflush(stdout);
	    scanf("%d",&numberAttempts);
    } while (numberAttempts<1 || numberAttempts>4);

    switch (numberAttempts)
    {
    case 1:
        numberAttempts=7;
        break;
    case 2:
        numberAttempts=5;
        break;
    case 3:
        numberAttempts=4;
        break;
    case 4:
        numberAttempts=3;
        break;
    }

    printf("Tienes %d intentos.\n",numberAttempts);

    for (i = 0; i < 3; i++) {
		for (j = 0; j < 9; j++) {
            if (i==1 && j==5){
                printf("%c ",165);
                fflush(stdout);
            }
            else
            {
                printf("%c ", alphabet[i][j]);
                fflush(stdout);
            }
		}
		printf("\n");
		fflush(stdout);
	}

}
