#include <stdio.h>
#include <string.h>
#include "funciones.h"

int main(int argc, char const *argv[])
{
    char productos [10][50];
    float precio [10]; 
    int numeroProductos; 
    char productosBuscar[50]; 
    int respuesta; 

    //Ingreso de datos
    printf("Ingrese el numero de productos (maximo 10): ");
    scanf("%d", &numeroProductos);

    if (numeroProductos > 1 && numeroProductos < 10)
    {
        LeernombresProductos(productos, precio,numeroProductos); 
        float total = CalcularprecioTotal(precio,numeroProductos);
        printf("\nEl precio total de los prodcutos ingresados --> %.2f",total); 
        float promedio = CalcularpromedioProductos(precio,numeroProductos); 
        printf("\nEl promedio de la compra total de los productos ingresados --> %.2f",promedio); 
        int masCaro = ProductomasCaro(precio,numeroProductos); 
        printf("\nEl producto mas Caro es: %s con un precio de %.2f", productos[masCaro], precio[masCaro]); 
        int masBarato = ProductomasBarato(precio,numeroProductos);
        printf("\nEl producto mas Barato es: %s con un precio de %.2f", productos[masBarato], precio[masBarato]); 
        ImprimirnombreProducto(productos, precio, numeroProductos); 
        do
        {
            //Aqui el usuario va a escribir el producto que quiere saber y su precio
            printf("\nIngrese el nombre del producto que desea buscar: ");
            scanf("%s", productosBuscar);
            Buscarproducto(productos,precio,numeroProductos,productosBuscar);
            printf("\nQuieres seguir buscando tus productos (1. Si) (2. No)? --> "); 
            scanf("%d", &respuesta); 
        } while (respuesta == 1);
    }
    else
    {
        printf("\nEl numero de productos que ingreso no esta en el rango permitido para sus resultados");
    }
    
    
    return 0; 
    
}
