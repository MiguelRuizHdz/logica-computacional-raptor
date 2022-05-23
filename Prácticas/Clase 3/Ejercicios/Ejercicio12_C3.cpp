#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? v;
   ?? cantconos;
   ?? cantvasos;
   ?? preciocono;
   ?? total;
   ?? prod;
   ?? preciopaletahielo;
   ?? cantpaletas;
   ?? tamvaso;
   ?? i;
   ?? suma;
   ?? salir;

   salir =1;
   suma =0;
   while (!(salir==0))
   {
      raptor_prompt_variable_zzyz ="¿Qué producto deseas comprar? (1) Paleta de hielo (2) Cono (3) Nieve en Vaso";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> prod;
      if (prod==1)
      {
         preciopaletahielo =10;
         raptor_prompt_variable_zzyz ="¿Cuántas paletas de hielo deseas?";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> cantpaletas;
         total =preciopaletahielo*cantpaletas;
      }
      else
      {
         if (prod==2)
         {
            preciocono =15;
            raptor_prompt_variable_zzyz ="¿Cuántos conos deseas?";
            cout << raptor_prompt_variable_zzyz << endl;
            cin >> cantconos;
            total =preciocono*cantconos;
         }
         else
         {
            if (prod==3)
            {
               i =1;
               raptor_prompt_variable_zzyz ="¿Cuántos vasos deseas?";
               cout << raptor_prompt_variable_zzyz << endl;
               cin >> cantvasos;
               total =0;
               while (!(i>cantvasos))
               {
                  raptor_prompt_variable_zzyz ="Ingresa el tamaño el vaso (1) Chico (2) Grande";
                  cout << raptor_prompt_variable_zzyz << endl;
                  cin >> tamvaso;
                  if (tamvaso==1)
                  {
                     v =18;
                  }
                  else
                  {
                     v =25;
                  }
                  total =total+v;
                  i =i+1;
               }
            }
            else
            {
            }
         }
      }
      suma =suma+total;
      raptor_prompt_variable_zzyz ="¿Deseas realizar alguna otra compra? (1) Sí (2) No";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> salir;
   }
   cout << "El total de tu compra es de $"+suma << endl;   cout << "Gracias por comprar en Paleterías Frías" << endl;
   return 0;
}
