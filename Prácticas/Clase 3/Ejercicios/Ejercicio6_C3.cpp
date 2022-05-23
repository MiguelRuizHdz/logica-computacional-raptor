#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? dato;
   ?? n;
   ?? otro;
   ?? i;
   ?? numero;

   numero =0;
   otro =0;
   i =1;
   raptor_prompt_variable_zzyz ="¿Cuántos datos se ingresarán?";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> n;
   while (!(i>n))
   {
      raptor_prompt_variable_zzyz ="Ingresa el dato";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> dato;
      if (Is_Number(dato))
      {
         numero =numero+1;
      }
      else
      {
         otro =otro+1;
      }
      i =i+1;
   }
   cout << "La cantidad de datos ingresados por el usuario fueron de: "+n+", cantidad de variables númericas fueron: "+numero+", cantidad de otro tipo de variables fueron: "+otro << endl;
   return 0;
}
