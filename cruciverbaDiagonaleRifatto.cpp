#include <iostream>

using namespace std;

int main()
{
    int rows = 10;
    int columns = 10;
    string words[] = {"ciao", "word", "apple", "barbabietole", "oshio"};
    char empty = ' ';

    int wordsLength = sizeof(words) / sizeof(words[0]);
    int contatore = 0;
    char matrix[rows][columns];

    // fill matrix with ' '
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            matrix[i][j] = empty;
        }
    }

    for (int index = 0; index < wordsLength; index++)
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
                int y = random() % (columns - words[index].length());

                while (matrix[x][y] != empty)
                {
                    x = random() % rows;                              // row random
                    y = random() % (columns - words[index].length()); // da riga 36 a riga 43 controlliamo se ce spazio per inserire la parola nella riga
                }

                for (int i = 0; i < words[index].length(); i++) // qui controlliamo se le caselle sono occupate
                {
                    if (matrix[x][y + i] != empty) // se le caselle sono occupate (non sono vuote) scegliamo altri numeri (riga 50,51 e riazzeriamo i=0)
                    {
                        x = random() % rows; // row random
                        y = random() % (columns - words[index].length());
                        i = 0;
                    }
                } // se arriviamo qui abbiamo posizione corretta e caselle libere per inserire parola

                for (int i = 0; i < words[index].length(); i++)
                {
                    matrix[x][y + i] = words[index][i]; // qui assegniamo valori (inseriamo parola)
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
            if (words[index].length() > rows)
            {
                cout << "word " << words[index] << " is too long" << endl;
                continue;
            }
            else
            {
                contatore++;
                int x = random() % rows; // troviamo posizione in cui INIZIARE a scrivere parola
                int y = random() % (columns - words[index].length());

                while (matrix[x][y] != empty)
                {
                    x = random() % (columns - words[index].length()); // controlliamo se le posizioni sono libere per inserire parola
                    y = random() % (rows - words[index].length());

                } // (dove inseriamo primo char della parola da inserire)
                for (int i = 0; i < words[index].length(); i++)
                {
                    if (matrix[x][y] != empty)
                    {
                        x = random() % (columns - words[index].length());
                        y = random() % rows;
                    }
                }
                for (int i = 0; i < rows; i++)
                {
                    for (int j = 0; j < columns; j++)
                    {
                        if (i = j)
                        {
                            // for (int p = 0; p < words[index].length(); p++)
                            //   {
                            matrix[i + 1][j + 1] = words[index][i - 1];
                            // j++;
                            //    i++;

                            //}

                            // assegnamo valore in diagionale a scendere verso dx

                        } // devo ancora impedire di sovrascrivere parole
                    }
                }
                // cout << "diagonale" << endl;
            }
        }

        // // fill the matrix with random char if empty
        // for (int i = 0; i < rows; i++)
        // {
        //     for (int j = 0; j < columns; j++)
        //     {
        //         if (matrix[i][j] == empty)
        //         {
        //             matrix[i][j] = random() % 25 + 97;
        //         }
        //     }
        // }

        cout << "devi trovare " << contatore << " parole" << endl;

        // print
        cout << "    ";
        for (int i = 0; i < columns; i++)
        {
            if (i < 10)
            {
                cout << " " << i;
            }
            else
            {
                cout << " " << i;
            }
        }
        cout << endl;
        for (int i = 0; i < rows; i++)
        {

            if (i < 10)
            {
                cout << "  " << i << " |";
            }
            else
            {
                cout << " " << i << " |";
            }

            for (int j = 0; j < columns; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
}