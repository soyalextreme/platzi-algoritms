/*
 * 1- Crear pointer para saber que hay en front y rear
 * 
 * front => el primer dato
 * rear => la cola de la fila
 * 
 * 2- colocar esots valores en -1 al inicializar
 * 3- Incrementar en uno el valor de rear cada que agreguemos un 
 * elemento.
 *  4- Return el valor de fornt al quitar un elemento 
 *      e incrementar en 1 el valor de front cada vez que saquemos un valor
 * 5- Antes de agregar un elemento verificamos que hay espacio 
 * en el array
 * 6- Antes de remover un elemnento revisamos que existen elementos.
 * 7- Asegurarnos de que al remover elementos resetear nuestro front 
 * y rear a -1
 */

#include <stdio.h>
#define SIZE 5

int items[SIZE], front = -1, rear = -1;

void showQueue()
{
    printf("[");
    for (int i = 0; i <= SIZE - 1; i++)
    {
        if (i <= rear)
        {

            printf("%d | ", items[i]);
        }
        else
        {
            printf(" |");
        }
    }
    printf("]\n");
}

void enQueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Full Queue\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        items[rear] = value;
        printf("Value insterted %d\n", value);
    }
    showQueue();
}

void deQueue()
{
    if (front == -1)
    {
        printf("Empty Queue\n");
    }
    else
    {
        printf("Deleted value %d\n", items[front]);
        front++;
        for (int i = 0; i < SIZE; i++)
        {
            if (i <= rear)
            {
                items[i] = items[i + 1];
            }
            else
            {
                items[i] = 0;
            }
        }
        if (front > rear)
        {
            front = rear = -1;
        }
    }

    showQueue();
}

int main(int argc, char const *argv[])
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    enQueue(6);
    deQueue();
    enQueue(6);
    deQueue();
    deQueue();
    enQueue(122312);
    return 0;
}
