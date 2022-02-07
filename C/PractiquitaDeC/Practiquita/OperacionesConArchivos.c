#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <time.h>

//Calcular area y perimetro de cada triangulo y colocarlo al lado de la medida, en el archivo
// ejemplo: base: 2, altura: 4, area = 323, perimetro = 23

int main(int argc, char const *argv[])
{
    FILE *archivo;
    FILE *temporalsito;
    archivo = fopen("Medidas_Triangulos.txt", "r+");


}
//temporalsito chiquitito XD igualito
// shi como yo xd 
// para leer de un archivo puede usar, fgets o fscanf
// toy pensando donde almacenar lo que voy a leer xd
// lo leido puede ser almacenado en otro archivo por ejemplo uno temporal
// pero pero necesito usar los datos xd 
// puedes usar los datos enseguida que los obtienes xd xdxd
// por ejemplo, recuerdas el scanf donde guardabas lo q se leia en una varriable
// pos existe el fscanf q hace lo mismo pero con archivos
// tons creo un archivo pos yeah beibi pero en comandos claro xdxd no vayas a hacerlo manualmente xd
// entendido amado profesor xd wuuuu soy amado y profesor wuuuu!!!
void obtenerDatos(FILE *archivo){
    float base, altura;  
    fscanf(archivo,"base: %f, altura: %f");
    
    // nitas declararlas...
    // nitas el archivo, luego el formato en q vas a leer ejemplo "hola %d" lo unico q va a leer es el %d xdxd y de ultimo la variable
    //pos pos, eso es el formato xd por ejemplo si en el archivo dice base: 23.45 para leerlo pones "base: %f" para q el coso sepa q ese numero lo quieres
}   // seh pera toy procesando 