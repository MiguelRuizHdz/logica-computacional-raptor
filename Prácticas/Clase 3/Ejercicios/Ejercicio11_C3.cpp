#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? nprod1;
   ?? nprod;
   ?? vendedor3;
   ?? total;
   ?? nprod2;
   ?? nprod3;
   ?? v;
   ?? vendedor1;
   ?? vendedor2;
   ?? i;
   ?? vprod;
   ?? salir;

   i =1;
   salir =1;
   total =0;
   vendedor1 =0;
   vendedor2 =0;
   vendedor3 =0;
   while (!(salir==0))
   {
      raptor_prompt_variable_zzyz ="Ingresa el numero de vendedor";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> v;
      while (!(v>=1 && v<=3))
      {
         raptor_prompt_variable_zzyz ="Error, ingrese un número entre 1 y 3";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> v;
      }
      if (v==1)
      {
         raptor_prompt_variable_zzyz ="Ingresa el total de productos vendidos";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> nprod1;
         while (!(i<nprod))
         {
            raptor_prompt_variable_zzyz ="Ingresa el valor del producto "+i;
            cout << raptor_prompt_variable_zzyz << endl;
            cin >> vprod;
            vendedor1 =vendedor1+vprod;
         }
      }
      else
      {
         if (v==2)
         {
            raptor_prompt_variable_zzyz ="Ingresa el total de productos vendidos";
            cout << raptor_prompt_variable_zzyz << endl;
            cin >> nprod2;
            while (!(i<nprod))
            {
               raptor_prompt_variable_zzyz ="Ingresa el valor del producto "+i;
               cout << raptor_prompt_variable_zzyz << endl;
               cin >> vprod;
               vendedor2 =vendedor2+vprod;
            }
         }
         else
         {
            raptor_prompt_variable_zzyz ="Ingresa el total de productos vendidos";
            cout << raptor_prompt_variable_zzyz << endl;
            cin >> nprod3;
            while (!(i<nprod))
            {
               raptor_prompt_variable_zzyz ="Ingresa el valor del producto "+i;
               cout << raptor_prompt_variable_zzyz << endl;
               cin >> vprod;
               vendedor3 =vendedor3+vprod;
            }
         }
      }
      i =1;
      raptor_prompt_variable_zzyz ="¿Deseas agregar otro vendedor? (1) SI (2) NO";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> salir;
      while (!(salir==0 || salir==1))
      {
         raptor_prompt_variable_zzyz ="Error, ¿Deseas agregar otro vendedor? (1) SI (2) NO";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> salir;
      }
   }
   cout << "El total de productos vendidos por el vendedor 1: "+nprod1 << endl;   cout << "El total de venta del vendedor 1 es: $"+vendedor1 << endl;   cout << "El total de productos vendidos por el vendedor 2: "+nprod2 << endl;   cout << "El total de venta del vendedor 2 es: $"+vendedor2 << endl;   cout << "El total de productos vendidos por el vendedor 3: "+nprod3 << endl;   cout << "El total de venta del vendedor 3 es: $"+vendedor3 << endl;
   return 0;
}
