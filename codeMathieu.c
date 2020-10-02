
#include <stdio.h>
#define  COLONNE 2
#define  RANGEE 3
#define  MATRICE_CARREE 3

int DetecterPalindrome(char valeur[]);
void AdditionMatrices(int[RANGEE][COLONNE],int[RANGEE][COLONNE],int[RANGEE][COLONNE]);
void MultiplicationMatrices(int[MATRICE_CARREE][MATRICE_CARREE],int[MATRICE_CARREE][MATRICE_CARREE],int[MATRICE_CARREE][MATRICE_CARREE]);
void AfficherMatriceAdd(int[RANGEE][COLONNE]);
void AfficherMatriceMul(int[MATRICE_CARREE][MATRICE_CARREE]);
void PlanDeTest();
void TestPalindrome(char texte[],char resultatAttendu[]);
void TestAdditionMatrice(int[RANGEE][COLONNE],int[RANGEE][COLONNE],int[RANGEE][COLONNE],int[RANGEE][COLONNE]);
void TestMultiplicationMatrice(int[MATRICE_CARREE][MATRICE_CARREE],int[MATRICE_CARREE][MATRICE_CARREE],int[MATRICE_CARREE][MATRICE_CARREE],int[MATRICE_CARREE][MATRICE_CARREE]);


int main(int argc, char **argv)
{
	
    PlanDeTest();	
	return 0;
}

void PlanDeTest()
{
	//Validation palindrome
	//test1 laval
	TestPalindrome("laval","vrai");
	
	//test2 LAVAL
	TestPalindrome("LAVAL","vrai");
	
	//test3 LAval
	TestPalindrome("LAval","Faux");
	
	
	
	
	//Validation addition de matrice
	
	int matrice1[RANGEE][COLONNE] =   {	{1,2},
										{3,4},
										{5,6}};
										
	int matrice2[RANGEE][COLONNE] =   {	{6,5},
										{4,3},
										{2,1}};							
	
	int matriceResultante[RANGEE][COLONNE] =  {	{0,0},
												{0,0},
												{0,0}};
											
	int matriceAttendu[RANGEE][COLONNE] =  {	{7,7},
												{7,7},
												{7,7}};
	
	TestAdditionMatrice(matrice1,matrice2,matriceResultante,matriceAttendu);
	
	/*
	//Test 1 additon
	int matriceAdd1[RANGEE][COLONNE]={	{1,2,3},
										{4,5,6},
										{7,8,9}};	

	int matriceAdd2[RANGEE][COLONNE]={	{1,2,3},
										{4,5,6},
										{7,8,9}};	
										
	int matriceAdd3[RANGEE][COLONNE]={	{0,0,0},
										{0,0,0},
										{0,0,0}};
										
	int matriceResAttendu[RANGEE][COLONNE]= {{2,4,6}, 
											{8,10,12},
											{14,16,18}};		
										
										
	TestAdditionMatrice(matriceAdd1,matriceAdd2,matriceAdd3,matriceResAttendu);
	
	//Test2 addition avec chiffre negatif
	
	int matriceAdd4[RANGEE][COLONNE]={	{-1,-2,-3},
										{-4,-5,-6},
										{-7,-8,-9}};	

	int matriceAdd5[RANGEE][COLONNE]={	{1,2,3},
										{4,5,6},
										{7,8,9}};	
										
	int matriceAdd6[RANGEE][COLONNE]={	{1,1,1},
										{1,1,1},
										{1,1,1}};	
										
	int matriceResAttendu2[RANGEE][COLONNE]= {{0,0,0}, 
											{0,0,0},
											{0,0,0}};	
	TestAdditionMatrice(matriceAdd4,matriceAdd5,matriceAdd6,matriceResAttendu2);
	
	
	
	//Validation multiplication de matrices
	//Test 1 matriceAdd1 x matriceAdd2
	int matriceResAttendu4[RANGEE][COLONNE]= {{30,36,42}, 
											{66,81,96},
											{102,126,150}};											
	TestMultiplicationMatrice(matriceAdd1,matriceAdd2,matriceAdd3,matriceResAttendu4);
	//test 2 multiplication par 0
	TestMultiplicationMatrice(matriceAdd1,matriceResAttendu2,matriceAdd3,matriceResAttendu2);
	*/
}

void TestMultiplicationMatrice(int m1[MATRICE_CARREE][MATRICE_CARREE],int m2[MATRICE_CARREE][MATRICE_CARREE],int mf[MATRICE_CARREE][MATRICE_CARREE],int mRa[MATRICE_CARREE][MATRICE_CARREE])
{
	//m1 : matrice 1
	//m2 :matrice 2
	//mf : matrice résultante de l'Addition de m1 et m2
	//mRa : matrice du résulat attendu
	
	
		//Validation de la fonction AdditionMatrices
	printf("------------------------VALIDATION Multiplication de matrices----------------------------\n");
	
	//Test 1 
										
	MultiplicationMatrices(m1,m2,mf);
	AfficherMatriceMul(m1);
	printf(" x\n");
	AfficherMatriceMul(m2);
	printf(" =\n");
	AfficherMatriceMul(mf);
	printf("\nResultat attendu :\n");
	AfficherMatriceMul(mRa);
	printf("\n\n\n");
}


void TestAdditionMatrice(int m1[RANGEE][COLONNE],int m2[RANGEE][COLONNE],int mf[RANGEE][COLONNE],int mRa[RANGEE][COLONNE])
{
	//m1 : matrice 1
	//m2 :matrice 2
	//mf : matrice résultante de l'Addition de m1 et m2
	//mRa : matrice du résulat attendu
	
	
	//Validation de la fonction AdditionMatrices
	printf("------------------------VALIDATION Addition de matrices----------------------------\n");
	
	//Test 1 
										
	AdditionMatrices(m1,m2,mf);
	AfficherMatriceAdd(m1);
	printf(" +\n");
	AfficherMatriceAdd(m2);
	printf(" =\n");
	AfficherMatriceAdd(mf);
	printf("\nResultat attendu :\n");
	AfficherMatriceAdd(mRa);
	printf("\n\n\n");

	
	}
	
void TestPalindrome(char texte[],char resultatAttendu[])
{
	//Valide la fonction DetecterPalindrome
	//Test1 laval
	
	int confirmation = 0;
	
	confirmation = DetecterPalindrome(texte);
	printf("------------------------VALIDATION PALINDROME----------------------------\n");
	printf("Parametre entre : ");
	printf("%s",texte);
	printf("\nResultat: ");
	if(confirmation == 1)
	{
		printf("vrai");
	}
	else
	{
			printf("Faux");	
	}
	printf("\nResulat Attendu: ");
	printf("%s",resultatAttendu);
	printf("\n");

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



void AfficherMatriceAdd(int matrice[RANGEE][COLONNE])
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

void AfficherMatriceMul(int matrice[MATRICE_CARREE][MATRICE_CARREE])
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







