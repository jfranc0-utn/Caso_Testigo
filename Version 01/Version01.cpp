 //
//// ********************
//// * Corte de control *
//// ********************
//
//#ifndef _MAIN
//#define _MAIN
//
//#include <iostream>
//#include "biblioteca/funciones/strings.hpp"
//#include "biblioteca/funciones/tokens.hpp"
//#include "biblioteca/funciones/files.hpp"
//#include "biblioteca/tads/Array.hpp"
//#include "biblioteca/tads/Map.hpp"
//#include "biblioteca/tads/List.hpp"
//#include "biblioteca/tads/Stack.hpp"
//#include "biblioteca/tads/Queue.hpp"
//#include "biblioteca/tads/Coll.hpp"
//#include "Version01.hpp"
//using namespace std;
//
//int main()
//{
//   // abrimos el archivo
//   FILE* f = fopen("CALIFICACIONES_v01.dat","r+b");
//
//   // leemos el primer registro del archivo
//   Calificacion reg = read<Calificacion>(f);
//
//   // controlamos que no llegue el fin del archivo
//   while( !feof(f) )
//   {
//      // contador y acumulador para calcular el promedio
//      int cont = 0;
//      int acum = 0;
//
//      // guardamos la asignatura anterior
//      int idAsigAnt = reg.idAsig;
//      while( !feof(f) && idAsigAnt == reg.idAsig )
//      {
//         // procesamos
//         cont++;
//         acum += reg.calif;
//
//         // leemos el siguiente registro del archivo
//         reg = read<Calificacion>(f);
//      }
//
//      // mostramos la calificacion promedio obtenida
//      // para la asignatura cuyos registros acabamos
//      // de procesar
//      double prom = acum/(double)cont;
//      cout << idAsigAnt << ": " << prom << endl;
//   }
//
//   // cerramos el archivo
//   fclose(f);
//   return 0;
//}
//
//
//#endif
//
