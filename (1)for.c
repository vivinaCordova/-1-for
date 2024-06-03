//1 suma de los digitos de un numero 
#include <stdio.h>
int main() {
    //la variable n, almacena el valor, y la variable suma parte desde 0
    // con form avance la variable sum almacera ese valor
    int n=12567, sum=0;
    //imprime en pantalla, para que el usuario pueda visualizarlo
    printf("la suma de %d\n", n);
    //a for se lo condiciona de forma  que n nosea igual a 0
    ///la variable sum, almacenara el valor de la suma por cada vuelta 
    //la variable suma el residua de n dividido entre 10
    //n es dividido igual a 10
    for (;n != 0;) {
        sum += n % 10;
        n /= 10;
    }
    //se imprime en pantallas la suma de todo los digitos
    printf("%d\n", sum);
    return 0;
}