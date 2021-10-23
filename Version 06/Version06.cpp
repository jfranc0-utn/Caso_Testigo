//#ifndef _MAIN
//#define _MAIN
//
//// ************************
//// * Actualizar registros *
//// ************************
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
//#include "Version06.hpp"
//using namespace std;
//
//// prototipos de funciones
//Coll<RAsignatura> subirAsignaturas();
//int cmpRAsigId(RAsignatura,int);
//void actualizar(Coll<RAsignatura>);
//void mostrarResultados(Coll<RAsignatura>);
//
//// programa principal
//
//int main()
//{
//   // subimos el archivo de consultas a memoria
//   Coll<RAsignatura> collAsig = subirAsignaturas();
//
//   FILE* f = fopen("CALIFICACIONES_v06.dat","r+b");
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
//
//
//   }
//
//   // mostramos el listado requerido en el punto 1
//   mostrarResultados(collAsig);
//
//   // actualizamos el archivo de consultas
//   actualizar(collAsig);
//
//   fclose(f);
//   return 0;
//}
//
//Coll<RAsignatura> subirAsignaturas()
//{
//   Coll<RAsignatura> ret = coll<RAsignatura>();
//   FILE* f = fopen("ASIGNATURAS_v06.dat","r+b");
//
//   // leemos el primer registro del archivo
//   Asignatura reg = read<Asignatura>(f);
//   while( !feof(f) )
//   {
//      // creamos un RAsignatura usando las funciones
//      // de inicializacion rAsignatura y estad
//      RAsignatura ra = rAsignatura(reg,estad(-1,0,0));
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
//void mostrarResultados(Coll<RAsignatura> c)
//{
//   // iteramos
//   collReset<RAsignatura>(c);
//   while( collHasNext<RAsignatura>(c) )
//   {
//      RAsignatura ra = collNext<RAsignatura>(
//                                    c
//                                   ,rAsignaturaFromString);
//
//      // promedios anterior y actual
//      double promAct = ra.estad.acum/(double)ra.estad.cont;
//      double promAnt = ra.asig.califProm;
//      string sNomAsig = ra.asig.nomAsig;
//      cout<<sNomAsig<<": "<<promAnt<<", "<<promAct << endl;
//   }
//}
//
//// primera version
//void actualizar(Coll<RAsignatura> collAsig)
//{
//   // "r+b" permite modificar registros y agregar al final
//   FILE* f = fopen("ASIGNATURAS_v06.dat","r+b");
//
//   Asignatura reg = read<Asignatura>(f);
//   while( !feof(f) )
//   {
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
//      double promAnt = elm.asig.califProm;
//      double promAct = elm.estad.acum/(double)elm.estad.cont;
//      double promNuevo = (promAnt+promAct)/2;
//
//      // actualizamos el registro
//      reg.califProm = promNuevo;
//
//      // grabamos
//      seek<Asignatura>(f,filePos<Asignatura>(f)-1);
//      write<Asignatura>(f,reg);
//
//      // leemos el siguiente registro
//      reg = read<Asignatura>(f);
//   }
//
//   fclose(f);
//}
//
//// segunda version
////void actualizar(Coll<RAsignatura> c)
////{
////   // "r+w" borra el archivo y lo crea vacio
////   FILE* f = fopen("ASIGNATURAS_v06.dat","w+b");
////
////   collReset<RAsignatura>(c);
////   while( collHasNext<RAsignatura>(c) )
////   {
////      RAsignatura elm = collNext<RAsignatura>(
////                                    c
////                                   ,rAsignaturaFromString);
////
////      double promAnt = elm.asig.califProm;
////      double promAct = elm.estad.acum/(double)elm.estad.cont;
////      double promNuevo = promAnt+promAct/2;
////
////      // actualizamos el registro
////      elm.asig.califProm = promNuevo;
////
////      // grabamos
////      write<Asignatura>(f,elm.asig);
////   }
////
////   fclose(f);
////}
//
//int cmpRAsigId(RAsignatura ra,int id)
//{
//   return ra.asig.idAsig-id;
//}
//
//
//
//
//#endif
//
