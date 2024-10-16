#include <stdio.h>
#include <string.h>
#include "funciones.h"

void LeernombresProductos(char productos [10][50], float precio[10], int numeroProductos){
    for (int i = 0; i < numeroProductos; i++)
    {
        printf("Ingrese el nombre del producto numero %d:", i+1);
        scanf("%s",&productos[i]);
        printf("Ingrese el precio del producto %d: ",i+1);
        scanf("%f",&precio[i]);
    }
}

float CalcularprecioTotal(float precio [10], int numeroProductos){
    float total = 0; 
    for (int i = 0; i < numeroProductos; i++)
    {
        total +=precio[i]; 
    }
    return total; 
}

float CalcularpromedioProductos(float precio[10], int numeroProductos){
    float promedio = 0; 
    float suma = 0; 
    for (int i = 0; i < numeroProductos; i++)
    {
        suma+= precio[i]; 
    }
    promedio = suma / numeroProductos; 
    return promedio; 
}

int ProductomasCaro(float precio[10], int numeroProductos){
    int masCaro = 0; 
    for (int i = 0; i < numeroProductos; i++)
    { 
        if (precio[i] > precio[masCaro])
        {
            masCaro = i;  
        }
    }
    return masCaro; 
}

int ProductomasBarato(float precio[10], int numeroProductos){
    int masBarato = 0; 
    for (int i = 0; i < numeroProductos; i++)
    { 
        if (precio[i] < precio[masBarato])
        {
            masBarato = i;  
        }
    }
    return masBarato; 
}

void ImprimirnombreProducto(char productos [10][50], float precio [10], int numeroProductos){
    for (int i = 0; i < numeroProductos; i++)
    {
        printf("\nEl nombre del producto %d --> %s ", i+1, productos[i]); 
        printf("\nEl precio del producto es --> %.2f ", precio[i]); 
    }
}
void Buscarproducto(char productos [10][50], float precio [10], int numeroProductos, char productosBuscar [50]){
    int validar = 0; 
    for (int i = 0; i < numeroProductos; i++)
    {
        if (strcmp(productos[i],productosBuscar)==0)
        {
            printf("El precio del producto %s es: %.2f\n",productosBuscar,precio[i]); 
            validar=1; 
        }
        
    }
    if (validar == 0)
    {
        printf("\nNo existe el producto Buscado"); 
    }
    
}