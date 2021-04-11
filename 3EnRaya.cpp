// Alumno: Messa Mandujano, Fabricio Arián

#include <iostream>

void eleccion(char option){

    do //usé DoWhile para generar un bucle
    {
        std::cout << "Elija si quiere ser 'X' o 'O': ";
        std::cin >> option;
    } while (option != 'X' && option != 'O'); //El bucle no se detrendrá hasta que coloque una X o una O

    if (option == 'X')
    {
        std::cout << "Su eleccion fue ser " << option << "\n";
    }
    if (option == 'O')
    {
        std::cout << "Su eleccion fue ser " << option << "\n";
    }
 
}
/*
void tablero(){

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < 5 && i % 2 == 1)
            {
                std::cout << "___";
            }
            else
            {
                std::cout << "   ";
            }
            if (j < 2)
            {
                std::cout << "|";
            }   
        }
    std::cout << "\n";
    }
    
}
*/

void matriz(){   //Profe hasta éste punto no pude hacerlo de otra manera, si nota una funcion arriba comentada, es porque quería hacer un funcion para imprimir el tablero, pero 
                // no podía rellenar los espacios :c
    int matriz[6][3]; // la matriz tiene que ser 6 x 3, más abajo explico el porque 
    char option;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << "Numeros["<< i <<"]["<< j <<"]: "; //aqui pedimos que coloque los números
            std::cin >> matriz[i][j];  // profe, por favor coloque en este orden :c --> 1, 2, 3, 1, 2, 3, 4, 5, 6, 4, 5, 6, 7, 8 , 9, 7, 8, 9 ya le explicaré abajo por que :c
        }
    }
    
    for (int i = 0; i < 5; i++) // en un inicio el tablero era de 3x3, pero los "___" y los "|" cuentan como espacio, entes tendría que reemplazar un palito para poner una
    {                           // X o un O, entoces si lo hago 5x3 no tendrá que reemplazar un palito si no un espacio vacío
        for (int j = 0; j < 3; j++)
        {
            if (i < 5 && i % 2 == 1) // aqui coloque una condición para ver si es impar ya que las lineas del medio empieza en una posicón impar
            {
                std::cout << "___";
            }
            else
            {
                std::cout << " " << matriz[i][j] << " "; // aquí coloco la posicón i y j de la matriz anterior, el problema es que tengo que poner matriz[6][3] por que la cochinada 
            }                                            // cuenta los palitos como posición, estaba intentado hacer para que solo rellena en espacios vacios pero no pude :c
            if (j < 2)
            {
                std::cout << "|";  
            }            
        }
    std::cout << "\n";
    }   

}

//La única función que me faltaba era la colocar la ficha que elijió el usuario, pero se me complicó :c

int main(){
  
    char option;

    eleccion(option);
    //tablero();
    matriz();

    system("pause");
    return 0;

}