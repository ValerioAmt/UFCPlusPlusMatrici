#include <array>
#include <iostream>
using namespace std;
 
int main()
{
    int num = 10;
    int numeretti[num];
 
    for (int i = 0; i < num; i++)
    {
        numeretti[i] = 0;
    }
 
    cout << numeretti << endl;
 
    // for(int i=0; i<num; i++){
    //     cout << numeretti[i] << " ";
    // }
 
    int righe = 9;
    int colonne = 9;
 
    int matrice[righe][colonne];
 
    for (int i = 0; i < righe; i++)
    {
        for (int j = 0; j < colonne; j++)
        {
            matrice[i][j] = 0;
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