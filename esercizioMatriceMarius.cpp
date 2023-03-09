#include <iostream>
 
using namespace std;
 
int main()
{
    int rows = 10;
    int columns = 10;
    string words[] = {"ciao", "word", "apple", "barbabietole", "oshio"};          //worlds lenght 4 
    char empty = ' ';
 
 
    int wordsLength = sizeof(words) / sizeof(words[0]);
    int contatore = 0;
    char matrix[rows][columns];
 
    // fill matrix with ' '
    for (int i = 0; i < rows; i++)                     //riempo tutte le caselle con spazio vuoto ' ' 
    {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = empty;
        }
    }
 
    for (int index = 0; index < wordsLength; index++)                      //per indice che va da 0 alla fine dell'array words
    {
        if (index % 3 == 0)                               
        { // orizzontale
            if (words[index].length() > columns)
            {
                cout << "word " << words[index] << " is too long" << endl;
                continue;
            }
            else
            {
                contatore++;
                int x = random() % rows; // row random
                int y = random() % (columns - words[index].length());    //assegno il valore massimo di dove inserire la parola nelle colonne
 
                while (matrix[x][y] != empty)
                {
                    x = random() % rows; // row random
                    y = random() % (columns - words[index].length());
                }
 
                for (int i = 0; i < words[index].length(); i++)
                {
                    if (matrix[x][y + i] != empty)
                    {
                        x = random() % rows; // row random
                        y = random() % (columns - words[index].length());
                        i = 0;
                    }
                }
 
                for (int i = 0; i < words[index].length(); i++)
                {
                    matrix[x][y + i] = words[index][i];
                    // cout << "index: " << index << " i: " << i << " x: " << x << " y: " << y << endl;
                    // cout << "matrix[" << x << "][" << y + i << "] = " << words[index][i] << endl;
                    // cout << "result: " << matrix[x][y + i] << endl;
                }
            }
        }
        else if (index % 3 == 1)
        { // verticale
            if (words[index].length() > rows)
            {
                cout << "word " << words[index] << " is too long" << endl;
                continue;
            }
            else
            {
                contatore++;
                int x = random() % (rows - words[index].length());
                int y = random() % columns;
 
                while (matrix[x][y] != empty)
                {
                    x = random() % (rows - words[index].length());
                    y = random() % columns;
                }
 
                for (int i = 0; i < words[index].length(); i++)
                {
                    if (matrix[x + i][y] != empty)
                    {
                        x = random() % (rows - words[index].length());
                        y = random() % columns;
                        i = 0;
                    }
                }
 
                for (int i = 0; i < words[index].length(); i++)
                {
                    matrix[x + i][y] = words[index][i];
                    // cout << "index: " << index << " i: " << i << " x: " << x << " y: " << y << endl;
                    // cout << "matrix[" << x << "][" << y + i << "] = " << words[index][i] << endl;
                    // cout << "result: " << matrix[x][y + i] << endl;
                }
            }
        }
        else
        {
            for (int i = 0; i < rows; i++){
                for(int y = 0; y < columns; y ++){
                    if(i = y){
                        words[i][y]=
                    }
                }

            }
            // cout << "diagonale" << endl;
        }
    }
}