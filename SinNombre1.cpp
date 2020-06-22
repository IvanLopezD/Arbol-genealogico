#include <stdio.h>
#include <stdlib.h>


int main(){

	int menu;
	
	do{
	
	printf("1. Ver Abuelos\n");
	printf("2. Ver hijos\n");
	printf("3. Ver nietos\n");
	printf("4. Ver bisnietos\n");
	printf("5. Ver Arbol general\n");
	printf("6.  Salir\n");
	printf("Escoge una opcion: \n");
	scanf("%d", &menu);	
	
	
	switch(menu){
		
		case 1: printf("Esperanza -- Margarito");
		break;
		
		case 2: printf("Feliciano -- Gloria || Flor -- Fidel || Juanis -- Rafael || Beatriz -- José || Moruza -- Abraham || Oscar -- Veronica \n");
		break;
		
		case 3: printf("Brenda -- Michel Ivan -- Daniela || Daniel  Edgar || Betsabe -- Cesar || Erick || Athziry  Yaretzy || Samara  Oscar  Karen \n");
		break;
		
		case 4: printf("Derek || Regina");
		break;
		
		case 5:  printf("                                               Esperanza -- Margarito\n                                          ");
				 printf("        |              |                                             \n");
				 printf("                                                  ----------------                                             \n");
				 printf("                                                         |                                                       \n");
				 printf("           -------------------------------------------------------------------------------------------------------------------------------     \n");
				 printf("          |                                 |                   |                      |                     |                           |\n");
				 printf("       Gloria -- Feliciano                 Flor -- Fidel      Juanis -- Rafael       Beatriz -- Jose       Moruza -- Abraham          Oscar -- Veronica \n");
				 printf("               |                                 |                    |                      |                    |                         |\n");
				 printf("          -----------------                   ----------              |                      |                -----------           ---------------\n");
				 printf("          |               |                   |        |              |                      |                |         |           |       |      |\n");
				 printf("        Brenda--Michel  Ivan--Daniela       Daniel   Edgar          Betsabe -- Cesar        Erick           Athziry   Yaretzy      Samara  Oscar  Karen \n");
				 printf("               |                              |                                                                                                           \n");
				 printf("             Derek                         Regina                                                                                                          \n");
				 break;
				 
		}
	} while(menu!=6);

	return 0;
}

