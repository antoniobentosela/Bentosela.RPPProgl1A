#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;

}ePais;


void actualizarMuertos(ePais* pais, int muertosDia);
void quitarVocales(char palabra[]);
void ordenarCaracteres(char palabra[]);

int main()
{
    int muertosDia = 80;
    char palabra[20] = "antonio";
    char palabra2[20] = "antonio";
    ePais pais;

    pais.muertos = 0;

    actualizarMuertos(&pais, muertosDia);

    printf("%d\n", pais.muertos);

    quitarVocales(palabra);

    printf("%s", palabra);

    ordenarCaracteres(palabra2);

    printf("\n%s\n", palabra2);


    return 0;
}

void actualizarMuertos(ePais* pais, int muertosDia){


    pais->muertos = muertosDia + pais->muertos;

}


void quitarVocales(char palabra[])
{

   for(int i = 0; i < strlen(palabra); i++)
    {

        if(palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u')
        {

            palabra[i] = ' ';

        }

    }

}

void ordenarCaracteres(char palabra[]){

    char aux;

    for(int i = 0; i < strlen(palabra) - 1; i++){

     for(int j = i + 1; j < strlen(palabra); j++){

        if(palabra[i] > palabra[j]){     //Esto ordena de menor a mayor, si quiero hacer de mayor a menor, cambio el >.

            aux = palabra[j];
            palabra[j] = palabra[i];
            palabra[i] = aux;

        }

     }

   }

}
