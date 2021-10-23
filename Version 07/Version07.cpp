//
//// ****************************
//// * Coleccion de colecciones *
//// ****************************
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
//#include "Version07.hpp"
//using namespace std;
//
//
//Coll<RAsignatura> subirAsignaturas();
//void procesarCalificacion(Calificacion,Coll<RAsignatura>&);
//void mostrarResultados(Coll<RAsignatura>);
//int cmpRAsignaturaId(RAsignatura,int);
//
//int main()
//{
//   // coleccion de asignaturas
//   Coll<RAsignatura> collAsig = subirAsignaturas();
//
//   FILE* f = fopen("CALIFICACIONES_v07.dat", "r+b");
//
//   // recorremos el archivo
//   Calificacion reg = read<Calificacion>(f);
//   while( !feof(f) )
//   {
//      // procesamos el registro leido
//      procesarCalificacion(reg,collAsig);
//
//      reg = read<Calificacion>(f);
//   }
//
//   // mostramos los resultados
//   mostrarResultados(collAsig);
//
//   fclose(f);
//   return 0;
//}
//
//void procesarCalificacion(Calificacion reg
//                         ,Coll<RAsignatura>& collAsig)
//{
//   if( reg.calif<4 )
//   {
//      int pos = collFind<RAsignatura,int>(
//                                    collAsig
//                                   ,reg.idAsig
//                                   ,cmpRAsignaturaId
//                                   ,rAsignaturaFromString);
//
//      // obtenemos el elemento encontrado en la posicion pos
//      RAsignatura elm = collGetAt<RAsignatura>(
//                                    collAsig
//                                   ,pos
//                                   ,rAsignaturaFromString);
//
//      // agregamos el estudiante a la coleccion
//      collAdd<int>(elm.collEst,reg.idEst,intToString);
//
//      // actualizamos la colección de asignaturas
//      collSetAt<RAsignatura>(collAsig
//                            ,elm
//                            ,pos
//                            ,rAsignaturaToString);
//   }
//}
//
//int cmpRAsignaturaId(RAsignatura ra,int id)
//{
//   return ra.asig.idAsig-id;
//}
//
//
//void mostrarResultados(Coll<RAsignatura> collAsig)
//{
//   // recorremos la coleccion de asignaturas
//   collReset<RAsignatura>(collAsig);
//   while( collHasNext<RAsignatura>(collAsig) )
//   {
//      RAsignatura ra = collNext<RAsignatura>(
//                                   collAsig
//                                  ,rAsignaturaFromString);
//
//      // mostramos la asignatura
//      string nomAsig = ra.asig.nomAsig;
//      cout << nomAsig << ": ";
//
//      // recorremos la coleccion de estudiantes aplazados
//      Coll<int> collEst = ra.collEst;
//      collReset<int>(collEst);
//
//      int i=0;
//      while( collHasNext<int>(collEst) )
//      {
//         int idEst = collNext<int>(collEst,stringToInt);
//
//         // mostramos los estudiantes aplazados
//         cout << idEst << ((i++<collSize<int>(collEst)-1)?",":"\n");
//      }
//
//   }
//}
//
//Coll<RAsignatura> subirAsignaturas()
//{
//   Coll<RAsignatura> ret = coll<RAsignatura>();
//   FILE* f = fopen("ASIGNATURAS_v07.dat","r+b");
//
//   // leemos el primer registro del archivo
//   Asignatura reg = read<Asignatura>(f);
//   while( !feof(f) )
//   {
//      // creamos un RAsignatura
//      RAsignatura ra = rAsignatura(reg,coll<int>(','));
//
//      // lo agregamos a la coleccion
//      collAdd<RAsignatura>(ret,ra,rAsignaturaToString);
//
//      // leemos el siguiente registro
//      reg = read<Asignatura>(f);
//   }
//
//   fclose(f);
//   return ret;
//}
//
//
//#endif
//
