//
//// ***********************************
//// * Archivo de consultas en memoria *
//// ***********************************
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
//#include "Version04.hpp"
//using namespace std;
//
//int cmpRAsigId(RAsignatura,int);
//
//
//Coll<RAsignatura> subirAsignaturas()
//{
//   // coleccion que contendra todas las asignaturas
//   Coll<RAsignatura> ret = coll<RAsignatura>();
//
//   FILE* f = fopen("ASIGNATURAS_v04.dat","r+b");
//
//   // leemos el primer registro del archivo
//   Asignatura reg = read<Asignatura>(f);
//
//
//   while( !feof(f) )
//   {
//      // creamos un RAsignatura con las funciones de inic
//      RAsignatura ra = rAsignatura(reg,estad(0,0));
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
//
//void mostrarResultados(
//             Coll<RAsignatura> c
//            ,int cmpRAsignatura(RAsignatura,RAsignatura))
//{
//   // ordenamos la coleccion
//   collSort<RAsignatura>(c
//                        ,cmpRAsignatura
//                        ,rAsignaturaFromString
//                        ,rAsignaturaToString);
//
//
//   // iteramos
//   collReset<RAsignatura>(c);
//   while( collHasNext<RAsignatura>(c) )
//   {
//      RAsignatura ra = collNext<RAsignatura>(
//                                    c
//                                   ,rAsignaturaFromString);
//
//      // calculamos el promedio y mostramos
//      double prom = ra.estad.acum/(double)ra.estad.cont;
//      string sNomAsig = ra.asig.nomAsig;
//      cout << sNomAsig << ": " << prom << endl;
//   }
//
//   cout << "---" << endl;
//}
//
//
//// funcion de comparacion, compara alfabeticamente
//int cmpRAsigAlfabetico(RAsignatura a,RAsignatura b)
//{
//   string sA = a.asig.nomAsig;
//   string sB = b.asig.nomAsig;
//   return sA<sB?-1:sA>sB?1:0;
//}
//
//// funcion de comparacion, compara por promedio descendente
//int cmpRAsigPromedio(RAsignatura a,RAsignatura b)
//{
//   double pA = a.estad.acum/(double)a.estad.cont;
//   double pB = b.estad.acum/(double)b.estad.cont;
//   return pA>pB?-1:pA<pB?1:0;
//}
//
//
//int main()
//{
//   // subimos el archivo de consultas a memoria
//   Coll<RAsignatura> collAsig = subirAsignaturas();
//
//   FILE* f = fopen("CALIFICACIONES_v04.dat","r+b");
//
//   // leemos el primer registro del archivo
//   Calificacion reg = read<Calificacion>(f);
//   while( !feof(f) )
//   {
//      // buscamos la asignatura en la coleccion
//      int pos = collFind<RAsignatura,int>(
//                                    collAsig
//                                   ,reg.idAsig
//                                   ,cmpRAsigId
//                                   ,rAsignaturaFromString);
//
//      // obtenemos el elemento encontrado en la posicion pos
//      RAsignatura elm = collGetAt<RAsignatura>(
//                                    collAsig
//                                   ,pos
//                                   ,rAsignaturaFromString);
//
//      // procesamos
//      elm.estad.cont++;
//      elm.estad.acum += reg.calif;
//
//      // aplicamos los cambios en la coleccion
//      collSetAt<RAsignatura>(collAsig
//                            ,elm
//                            ,pos
//                            ,rAsignaturaToString);
//
//      // leemos el siguiente registro
//      reg = read<Calificacion>(f);
//   }
//
//   // mostramos el listado 1 (ordenado alfabeticamente)
//   mostrarResultados(collAsig,cmpRAsigAlfabetico);
//
//
//   // mostramos el listado 2 (ordenado por prom descend)
//   mostrarResultados(collAsig,cmpRAsigPromedio);
//
//   fclose(f);
//   return 0;
//}
//
//int cmpRAsigId(RAsignatura ra,int id)
//{
//   return ra.asig.idAsig-id;
//}
//
//
//#endif
