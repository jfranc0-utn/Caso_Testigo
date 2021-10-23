//
//// *********************************************
//// * Apareo de archivos, con corte de control *
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
//#include "Version10.hpp"
//using namespace std;
//
//void procesar1(FILE*,Rendi&,Coll<Lst1>&);
//double promCC(FILE*,Rendi&);
//void procesar2(FILE*,Rendi&,Coll<Lst2>&);
//void procesarA(FILE* f1,Rendi& r1,FILE* f2,Rendi& r2 ,Coll<LstA>& collA);
//void mostrarListado1(Coll<Lst1>);
//void mostrarListado2(Coll<Lst2>);
//void mostrarListadoA(Coll<LstA>);
//
//int main()
//{
//   Coll<Lst1> coll1 = coll<Lst1>();
//   Coll<Lst2> coll2 = coll<Lst2>();
//   Coll<LstA> collA = coll<LstA>();
//
//   FILE* f1 = fopen("RENDI19_v10.dat","r+b");
//   FILE* f2 = fopen("RENDI20_v10.dat","r+b");
//
//   Rendi r1 = read<Rendi>(f1);
//   Rendi r2 = read<Rendi>(f2);
//   while( !feof(f1) && !feof(f2) )
//   {
//      if( r1.idAsig<r2.idAsig )
//      {
//         // solo 2019
//         procesar1(f1,r1,coll1);
//      }
//      else
//      {
//         // solo 2020
//         if( r1.idAsig>r2.idAsig )
//         {
//            procesar2(f2,r2,coll2);
//         }
//         else
//         {
//            // ambos anios
//            procesarA(f1,r1,f2,r2,collA);
//         }
//      }
//   }
//
//   while( !feof(f1) )
//   {
//      procesar1(f1,r1,coll1);
//   }
//
//   while( !feof(f2) )
//   {
//      procesar2(f2,r2,coll2);
//   }
//
//   mostrarListado1(coll1);
//   mostrarListado2(coll2);
//   mostrarListadoA(collA);
//
//   fclose(f2);
//   fclose(f1);
//   return 0;
//}
//
//void procesar1(FILE* f,Rendi& r,Coll<Lst1>& coll1)
//{
//   char comMax = r.comision;
//   double max = r.califProm;
//
//   char comMin = r.comision;
//   double min = r.califProm;
//
//   int idAsigAnt = r.idAsig;
//   while( !feof(f) && r.idAsig==idAsigAnt )
//   {
//      if( r.califProm>max )
//      {
//         comMax = r.comision;
//         max = r.califProm;
//      }
//      else
//      {
//         if( r.califProm<min )
//         {
//            comMin = r.comision;
//            min = r.califProm;
//         }
//      }
//
//      r = read<Rendi>(f);
//   }
//
//   // agregamos un elemento tipo Lst1 a la collecion
//   Lst1 elm = lst1(idAsigAnt,comMax,max,comMin,min);
//   collAdd<Lst1>(coll1,elm,lst1ToString);
//}
//
//void procesar2(FILE* f,Rendi& r,Coll<Lst2>& coll2)
//{
//   int idAsig = r.idAsig;
//   double prom = promCC(f,r);
//   Lst2 elm = lst2(idAsig,prom);
//   collAdd<Lst2>(coll2,elm,lst2ToString);
//}
//
//double promCC(FILE* f,Rendi& r)
//{
//   int cont = 0;
//   double sum = 0;
//
//   int idAsigAnt = r.idAsig;
//   while( !feof(f) && r.idAsig==idAsigAnt )
//   {
//      sum+=r.califProm;
//      cont++;
//
//      r = read<Rendi>(f);
//   }
//
//   double prom = sum/cont;
//   return prom;
//}
//
//void procesarA(FILE* f1
//              ,Rendi& r1
//              ,FILE* f2
//              ,Rendi& r2
//              ,Coll<LstA>& collA)
//{
//   int idAsig = r1.idAsig; // <-- ATENCION
//   double prom1 = promCC(f1,r1); // corte de control y prom
//   double prom2 = promCC(f2,r2); // corte de control y prom
//
//   double porc = 100-prom1/prom2*100;
//
//   LstA elm = lstA(idAsig,prom2,porc);
//   collAdd<LstA>(collA,elm,lstAToString);
//}
//
//void mostrarListado1(Coll<Lst1> c)
//{
//   cout << "-- SOLO 2019 --" << endl;
//   collReset<Lst1>(c);
//   while( collHasNext<Lst1>(c) )
//   {
//      Lst1 elm = collNext<Lst1>(c,lst1FromString);
//      cout << lst1ToDebug(elm) << endl;
//   }
//}
//
//void mostrarListado2(Coll<Lst2> c)
//{
//   cout << "-- SOLO 2020 --" << endl;
//   collReset<Lst2>(c);
//   while( collHasNext<Lst2>(c) )
//   {
//      Lst2 elm = collNext<Lst2>(c,lst2FromString);
//      cout << lst2ToDebug(elm) << endl;
//   }
//}
//
//void mostrarListadoA(Coll<LstA> c)
//{
//   cout << "-- 2019 y 2020 --" << endl;
//   collReset<LstA>(c);
//   while( collHasNext<LstA>(c) )
//   {
//      LstA elm = collNext<LstA>(c,lstAFromString);
//      cout << lstAToDebug(elm) << endl;
//   }
//}
//
//#endif
