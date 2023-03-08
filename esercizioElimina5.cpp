#include <iostream>
#include <random>
using namespace std;

int main()
{

    // int matrice1[5][5]; //te la crea vuota
    // //te la riempi con il for
    // int matrice[][] = { {1,2}, {3,4} };
    // int array1[2]={1,2};
    // int array2[2]={3,4};
    // int arraySpeciale[2]={array1,array2};

    int righe = 9;
    int colonne = 9;

    int matrice[righe][colonne];

    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            matrice[i][j] = rand() % 10;      //riempo la matrice in ogni suo elemento con numeri "randomici"   
            if (matrice[i][j] < 5){          //vedo se l'intero in posizione "i" "j" è minore di 5
                matrice[i][j] = 0;           // se < 5 lo "faccio diventare 0"
            }
        }
    }

    cout << "    ";
    for (int i = 0; i < colonne; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    int trattini = colonne * 2 + 4;
    for (int i = 0; i < trattini; i++)
    {
        cout << "-";
    }
    cout << endl;

    for (int i = 0; i < righe; i++)
    {

        cout << i << "|  ";

        for (int j = 0; j < colonne; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;   
    }
}
    // VOI SIETE QUI
    // input matrice, righe, colonne

    // output non ci devono essere i <5
/*
    for (int i = 0; i < righe; i++)
    {
        for (int y = 0; y < colonne; i++)
        {
            if (matrice[i][y] < 5)
            {
                matrice[i][y] = 0;
                cout << matrice[i][y];
                //(i >= 5 && y >= 5){
            }
        }
    }
}
*/