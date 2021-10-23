//
//// *****************************
//// * Descubrimiento, otro caso *
//// *****************************
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
//#include "Version05.hpp"
//using namespace std;
//
//// prototipos de funciones
//void mostrarResultados(Coll<Estad>);
//int buscarElemento(Coll<Estad>&,int);
//int cmpEstadId(Estad,int);
//
//// programa principal
//int main()
//{
//   FILE* f = fopen("CALIFICACIONES_v05.dat","r+b");
//
//   // coleccion de contadores y acumuladores
//   Coll<Estad> collEstad = coll<Estad>();
//
//   // leemos el primer registro del archivo
//   Calificacion reg = read<Calificacion>(f);
//   while( !feof(f) )
//   {
//      // buscamos (y eventualmente agragamos) en la coll
//      int pos = buscarElemento(collEstad,reg.idEst);
//
//      // procesamos
//      Estad elm = collGetAt<Estad>(collEstad
//                                  ,pos
//                                  ,estadFromString);
//
//      elm.cont++;
//      elm.acum += reg.calif;
//      collSetAt<Estad>(collEstad,elm,pos,estadToString);
//
//      // leemos el siguiente registro
//      reg = read<Calificacion>(f);
//   }
//
//   // resultados
//   mostrarResultados(collEstad);
//
//   fclose(f);
//   return 0;
//}
//
//void mostrarResultados(Coll<Estad> c)
//{
//   collReset<Estad>(c);
//   while( collHasNext<Estad>(c) )
//   {
//      Estad e = collNext<Estad>(c,estadFromString);
//
//      double prom = e.acum/(double)e.cont;
//      cout << e.id << ": " <<prom  <<endl;
//   }
//}
//
//int buscarElemento(Coll<Estad>& collEstad,int id)
//{
//   // buscamos
//   int pos = collFind<Estad,int>(collEstad
//                                ,id
//                                ,cmpEstadId
//                                ,estadFromString);
//
//   // si no se encontro el elemento, lo agregamos
//   if( pos<0 )
//   {
//      Estad x = estad(id,0,0);
//      pos = collAdd<Estad>(collEstad,x,estadToString);
//   }
//
//   return pos;
//}
//
//int cmpEstadId(Estad e,int id)
//{
//   return e.id-id;
//}
//
//
//
//#endif
//
