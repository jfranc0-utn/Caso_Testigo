//
//// ********************************
//// * Ordenar y depurar un archivo *
//// ********************************
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
//#include "Version15.hpp"
//using namespace std;
//
//void generarArchivo(Coll<Idx>,FILE*);
//Padron leerPadron(FILE* f,int);
//Padron leerPadron(FILE*,int);
//int cmpIdxId(Idx,int);
//int descubrirEnIdx(int,Coll<Idx>&);
//int cmpIdx(Idx,Idx);
//
//int main()
//{
//   // indice
//   Coll<Idx> cIdx= coll<Idx>();
//
//   FILE* f = fopen("PADRON_v15.dat","r+b");
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
//
//
//   }
//
//   // ordenamos y generamos el archivo
//   generarArchivo(cIdx,f);
//
//   fclose(f);
//   return 0;
//}
//
//void generarArchivo(Coll<Idx> cIdx,FILE* f)
//{
//   FILE* fOut = fopen("PADRONFIX_v15.dat","w+b");
//
//   // ordenamos el indice
//   collSort<Idx>(cIdx,cmpIdx,idxFromString,idxToString);
//
//   // grabamos registros sin error
//   collReset<Idx>(cIdx);
//   while( collHasNext<Idx>(cIdx) )
//   {
//      Idx x = collNext<Idx>(cIdx,idxFromString);
//      Coll<int> collPos = x.collPos;
//      if( collSize<int>(collPos)==1 )
//      {
//         // grabamos
//         int pos = collGetAt<int>(collPos,0,stringToInt);
//         Padron p = leerPadron(f,pos);
//         write<Padron>(fOut,p);
//         cout << padronToDebug("ok",p) << endl;
//      }
//   }
//
//   // el ultimo idEst de la coleccion + 1 es el proximo
//   // idEst a partir del cual asignaremos a los registros
//   int idEst = collGetAt<Idx>(cIdx
//                             ,collSize<Idx>(cIdx)-1
//                             ,idxFromString).idEst;
//   idEst++;
//
//
//   // grabamos registros con error
//   collReset<Idx>(cIdx);
//   while( collHasNext<Idx>(cIdx) )
//   {
//      Idx x = collNext<Idx>(cIdx,idxFromString);
//
//      Coll<int> collPos = x.collPos;
//      if( collSize<int>(collPos)>1 )
//      {
//         collReset<int>(collPos);
//         while( collHasNext<int>(collPos) )
//         {
//            int pos = collNext<int>(collPos,stringToInt);
//            Padron p = leerPadron(f,pos);
//            p.idEst = idEst;
//            write<Padron>(fOut,p);
//            cout << padronToDebug("fix",p) << endl;
//            idEst++;
//         }
//      }
//   }
//}
//
//Padron leerPadron(FILE* fPad,int pos)
//{
//   // posicionamos y leemos
//   seek<Padron>(fPad,pos);
//   Padron p = read<Padron>(fPad);
//   return p;
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
//int cmpIdx(Idx a,Idx b)
//{
//   return a.idEst-b.idEst;
//}
//
//#endif
