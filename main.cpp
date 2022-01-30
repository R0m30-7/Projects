//Generatore di Sudoku
//By Romeo

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

const int numeriDaGenerare = 9;
const int k = numeriDaGenerare / 3;
int numeriGenerati[numeriDaGenerare];
int quad1[k][k], quad2[k][k], quad3[k][k], quad4[k][k], quad5[k][k], quad6[k][k], quad7[k][k], quad8[k][k], quad9[k][k];

void generaNumeri(int addOn);
void stampaNumeriGenerati();
void stampaSudoku(int matr1[k][k], int matr2[k][k], int matr3[k][k], int matr4[k][k], int matr5[k][k], int matr6[k][k], int matr7[k][k], int matr8[k][k], int matr9[k][k]);
void impostaMatrice(int matr[k][k], int vet[k * 3]);
void eliminaNumeriGenerati(int vet[k]);

int main() {
	generaNumeri(0);
	impostaMatrice(quad1, numeriGenerati);
	
	eliminaNumeriGenerati(numeriGenerati);
	generaNumeri(1);
	impostaMatrice(quad2, numeriGenerati);
	
	eliminaNumeriGenerati(numeriGenerati);
	generaNumeri(2);
	impostaMatrice(quad3, numeriGenerati);
	
	eliminaNumeriGenerati(numeriGenerati);
	generaNumeri(3);
	impostaMatrice(quad4, numeriGenerati);
	
	eliminaNumeriGenerati(numeriGenerati);
	generaNumeri(4);
	impostaMatrice(quad5, numeriGenerati);
	
	eliminaNumeriGenerati(numeriGenerati);
	generaNumeri(5);
	impostaMatrice(quad6, numeriGenerati);
	
	eliminaNumeriGenerati(numeriGenerati);
	generaNumeri(6);
	impostaMatrice(quad7, numeriGenerati);
	
	eliminaNumeriGenerati(numeriGenerati);
	generaNumeri(7);
	impostaMatrice(quad8, numeriGenerati);
	
	eliminaNumeriGenerati(numeriGenerati);
	generaNumeri(8);
	impostaMatrice(quad9, numeriGenerati);
	
	stampaSudoku(quad1, quad2, quad3, quad4, quad5, quad6, quad7, quad8, quad9);
}

void eliminaNumeriGenerati(int vet[k]){
	int conta = 0;
	
	while(conta < numeriDaGenerare){
		numeriGenerati[conta] = 0;
		conta++;
	}
}

void generaNumeri(int addOn){
 	int numeroGenerato;
 	int conta1 = 0;
	int conta2 = 0;
 	
	srand(unsigned(time(NULL) + addOn));
	
	while(conta1 < numeriDaGenerare){
		numeroGenerato = rand() % 9 + 1;
		numeriGenerati[conta1] = numeroGenerato;
		
		conta2 = 0;
		while(conta2 < conta1){
			
			if(numeriGenerati[conta2] == numeroGenerato){
				numeriGenerati[conta1] == 0;
				conta1--;
			}
			
			conta2++;
		}
		
		conta1++;
	}
}

void stampaNumeriGenerati(){
	int conta = 0;
	while(conta < numeriDaGenerare){
		cout << numeriGenerati[conta] << endl;
		conta++;
	}
}

void impostaMatrice(int matr[k][k], int vet[k * 3]){
	int conta = 0;
	int x, y;
	x = 0;
	y = 0;
	
	while(x < 3){
		while(y < 3){
			matr[x][y] = vet[conta];
			conta++;
			y++;
		}
		x++;
		y = 0;	
	}
}

void stampaSudoku(int matr1[k][k], int matr2[k][k], int matr3[k][k], int matr4[k][k], int matr5[k][k], int matr6[k][k], int matr7[k][k], int matr8[k][k], int matr9[k][k]){
	int x = 0;
    int y = 0;

    while(x < k)
        {
            y = 0;
            cout << endl;
            while(y < k)
                {
                    cout << matr1[x][y];
                    cout << " ";
                    y++;
                }
                
            cout << "| ";
            y = 0;
            while(y < k)
                {
                    cout << matr2[x][y];
                    cout << " ";
                    y++;
                }
                
            cout << "| ";
            y = 0;
            while(y < k)
                {
                    cout << matr3[x][y];
                    cout << " ";
                    y++;
                }
            x++;
        }
        
    cout << endl;
    cout << "---------------------";
    
    x = 0;
    y = 0;
    
    while(x < k)
        {
            y = 0;
            cout << endl;
            while(y < k)
                {
                    cout << matr4[x][y];
                    cout << " ";
                    y++;
                }
                
            cout << "| ";
            y = 0;
            while(y < k)
                {
                    cout << matr5[x][y];
                    cout << " ";
                    y++;
                }
                
            cout << "| ";
            y = 0;
            while(y < k)
                {
                    cout << matr6[x][y];
                    cout << " ";
                    y++;
                }
            x++;
        }
        
    cout << endl;
    cout << "---------------------";
    
    x = 0;
    y = 0;
    
    while(x < k)
        {
            y = 0;
            cout << endl;
            while(y < k)
                {
                    cout << matr7[x][y];
                    cout << " ";
                    y++;
                }
                
            cout << "| ";
            y = 0;
            while(y < k)
                {
                    cout << matr8[x][y];
                    cout << " ";
                    y++;
                }
                
            cout << "| ";
            y = 0;
            while(y < k)
                {
                    cout << matr9[x][y];
                    cout << " ";
                    y++;
                }
            x++;
        }
}
