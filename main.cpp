#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
using namespace std;

int infinito = 9999;

//Dado: un grafo con 5 nodos implementado en una tabla (arreglo bidimensional)
//Dado: las columnas de la tabla representan el inicio y las filas el destino
//Dado: las aristas tienen un valor de 0 si apuntan a ellas, infinito si no esta conectada y de lo contrario significa que sí hay una conexion entre los nodos

//Devuelve la distancia (o peso) de una arista dado sus dos nodos (inicio y destino)
//Nota: se sugiere NO usar recursion
int obtenerDistanciaAristaDirecta(int grafo[5][5], int inicio, int destino)
{
    return grafo[inicio][destino]; //Obteniendo los parametros dados retornamos la distancia de la arista pedida.


}

//Devuelve verdadero si existe al menos un camino para llegar desde el nodo inicio hasta el nodo destino dada una profundidad maxima de recorrido
//Nota: se sugiere usar recursion
bool existeCamino(int grafo[5][5], int inicio, int destino,int profundidad)
{
    if(inicio==destino) //Si el inicio es igual al destino eso comprueba que ya llegamos al destino
        return true;
    if(profundidad<0)
        return false;//Si la profundidad es menor que 0 ya recorrimos todo el grafo y no se encontro nada por lo cual es falso.
    for(int cont = 0; cont<5; cont++) //Este for recorre cada columna del arreglo del grafo.
    {
        if((grafo[inicio][cont]!=infinito)&&(inicio!=cont)) //Verifica que el camino sea viable (no infinito) y que el contador sea distinto al punto de inicio
        {
            if(existeCamino(grafo,cont,destino,profundidad-1))//Mandamos la informacion y verifica si el camino existe, si existe es verdadero.
                return true;
        }
    }
    return false; //Retorna falso ya que llegamos al final y no se encontro nada.
}

int main ()
{
    evaluar();

    return 1;
}
