#include <stdio.h>
#include "player.h"

void juegoNuevo() {

  printf("Laberinto\n");

  while (!isGameOver()) {
    printf("\n");
    

    printf("\n");
    //printf("Movimientos: %d\n", moveCount);
    printf("Elige una dirección (WASD): ");
    char direction;
    scanf(" %c", &direction);

    movimientojugador(direction);
  }
}

void mostrarCreditos() {
  printf("Creditos por John Morales, \n");
}

int main() {
  int opcion;

  do {
    printf("Laberinto\n");
    printf("1. Jugar\n");
    printf("2. Creditos\n");
    printf("3. Salir\n");
    printf("Selecciona una opción: ");
    scanf("%d", &opcion);

    switch (opcion) {
      case 1:
        juegoNuevo();
        break;
      case 2:
        mostrarCreditos();
        break;
      case 3:
        printf("Saliendo\n");
        break;
      default:
        printf("Opción inválida. Inténtalo de nuevo.\n");
    }
  } while (opcion != 3);

  return 0;
}