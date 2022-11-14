#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int ile;

int main()
{
    cout << "Porownanie czasow sortowania v.1" << endl;

    cout <<"Ile losowych liczb w tablicy: ";
    cin>>ile;

    //dynamiczna alokacja tablicy
    int *tablica;
    tablica=new int[ile];

    //inicjowanie generatora
    srand(time(NULL));

    //wczytywanie losowych liczb do tablicy
    for(int i=0; i<ile; i++)
    {
        tablica[i] = rand()%100000+1;
        cout<<tablica[i]<<" ";
    }




    delete [] tablica;



    return 0;
}
