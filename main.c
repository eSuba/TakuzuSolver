/////////////////////////////////////////////////////////////////
//                                                             //
// AUTEURS : CHETOUANI Mohamed	GANESAN Chandra                //
//                                                             //
// DATE    : 17 déc 					                                 //
//                                                             //
// RESUME  : main.c                                            //
// 			                                                       //
//                                                             //
/////////////////////////////////////////////////////////////////

#include "fonctions.h"

int main(){
	srand(time(NULL));

	color_printf(GREEN, MAGENTA, "Début du programme"); printf("\n");

  test_partie1();

	//char c[]="Grilles/G./grille..txt";
	//choisir_grille(c);
	//jouer(c);
	color_printf(YELLOW, CYAN, "Fin du programme"); printf("\n");
	return 0;
}
