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
    char arrayCasa[] = {'c', 'a', 's', 'a'};
    int matrice[righe][colonne];

    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            matrice[i][j] = rand() % 10;
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

    // ESERCIZIO
    // input matrice, righe, colonne
    // output 0 sulle diagonali

    // STAMPA RISULTATO

    cout << "    ";
    for (int i = 0; i < colonne; i++)
    {
        cout << i << " ";
    }
    cout << endl;
    trattini = colonne * 2 + 4;
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
            for (int y = 0; y < righe - 5; y++)
            {
                if (y > 3)
                {
                    cout << arrayCasa[y];
                }
                else
                {
                    cout << matrice[i][j] << " ";
                }
            }

            cout << endl;
        }
    }
}
/*  if (j > 4)


            else
            {  if (j < 4){
                cout << arrayCasa[j];
            }*/