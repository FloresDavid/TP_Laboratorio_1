#ifndef FUNCIONES_H
#define FUNCIONES_H

/** \brief pide un numero y lo devuelve.
*
*   \param no posee parametros.
*
*   \return devuelve un numero entero.

*/
int pedirNumero (void);

/** \brief recibe dos numeros y develve la suma de ambos.
*
*   \param posee como parametros dos numeros de tipo entero.
*
*   \return devuelve la suma de los numeros como entero.

*/
int sumar (int, int);

/** \brief recibe dos numeros y develve la resta de ambos.
*
*   \param posee como parametros dos numeros de tipo entero.
*
*   \return devuelve la resta de los numeros como entero.

*/
int restar (int, int);

/** \brief recibe dos numeros y develve la multiplicacion de ambos.
*
*   \param posee como parametros dos numeros de tipo entero.
*
*   \return devuelve la multiplicacion de los numeros como entero.

*/
int multiplicar (int, int);

/** \brief recibe dos numeros y develve la division de ambos.
*
*   \param posee como parametros dos numeros de tipo entero.
*
*   \return devuelve la division de los numeros como float.

*/
float dividir (int, int);

/** \brief recibe un numero y develve su factorizacion.
*
*   \param posee como parametro un numero de tipo entero.
*
*   \return devuelve la factorizacion de un numero como unsigned long.

*/
unsigned long factorizar (int);

/** \brief recibe los dos numeros y los resultados de todas las operaciones, y muestra la suma, la resta, la multiplicacion y la division, y la factorizacion.
*
*   \param posee como parametros cinco numeros de tipo entero, un float y dos enteros largos.
*
*   \return no devuelve ningun dato, los muestra directamente por pantalla.

*/
void mostrarTodas(int,int,int,int,int,float,unsigned long, unsigned long);

#endif // FUNCIONES_H
