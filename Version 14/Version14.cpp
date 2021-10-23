//
//// *********************************
//// * Indexacion indirecta multiple *
//// *********************************
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
//#include "Version14.hpp"
//using namespace std;
//
//int cmpIdx(Idx,Idx);
//int descubrirEnIdx(int,Coll<Idx>&);
//void mostrarListadoPunto2(Coll<Idx>,FILE*);
//void mostrarListadoPunto1(Coll<Idx>,FILE*);
//int cmpIdxId(Idx,int);
//
//int main()
//{
//   // indice
//   Coll<Idx> cIdx = coll<Idx>();
//
//   FILE* f = fopen("PADRON_v14.dat","r+b");
//
//   Padron r = read<Padron>(f);
//   while( !feof(f) )
//   {
//      // buscamos por idEst y (si corresponde) agregamos
//      int pos = descubrirEnIdx(r.idEst,cIdx);
//      Idx x = collGetAt<Idx>(cIdx,pos,idxFromString);
//
//      // agregamos la posicion del archivo a la coleccion
//      int posArch = filePos<Padron>(f)-1;
//      collAdd<int>(x.collPos,posArch,intToString);
//      collSetAt<Idx>(cIdx,x,pos,idxToString);
//
//      r = read<Padron>(f);
//   }
//
//   // ordenamos el indice
//   collSort<Idx>(cIdx,cmpIdx,idxFromString,idxToString);
//
//   // resultados
//   mostrarListadoPunto1(cIdx,f);
//   mostrarListadoPunto2(cIdx,f);
//
//   fclose(f);
//   return 0;
//}
//
//
//int cmpIdx(Idx a,Idx b)
//{
//   return a.idEst-b.idEst;
//}
//
//int descubrirEnIdx(int idEst,Coll<Idx>& cIdx)
//{
//   int pos = collFind<Idx,int>(cIdx
//                              ,idEst
//                              ,cmpIdxId
//                              ,idxFromString);
//   if( pos<0 )
//   {
//      Idx x = idx(idEst,coll<int>(','));
//      pos = collAdd<Idx>(cIdx,x,idxToString);
//   }
//
//   return pos;
//}
//
//int cmpIdxId(Idx x,int id){return x.idEst-id;}
//
//void mostrarListadoPunto1(Coll<Idx> cIdx,FILE* f)
//{
//   cout << "--ESTUDIANTES EMPADRONADOS--" << endl;
//
//   // iteramos la coleccion
//   collReset<Idx>(cIdx);
//   while( collHasNext<Idx>(cIdx) )
//   {
//      Idx x = collNext<Idx>(cIdx,idxFromString);
//
//      // verificamos que no haya idEst duplicados
//      if( collSize<int>(x.collPos)==1 )
//      {
//         // nos posicionamos y leemos
//         int posArch = collGetAt<int>(x.collPos,0,stringToInt);
//         seek<Padron>(f,posArch);
//         Padron p = read<Padron>(f);
//
//         // mostramos
//         cout << padronToDebug(p) << endl;
//      }
//   }
//}
//
//void mostrarListadoPunto2(Coll<Idx> cIdx,FILE* f)
//{
//   cout << "--ESTUDIANTES CON ERROR--" << endl;
//
//   // iteramos la coleccion
//   collReset<Idx>(cIdx);
//   while( collHasNext<Idx>(cIdx) )
//   {
//      Idx x = collNext<Idx>(cIdx,idxFromString);
//
//      // verificamos que no haya idEst duplicados
//      if( collSize<int>(x.collPos)>1 )
//      {
//         // mostramos
//         cout << "Id. Estudiante: " << x.idEst << endl;
//
//         // posiciones de registros con error
//         Coll<int> collPos = x.collPos;
//
//         // iteramos la coleccion
//         collReset<int>(collPos);
//         while( collHasNext<int>(collPos) )
//         {
//            int z = collNext<int>(collPos,stringToInt);
//
//            // nos posicionamos y leemos
//            seek<Padron>(f,z);
//            Padron p = read<Padron>(f);
//
//            // mostramos
//            cout << padronToDebug(p) << endl;
//         }
//      }
//   }
//}
//
//
//#endif
