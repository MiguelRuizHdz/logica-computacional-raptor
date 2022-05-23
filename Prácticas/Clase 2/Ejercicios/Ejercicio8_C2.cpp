#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? compra;
   ?? total;
   ?? color;

   raptor_prompt_variable_zzyz ="Ingresa el total de la compra";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> compra;
   raptor_prompt_variable_zzyz ="Que color de ficha te toco: (1) Azul (2) Blanco (3) Rojo";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> color;
   if (color==1)
   {
      total =compra*0.7;
      cout << "Felicidades obtuviste un mensaje del 30% de descuento" << endl;   }
   else
   {
      if (color==2)
      {
         total =compra*0.65;
         cout << "Felicidades obtuviste un mensaje del 35% de descuento" << endl;      }
      else
      {
         if (color==3)
         {
            total =compra*0.75;
            cout << "Felicidades obtuviste un mensaje del 25% de descuento" << endl;         }
         else
         {
            total =0;
            cout << "El color de que eligió no es válido, por lo tanto, no se puede completar la compra" << endl;         }
      }
   }
   cout << "El total de la compra es: $"+total << endl;
   return 0;
}
