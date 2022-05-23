#include <iostream>
#include <string>

using namespace std;
 void Genero (
       ??_Variable gen;
       ??_Variable *resultado)
{

   if (gen=="M" || gen=="m")
   {
      resultado =", eres del genero masculino";
   }
   else
   {
      resultado =", eres del genero femenino";
   }
}
 void Edad (
       ??_Variable ed;
       ??_Variable *respuesta)
{

   if (ed>=18)
   {
      respuesta =" eres mayor de edad";
   }
   else
   {
      respuesta =" eres menor de edad";
   }
}
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? nom;
   ?? salir;
   ?? edad;
   ?? r1;
   ?? g;

   salir =1;
   while (!(salir==0))
   {
      raptor_prompt_variable_zzyz ="Hola, ingresa tu nombre";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> nom;
      raptor_prompt_variable_zzyz =nom+" , ingresa tu edad";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> edad;
      while (!(Is_Number(edad) && edad>0))
      {
         raptor_prompt_variable_zzyz =nom+" , el valor ingresado no es correcto, ingresa nuevamente tu edad.";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> edad;
      }
      raptor_prompt_variable_zzyz =nom+" , ingresa la inicial de tu género";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> g;
      while (!(g=="M" || g=="m" || g=="F" || g=="f"))
      {
         raptor_prompt_variable_zzyz =nom+" , solo se acepta una letra, ingresa la inicial de tu género";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> g;
      }
      Genero(g,r1);
      Edad(edad,r2);
      cout << "El usuario: "+nom+" "+r1+"  y "+" r2" << endl;      raptor_prompt_variable_zzyz ="¿Deseas salir del programa? (1) SI (0) NO";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> salir;
      while (!(salir==1 || salir==0))
      {
         raptor_prompt_variable_zzyz ="Error, dato ingresado NO VALIDO. ¿Deseas salir del programa? (1) SI (0) NO";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> salir;
      }
   }
   cout << "Gracias por utilizar este diagrama" << endl;
   return 0;
}
