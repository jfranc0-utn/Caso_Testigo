//
//// ***********************************************
//// * Coleccion de colecciones con descubrimiento *
//// ***********************************************
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
//#include "Version08.hpp"
//using namespace std;
//
//void mostrarResultados(Coll<RMaestro>);
//void procesarCalificacion(Calificacion,Coll<Asignatura>,Coll<RMaestro>&);
//Coll<Asignatura> subirAsignaturas();
//Asignatura buscarAsignatura(int id,Coll<Asignatura>);
//int buscarMaestro(Coll<RMaestro>&,string);
//int cmpAsignaturaId(Asignatura,int);
//int cmpRMaestroMaestro(RMaestro,string);
//
//
//int main()
//{
//   // coleccion de asignaturas
//   Coll<Asignatura> collAsig = subirAsignaturas();
//
//   // coleccion de maestros
//   Coll<RMaestro> collMaes = coll<RMaestro>();
//
//   FILE* f = fopen("CALIFICACIONES_v08.dat", "r+b");
//
//   // recorremos el archivo
//   Calificacion reg = read<Calificacion>(f);
//   while( !feof(f) )
//   {
//      // procesamos
//      procesarCalificacion(reg,collAsig,collMaes);
//
//      // leemos el siguiente registro
//      reg = read<Calificacion>(f);
//   }
//
//   // resultlados
//   mostrarResultados(collMaes);
//
//   fclose(f);
//   return 0;
//}
//
//void procesarCalificacion(Calificacion reg
//                         ,Coll<Asignatura> collAsig
//                         ,Coll<RMaestro>& collMaes)
//{
//   if( reg.calif<4 )
//   {
//      // obtenemos el elemento de la coleccion
//      Asignatura asig = buscarAsignatura(reg.idAsig,collAsig);
//
//      // buscamos, y si corresponde agregamos al maestro
//      string maestro = asig.maestroACargo;
//      int pos = buscarMaestro(collMaes,maestro);
//
//      // obtenemos el elemento de la coleccion
//      RMaestro rm = collGetAt<RMaestro>(
//                                     collMaes
//                                    ,pos
//                                    ,rMaestroFromString);
//
//      collAdd<int>(rm.collEst,reg.idEst,intToString);
//      collSetAt<RMaestro>(collMaes,rm,pos,rMaestroToString);
//   }
//}
//
//Asignatura buscarAsignatura(int id,Coll<Asignatura> collAsig)
//{
//   // buscamos la asignatura
//   int pos = collFind<Asignatura,int>(collAsig
//                                     ,id
//                                     ,cmpAsignaturaId
//                                     ,asignaturaFromString);
//
//
//   // obtenemos el elemento de la coleccion
//   Asignatura asig = collGetAt<Asignatura>(
//                                     collAsig
//                                    ,pos
//                                    ,asignaturaFromString);
//
//   return asig;
//}
//
//int cmpAsignaturaId(Asignatura a,int id)
//{
//   return a.idAsig-id;
//}
//
//int buscarMaestro(Coll<RMaestro>& collMaes,string maestro)
//{
//   int pos = collFind<RMaestro,string>(collMaes
//                                      ,maestro
//                                      ,cmpRMaestroMaestro
//                                      ,rMaestroFromString);
//
//   if( pos<0 )
//   {
//      RMaestro rm = rMaestro(maestro,coll<int>(','));
//      pos = collAdd<RMaestro>(collMaes,rm,rMaestroToString);
//   }
//
//   return pos;
//}
//
//
//int cmpRMaestroMaestro(RMaestro rm,string m)
//{
//   return rm.maestro<m?-1:rm.maestro>m?1:0;
//}
//
//
//void mostrarResultados(Coll<RMaestro> collMaes)
//{
//   // recorremos la coleccion de maestros
//   collReset<RMaestro>(collMaes);
//   while( collHasNext<RMaestro>(collMaes) )
//   {
//      RMaestro rm = collNext<RMaestro>(
//                                   collMaes
//                                  ,rMaestroFromString);
//
//      // mostramos el nombre del maestro
//      string nomMaes = rm.maestro;
//      cout << trim(nomMaes) << ": ";
//
//      // recorremos la coleccion de estudiantes aplazados
//
//      int i=0;
//      Coll<int> collEst = rm.collEst;
//      collReset<int>(collEst);
//      while( collHasNext<int>(collEst) )
//      {
//         int idEst = collNext<int>(collEst,stringToInt);
//
//         // mostramos los estudiantes aplazados
//         cout << idEst << ((i++<collSize<int>(collEst)-1)?",":"\n");
//      }
//   }
//}
//
//
//Coll<Asignatura> subirAsignaturas()
//{
//   Coll<Asignatura> ret = coll<Asignatura>();
//   FILE* f = fopen("ASIGNATURAS_v08.dat","r+b");
//
//   // leemos el primer registro del archivo
//   Asignatura reg = read<Asignatura>(f);
//   while( !feof(f) )
//   {
//      // lo agregamos a la coleccion
//      collAdd<Asignatura>(ret,reg,asignaturaToString);
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
//
//#endif
//
