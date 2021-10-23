//
//// **********************
//// * Apareo de archivos *
//// **********************
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
//#include "Version09.hpp"
//using namespace std;
//
//void procesarPunto3(Asignatura,Asignatura,Coll<Asignatura>&);
//void mostrarResultados(string,Coll<Asignatura>);
//int cmpAsignatura(Asignatura,Asignatura);
//
//
//int main()
//{
//   Coll<Asignatura> coll1 = coll<Asignatura>();
//   Coll<Asignatura> coll2 = coll<Asignatura>();
//   Coll<Asignatura> collA = coll<Asignatura>();
//
//   FILE* f1 = fopen("ASIGNATURAS19_v09.dat","r+b");
//   FILE* f2 = fopen("ASIGNATURAS20_v09.dat","r+b");
//
//   Asignatura a1 = read<Asignatura>(f1);
//   Asignatura a2 = read<Asignatura>(f2);
//
//   while( !feof(f1) && !feof(f2) )
//   {
//      if( a1.idAsig<a2.idAsig )
//      {
//         // la asignatura solo se dicto en 2019
//         collAdd<Asignatura>(coll1,a1,asignaturaToString);
//         a1 = read<Asignatura>(f1);
//      }
//      else
//      {
//         if( a1.idAsig>a2.idAsig )
//         {
//            // la asignatura aparece en 2020
//            collAdd<Asignatura>(coll2,a2,asignaturaToString);
//            a2 = read<Asignatura>(f2);
//         }
//         else
//         {
//            // la asignatura se dicto ambos anios
//            procesarPunto3(a1,a2,collA);
//            a1 = read<Asignatura>(f1);
//            a2 = read<Asignatura>(f2);
//         }
//      }
//   }
//
//   while( !feof(f1) )
//   {
//      // asignaturas que solo aparecen en 2020
//      collAdd<Asignatura>(coll1,a1,asignaturaToString);
//      a1 = read<Asignatura>(f1);
//   }
//
//   while( !feof(f2) )
//   {
//      // asignaturas que solo se dictaron en 2019
//      collAdd<Asignatura>(coll2,a2,asignaturaToString);
//      a2 = read<Asignatura>(f2);
//   }
//
//   // resultados
//   mostrarResultados("Solo en 2019",coll1);
//   mostrarResultados("Comenzaron en 2020",coll2);
//   mostrarResultados("Ambos anios, diferentes docentes",collA);
//
//   fclose(f2);
//   fclose(f1);
//   return 0;
//}
//
//void procesarPunto3(Asignatura a1
//                   ,Asignatura a2
//                   ,Coll<Asignatura>& collA)
//{
//   string maes1 = a1.maestroACargo;
//   string maes2 = a2.maestroACargo;
//
//   if( maes1!=maes2 )
//   {
//      collAdd<Asignatura>(collA,a1,asignaturaToString);
//   }
//}
//
//void mostrarResultados(string msg,Coll<Asignatura> c)
//{
//   collSort<Asignatura>(c
//                       ,cmpAsignatura
//                       ,asignaturaFromString
//                       ,asignaturaToString);
//
//   cout << msg << endl;
//   while( collHasNext<Asignatura>(c) )
//   {
//      Asignatura a = collNext<Asignatura>(
//                                    c
//                                   ,asignaturaFromString);
//
//      cout << asignaturaToDebug(a) << endl;
//   }
//}
//
//int cmpAsignatura(Asignatura x,Asignatura y)
//{
//   string m1 = x.maestroACargo;
//   string m2 = y.maestroACargo;
//   return m1<m2?-1:m1>m2?1:0;
//}
//
//#endif
