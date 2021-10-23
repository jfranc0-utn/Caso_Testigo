//#ifndef _MAINHPP
//#define _MAINHPP
//#include <iostream>
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <string.h>
//#include <stdlib.h>
//#include "biblioteca/funciones/strings.hpp"
//#include "biblioteca/funciones/tokens.hpp"
//#include "biblioteca/tads/Coll.hpp"
//using namespace std;
//
//struct Asignatura
//{
//   int idAsig;
//   char nomAsig[30];
//   char maestroACargo[50];
//   double califProm;
//};
//
//string asignaturaToString(Asignatura x)
//{
//   char sep = 1;
//   string sIdAsig=to_string(x.idAsig);
//   string sNomAsig=x.nomAsig;
//   string sMaestroACargo=x.maestroACargo;
//   string sCalifProm=to_string(x.califProm);
//   return sIdAsig+sep+sNomAsig+sep+sMaestroACargo+sep+sCalifProm;
//}
//
//Asignatura asignaturaFromString(string s)
//{
//   char sep = 1;
//   Asignatura x;
//   string t0 = getTokenAt(s,sep,0);
//   x.idAsig=stoi(t0);
//   string t1 = getTokenAt(s,sep,1);
//   strcpy(x.nomAsig,t1.c_str());
//   string t2 = getTokenAt(s,sep,2);
//   strcpy(x.maestroACargo,t2.c_str());
//   string t3 = getTokenAt(s,sep,3);
//   x.califProm=stod(t3);
//   return x;
//}
//
//string asignaturaToDebug(Asignatura x)
//{
//   stringstream sout;
//   sout<< "[";
//   sout << x.idAsig;
//   sout << ",";
//   sout << x.nomAsig;
//   sout << ",";
//   sout << x.maestroACargo;
//   sout << ",";
//   sout << x.califProm;
//   sout<< "]";
//   return sout.str();
//}
//
//Asignatura asignatura(int idAsig,string nomAsig,string maestroACargo,double califProm)
//{
//   Asignatura a;
//   a.idAsig = idAsig;
//   strcpy(a.nomAsig,nomAsig.c_str());
//   strcpy(a.maestroACargo,maestroACargo.c_str());
//   a.califProm = califProm;
//   return a;
//}
//
//bool asignaturaEquals(Asignatura a,Asignatura b)
//{
//   if(a.idAsig!=b.idAsig) return false;
//   if(a.califProm!=b.califProm) return false;
//   return true;
//}
//
//#endif
