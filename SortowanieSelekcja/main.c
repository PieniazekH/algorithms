#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[] = {5,4,10,0,4,1,7,5,3,9,3}; //utworzenie tablicy zgodnie z wytycznymi zadania
    selectionSort(tablica);                   // wywolanie funkcji
    for(int x=0; x<11; x++){                  // petla wyœwietlajaca tablice posortowana za pomoca funkcji
        printf("%d ", tablica[x]);
    }
    return 0;
}
void selectionSort(int tablica[]){             // inicjalizacja funkcji która nic nie zwraca(void), przyjmujaca jako parametr tablice.
    for(int i=0; i<10 ; i++){                   // petla która przechodzi po kazdym elemencie tablicy, oprócz ostatniego poniewa¿ on juz automatycznie jest posortowany
        int minimum=i;                           // poczatkowo minimum jest równe pierwszej wartosci tablicy
        for(int j=i+1; j<11; j++){                // druga petla przechodzaca po kazdym elemencie tablicy zaczynajac od jednej pozycji dalej od minimum
            if(tablica[minimum]>tablica[j]){       // jezeli poprzednia wartosc jest wieksza niz kolejna to...
                minimum=j;                          //... najmniejsza wartoscia staje sie ta kolejna liczba
            }
        }
       int tymczasowa=tablica[i];              //tymczasowa wartosc tablicy[i] jest przechowywana w zmiennej o nazwie tymczasowa
        tablica[i]=tablica[minimum];             // nastepnie nastepuje zamiana liczb tak że ta mniejsza wędruje bliżej lewej strony
        tablica[minimum]=tymczasowa;             // wartosc tablicy w minimum jest przypisywana do wartosci tymczasowej
    }
}
