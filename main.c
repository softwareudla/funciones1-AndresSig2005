#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main(int argc, char const *argv[])
{
    char productos [10][50];
    float precio [10]; 
    int numeroProductos; 
    char productosBuscar[50]; 

    //Ingreso de datos
    printf("Ingrese el numero de productos (maximo 10): ");
    scanf("%d", &numeroProductos);

    LeernombresProductos(productos,precio,numeroProductos); 

    //Procesos 
    //Calcular el precio total de los productos
    float total = CalcularprecioTotal(precio,numeroProductos); 
    printf("\nEl precio total de los productos son --> %.2f",total);

    //Calcular el promedio de los productos
    float promedio = CalcularpromedioProductos(precio,numeroProductos); 
    printf("\nEl precio promedio de todos los productos es --> %.2f",promedio); 

    //Ver el producto mas Caro y Barato
    int masCaro = ProductomasCaro(precio,numeroProductos); 
    printf("\nEl producto mas Caro es --> %s", productos[masCaro]); 

    int masBarato = ProductomasBarato(precio,numeroProductos);
    printf("\nEl producto mas Barato es --> %s", productos[masBarato]); 

    //En esta parte el usuario va a poder ver el producto que es y su precio automoticamente 
    ImprimirnombreProducto(productos, precio, numeroProductos); 
    
    //Aqui el usuario va a escribir el producto que quiere saber y su precio
    printf("\nIngrese el nombre del producto que desea buscar: ");
    scanf("%s", productosBuscar);
    Buscarproducto(productos,precio,numeroProductos,productosBuscar);

    
    return 0; 
    
}
