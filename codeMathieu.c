
#include <stdio.h>
#define  COLONNE 3
#define  RANGEE 3
#define  MATRICE_CARREE 3

int DetecterPalindrome(char valeur[]);
void AdditionMatrices(int[RANGEE][COLONNE],int[RANGEE][COLONNE],int[RANGEE][COLONNE]);
void MultiplicationMatrices(int[MATRICE_CARREE][MATRICE_CARREE],int[MATRICE_CARREE][MATRICE_CARREE],int[MATRICE_CARREE][MATRICE_CARREE]);
void AfficherMatrice(int[RANGEE][COLONNE]);
void PlanDeTest();




void PlanDeTest()
{
	//Valide la fonction DetecterPalindrome
	//Test1 laval
	char valeur[] = {"laval"};
	int confirmation = 0;
	
	printf("------------------------VALIDATION PALINDROME----------------------------\n");
	confirmation = DetecterPalindrome(valeur);
	printf("%s",valeur);
	printf(" : ");
	if(confirmation == 1)
	{
		printf("vraie");
	}
	else
	{
			printf("Faux");	
	}
	printf("\n");
	
	//Test 2 LAVAL
	confirmation = DetecterPalindrome("LAVAL");
	printf("%s","LAVAL");
	printf(" : ");
	if(confirmation == 1)
	{
		printf("vraie");
	}
	else
	{
			printf("Faux");	
	}
	printf("\n");
	
	//Test 3 LAval
	confirmation = DetecterPalindrome("LAval");
	printf("%s","LAval");
	printf(" : ");
	if(confirmation == 1)
	{
		printf("vraie");
	}
	else
	{
			printf("Faux");	
	}
	printf("\n");
	printf("\n");
	
	//Validation de la fonction AdditionMatrices
	printf("------------------------VALIDATION Addition de matrice----------------------------\n");
	
	//Test 1 
	int matriceAdd1[RANGEE][COLONNE]={	{1,2,3},
										{4,5,6},
										{7,8,9}};	

	int matriceAdd2[RANGEE][COLONNE]={	{1,2,3},
										{4,5,6},
										{7,8,9}};	
										
	int matriceAdd3[RANGEE][COLONNE]={	{0,0,0},
										{0,0,0},
										{0,0,0}};	
										
	AdditionMatrices(matriceAdd1,matriceAdd2,matriceAdd3);
	
	AfficherMatrice(matriceAdd1);
	printf(" +\n");
	AfficherMatrice(matriceAdd2);
	printf(" =\n");
	AfficherMatrice(matriceAdd3);
	printf("\n\n\n\n\n");
	
	//Test2
	
	int matriceAdd4[RANGEE][COLONNE]={	{-1,-2,-3},
										{-4,-5,-6},
										{-7,-8,-9}};	

	int matriceAdd5[RANGEE][COLONNE]={	{1,2,3},
										{4,5,6},
										{7,8,9}};	
										
	int matriceAdd6[RANGEE][COLONNE]={	{1,1,1},
										{1,1,1},
										{1,1,1}};	
										
	AdditionMatrices(matriceAdd4,matriceAdd5,matriceAdd6);
	
	AfficherMatrice(matriceAdd1);
	printf(" +\n");
	AfficherMatrice(matriceAdd2);
	printf(" =\n");
	AfficherMatrice(matriceAdd3);
	printf("\n\n\n\n\n");
	
	//Test3 2x2
	/*int matriceAdd7[2][2]={	{2,3},
							{5,-6}};
											

	int matriceAdd8[2][2]={	{5,2},
							{-4,7}};
										
	int matriceAdd9[2][2]={	{0,0},
							{0,0}};	
										
	AdditionMatrices(matriceAdd7,matriceAdd8,matriceAdd9);
	
	AfficherMatrice(matriceAdd7);
	printf(" +\n");
	AfficherMatrice(matriceAdd8);
	printf(" =\n");
	AfficherMatrice(matriceAdd9);
	printf("\n\n\n\n\n");*/
	
	//Test4
	
	//MultiplicationMatrices(matriceAdd1,matriceAdd2,matriceAdd3);
	//AfficherMatrice(matriceAdd3);										
		
	
	
	
	
	
	
}




int main(int argc, char **argv)
{
	
    PlanDeTest();	
	return 0;
}

int DetecterPalindrome(char valeur[]) 
{
	int longueurValeur = 0; //longueur du string valeur en parametre
	int compteur;  //Garde en mémoire la valeur initial de longueurValeur
	char test; //Permet de détecter la fin d'un string
	
	do
	{
		test = valeur[longueurValeur];
		longueurValeur++;
		
	}while(test!='\0');
	
	longueurValeur--;

	compteur = longueurValeur;
	
	for(int i =0; i< compteur;i++)
	{
		
		longueurValeur--;
		if(valeur[i] != valeur[longueurValeur])
		{
			
			return 0;
		}
		
	}
	
	return 1;
	
}

void AdditionMatrices(int matrice1[RANGEE][COLONNE],int matrice2[RANGEE][COLONNE],int matriceFinal[RANGEE][COLONNE])
{
	
	for(int i =0;i<RANGEE;i++)
	{
		
			for(int j =0; j < COLONNE; j++)
			
			{
		
				matriceFinal[i][j] = matrice1[i][j] + matrice2[i][j];

			}
		
	}
	
	
	
	
}


void MultiplicationMatrices(int matrice1[MATRICE_CARREE][MATRICE_CARREE],int matrice2[MATRICE_CARREE][MATRICE_CARREE],int matriceFinal[MATRICE_CARREE][MATRICE_CARREE])
{
	

	
	
	for(int a =0;a<MATRICE_CARREE;a++)
	{
		
			for(int b =0; b < MATRICE_CARREE; b++)
			
			{
				matriceFinal[a][b] = 0;
				for(int c =0; c < MATRICE_CARREE;c++)
				{
					
					matriceFinal[a][b] += (matrice1[a][c]*matrice2[c][b]);
					
					
				}

			}
		
	}
	
	
	
	
	
	
	
}



void AfficherMatrice(int matrice[RANGEE][COLONNE])
{
	
	for(int i =0;i<RANGEE ;i++)
	{
			printf("| ");
			for(int j =0; j < COLONNE; j++)
			
			{
			
				printf("%d",matrice[i][j]);
				printf(" ");

			}
		 printf("|\n");
		 
	}
}




