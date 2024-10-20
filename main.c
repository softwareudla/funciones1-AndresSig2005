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

    if (numeroProductos > 1 && numeroProductos < 10)
    {
        LeernombresProductos(productos, precio,numeroProductos); 
        float total = CalcularprecioTotal(precio,numeroProductos);
        printf("\nEl precio total de los prodcutos ingresados --> %.2f",total); 
        float promedio = CalcularpromedioProductos(precio,numeroProductos); 
        printf("\nEl promedio de la compra total de los productos ingresados --> %.2f",promedio); 
        int masCaro = ProductomasCaro(precio, numeroProductos); 
        printf("\nEl producto mas Caro es --> %s",productos[masCaro]); 
        int masBarato = ProductomasBarato(precio,numeroProductos); 
        printf("\nEl producto mas Barato es --> %s", productos[masBarato]); 
        ImprimirnombreProducto(productos, precio, numeroProductos); 
        printf("\nIngrese el nombre del producto que desea bsucar: "); 
        scanf("%s", productosBuscar); 
        Buscarproducto(productos,precio,numeroProductos,productosBuscar); 
    }
    else
    {
        printf("\nEl numero de productos que ingreso no esta en el rango permitido para sus resultados");
    }
    
    
    return 0; 
    
}
