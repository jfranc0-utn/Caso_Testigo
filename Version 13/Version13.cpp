//
//// *********************************************
//// * Indexacion indirecta con corte de control *
//// *********************************************
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
//#include "Version13.hpp"
//using namespace std;
//
//int cmpIdx(Idx,Idx);
//Coll<Idx> indexarPadron(FILE*);
//Padron leerPadron(FILE*,int);
//
//int main()
//{
//   // abrimos el archivo e indexamos
//   FILE* f = fopen("PADRON_v13.dat","r+b");
//   Coll<Idx> cIdx = indexarPadron(f);
//   collReset<Idx>(cIdx);
//
//   // recorremos con corte de control
//   bool endOfColl;
//   Idx i = collNext<Idx>(cIdx,endOfColl,idxFromString);
//   while( !endOfColl )
//   {
//      // mostramos el codigo postal
//      cout << "Codigo postal: " << i.codigoPostal << endl;
//
//      // variable de control
//      int codigoPostalAnt = i.codigoPostal;
//      while( !endOfColl && codigoPostalAnt==i.codigoPostal)
//      {
//         // leemos el registro en la posicion pos
//         Padron p = leerPadron(f,i.pos);
//
//         // mosotramos los datos del estudiante
//         cout << padronToDebug(p) << endl;
//
//         // leemos el sigubientes
//         i = collNext<Idx>(cIdx,endOfColl,idxFromString);
//      }
//   }
//
//   return 0;
//}
//
//Coll<Idx> indexarPadron(FILE* f)
//{
//   Coll<Idx> ret = coll<Idx>();
//
//   // reseteamos el archivo
//   seek<Padron>(f,0);
//
//   // recorremos el archivo
//   Padron p = read<Padron>(f);
//   while( !feof(f) )
//   {
//      Idx i = idx(p.codigoPostal,filePos<Padron>(f)-1);
//      collAdd<Idx>(ret,i,idxToString);
//      p = read<Padron>(f);
//   }
//
//   // ordenamos el indice
//   collSort<Idx>(ret,cmpIdx,idxFromString,idxToString);
//
//   return ret;
//}
//
//int cmpIdx(Idx a,Idx b)
//{
//   return a.codigoPostal-b.codigoPostal;
//}
//
//Padron leerPadron(FILE* f,int pos)
//{
//   seek<Padron>(f,pos);
//   return read<Padron>(f);
//}
//
//
//#endif
