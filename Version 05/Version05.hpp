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
//struct Calificacion
//{
//   int idAsig;
//   int idEst;
//   int calif;
//};
//
//struct Estad
//{
//   int id;
//   int cont;
//   int acum;
//};
//
//string calificacionToString(Calificacion x)
//{
//   char sep = 1;
//   string sIdAsig=to_string(x.idAsig);
//   string sIdEst=to_string(x.idEst);
//   string sCalif=to_string(x.calif);
//   return sIdAsig+sep+sIdEst+sep+sCalif;
//}
//
//Calificacion calificacionFromString(string s)
//{
//   char sep = 1;
//   Calificacion x;
//   string t0 = getTokenAt(s,sep,0);
//   x.idAsig=stoi(t0);
//   string t1 = getTokenAt(s,sep,1);
//   x.idEst=stoi(t1);
//   string t2 = getTokenAt(s,sep,2);
//   x.calif=stoi(t2);
//   return x;
//}
//
//string calificacionToDebug(Calificacion x)
//{
//   stringstream sout;
//   sout<< "[";
//   sout << x.idAsig;
//   sout << ",";
//   sout << x.idEst;
//   sout << ",";
//   sout << x.calif;
//   sout<< "]";
//   return sout.str();
//}
//
//Calificacion calificacion(int idAsig,int idEst,int calif)
//{
//   Calificacion a;
//   a.idAsig = idAsig;
//   a.idEst = idEst;
//   a.calif = calif;
//   return a;
//}
//
//bool calificacionEquals(Calificacion a,Calificacion b)
//{
//   if(a.idAsig!=b.idAsig) return false;
//   if(a.idEst!=b.idEst) return false;
//   if(a.calif!=b.calif) return false;
//   return true;
//}
//
//string estadToString(Estad x)
//{
//   char sep = 2;
//   string sId=to_string(x.id);
//   string sCont=to_string(x.cont);
//   string sAcum=to_string(x.acum);
//   return sId+sep+sCont+sep+sAcum;
//}
//
//Estad estadFromString(string s)
//{
//   char sep = 2;
//   Estad x;
//   string t0 = getTokenAt(s,sep,0);
//   x.id=stoi(t0);
//   string t1 = getTokenAt(s,sep,1);
//   x.cont=stoi(t1);
//   string t2 = getTokenAt(s,sep,2);
//   x.acum=stoi(t2);
//   return x;
//}
//
//string estadToDebug(Estad x)
//{
//   stringstream sout;
//   sout<< "[";
//   sout << x.id;
//   sout << ",";
//   sout << x.cont;
//   sout << ",";
//   sout << x.acum;
//   sout<< "]";
//   return sout.str();
//}
//
//Estad estad(int id,int cont,int acum)
//{
//   Estad b;
//   b.id = id;
//   b.cont = cont;
//   b.acum = acum;
//   return b;
//}
//
//bool estadEquals(Estad a,Estad b)
//{
//   if(a.id!=b.id) return false;
//   if(a.cont!=b.cont) return false;
//   if(a.acum!=b.acum) return false;
//   return true;
//}
//
//#endif
