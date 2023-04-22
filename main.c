#include <stdio.h>

/*
  EJERCICIO 15 : Defina una función que reciba dos cadenas de caracteres y calcule la unión entre ambas, devolviéndola en una nueva cadena de caracteres.
 */

char* unionStrings(char *str1, char *str2);

char* unionStrings(char *str1, char *str2) {
    int len1 = 0, len2 = 0, i = 0, j = 0;
    while (str1[len1] != '\0') { // calcular la longitud de la primera cadena
        len1++;
    }
    while (str2[len2] != '\0') { // calcular la longitud de la segunda cadena
        len2++;
    }
    char *newStr = malloc((len1 + len2 + 1) * sizeof(char)); // reservar memoria para la nueva cadena
    if (newStr == NULL) { // comprobar si se pudo reservar memoria
        return NULL;
    }
    for (i = 0; i < len1; i++) { // copiar la primera cadena en la nueva cadena
        newStr[i] = str1[i];
    }
    for (j = 0; j < len2; j++) { // concatenar la segunda cadena en la nueva cadena
        newStr[i + j] = str2[j];
    }
    newStr[i + j] = '\0'; // agregar el carácter nulo al final de la nueva cadena
    return newStr;
}

int main() {
    char str1[] = "hola";
    char str2[] = "mundo";
    char *newStr = unionStrings(str1, str2);
    if (newStr != NULL) {
        printf("La primera cadena es: %s\n", str1);
        printf("La segunda cadena es: %s\n", str2);
        printf("La nueva cadena es: %s\n", newStr);
        free(newStr); // liberar la memoria reservada
    } else {
        printf("Error al reservar memoria\n");
    }
    return 0;
}
