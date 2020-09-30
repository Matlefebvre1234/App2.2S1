
#include <stdio.h>
#define  COLONNE 3
#define  RANGEE 3
#define  MATRICE_CARREE 3

int DetecterPalindrome(char valeur[]);
void AdditionMatrices(int[RANGEE][COLONNE],int[RANGEE][COLONNE],int[RANGEE][COLONNE]);
void MultiplicationMatrices(int[RANGEE][COLONNE],int[RANGEE][COLONNE],int[RANGEE][COLONNE]);
void AfficherMatrice(int[RANGEE][COLONNE]);


int main(int argc, char **argv)
{
	/*char valeur[] = {"ressasser"};
	int confirmation = 0;
	
	confirmation = DetecterPalindrome(valeur);
	if(confirmation == 1)
	{
		printf("vraie");
		
	}
	else{
		
			printf("Faux");
			
		}*/
		
	int matriceAdd1[RANGEE][COLONNE]={	{1,2,3},
										{4,5,6},
										{7,8,9}};	

	int matriceAdd2[RANGEE][COLONNE]={	{1,2,3},
										{4,5,6},
										{7,8,9}};	
										
	int matriceAdd3[RANGEE][COLONNE]={	{0,0,0},
										{0,0,0},
										{0,0,0}};	
									
										
								  
									  
	//AdditionMatrices(matriceAdd1,matriceAdd2,matriceAdd3);
	MultiplicationMatrices(matriceAdd1,matriceAdd2,matriceAdd3);
	AfficherMatrice(matriceAdd3);										
		
		
		
		
		
		
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
	
	for(int i =0; i< compteur-1;i++)
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


void MultiplicationMatrices(int matrice1[RANGEE][COLONNE],int matrice2[RANGEE][COLONNE],int matriceFinal[RANGEE][COLONNE])
{
	

	
	
	for(int a =0;a<MATRICE_CARREE;a++)
	{
		
			for(int b =0; b < MATRICE_CARREE; b++)
			
			{
				matriceFinal[a][b] = 0;
				for(int c =0; c < MATRICE_CARREE;c++)
				{
					
					matriceFinal[a][b] += (matrice1[a][c]*matrice1[c][b]);
					
					
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




