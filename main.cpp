#include <iostream>
#include <time.h>
#include <windows.h>

using namespace std;

int ile;
clock_t start,stop;
double czas;

void sortowanie_babelkowe(int *tab, int n)
{
    for(int i=1; i<n; i++)
    {
        for(int j=n-1; j>=1; j--)
        {
            if(tab[j]<tab[j-1])
            {
                int bufor;
                bufor=tab[j-1];
                tab[j-1]=tab[j];
                tab[j]=bufor;
            }
        }
    }
}

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
        //cout<<tablica[i]<<" ";
    }


    cout<<"Sortuje teraz babelkowo. Prosze czekac!"<<endl;

    start = clock();

    delete [] tablica;



    return 0;
}
