//
//// ******************************************
//// * Corte de control con salida buferizada *
//// ******************************************
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
//#include "Version02.hpp"
//using namespace std;
//
//void mostrarEstudiantesAprobados(int,Coll<Calificacion>);
//int cmpCalificacion(Calificacion,Calificacion);
//
//int main()
//{
//   // abrimos el archivo
//   FILE* f = fopen("CALIFICACIONES_v02.dat","r+b");
//
//   // leemos el primer registro del archivo
//   Calificacion reg = read<Calificacion>(f);
//
//   // controlamos que no llegue el fin del archivo
//   while( !feof(f) )
//   {
//      // SECCION DE INICIALIZACION
//      Coll<Calificacion> buff = coll<Calificacion>();
//
//      // guardamos la asignatura anterior
//      int idAsigAnt = reg.idAsig;
//      while( !feof(f) && idAsigAnt == reg.idAsig )
//      {
//         // SECCION DE PROCESAMIENTO
//         if( reg.calif>=4 )
//         {
//            collAdd<Calificacion>(buff
//                                  ,reg
//                                  ,calificacionToString);
//         }
//
//         // leemos el siguiente registro del archivo
//         reg = read<Calificacion>(f);
//      }
//
//      // SECCION DE RESULTADOS
//      mostrarEstudiantesAprobados(idAsigAnt,buff);
//   }
//
//   // cerramos el archivo
//   fclose(f);
//   return 0;
//}
//
//
//void mostrarEstudiantesAprobados(int idAsig
//                                ,Coll<Calificacion> buff)
//{
//   // mostramos la asignatura
//   cout << "Asignatura: " << idAsig << endl;
//
//
//   // ordenamos la coleccion
//   collSort<Calificacion>(buff
//                         ,cmpCalificacion
//                         ,calificacionFromString
//                         ,calificacionToString);
//
//   // la iteramos
//   collReset<Calificacion>(buff);
//   while( collHasNext<Calificacion>(buff) )
//   {
//      Calificacion elm = collNext<Calificacion>(
//                                   buff
//                                  ,calificacionFromString);
//
//      // mostramos los estudiantes aprobados
//      cout << elm.idEst << ", " << elm.calif << endl;
//   }
//}
//
//int cmpCalificacion(Calificacion a,Calificacion b)
//{
//   return b.calif-a.calif;
//}
//
//
//
//
//
//#endif
//
