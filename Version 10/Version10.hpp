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
//struct Rendi
//{
//   int idAsig;
//   char comision;
//   double califProm;
//};
//
//struct Lst1
//{
//   int idAsig;
//   char comMax;
//   double max;
//   char comMin;
//   double min;
//};
//
//struct Lst2
//{
//   int idAsig;
//   double promGral;
//};
//
//struct LstA
//{
//   int idAsig;
//   double prom2;
//   double porc;
//};
//
//string rendiToString(Rendi x)
//{
//   char sep = 1;
//   string sIdAsig=to_string(x.idAsig);
//   string sComision=string(1,x.comision);
//   string sCalifProm=to_string(x.califProm);
//   return sIdAsig+sep+sComision+sep+sCalifProm;
//}
//
//Rendi rendiFromString(string s)
//{
//   char sep = 1;
//   Rendi x;
//   string t0 = getTokenAt(s,sep,0);
//   x.idAsig=stoi(t0);
//   string t1 = getTokenAt(s,sep,1);
//   x.comision=(char)t1[0];
//   string t2 = getTokenAt(s,sep,2);
//   x.califProm=stod(t2);
//   return x;
//}
//
//string rendiToDebug(Rendi x)
//{
//   stringstream sout;
//   sout<< "[";
//   sout << x.idAsig;
//   sout << ",";
//   sout << x.comision;
//   sout << ",";
//   sout << x.califProm;
//   sout<< "]";
//   return sout.str();
//}
//
//string rendiToDebug(string mssg,Rendi x)
//{
//   stringstream sout;
//   sout<< mssg<<":[";
//   sout << x.idAsig;
//   sout << ",";
//   sout << x.comision;
//   sout << ",";
//   sout << x.califProm;
//   sout<< "]";
//   return sout.str();
//}
//
//Rendi rendi(int idAsig,char comision,double califProm)
//{
//   Rendi a;
//   a.idAsig = idAsig;
//   a.comision = comision;
//   a.califProm = califProm;
//   return a;
//}
//
//bool rendiEquals(Rendi a,Rendi b)
//{
//   if(a.idAsig!=b.idAsig) return false;
//   if(a.comision!=b.comision) return false;
//   if(a.califProm!=b.califProm) return false;
//   return true;
//}
//
//string lst1ToString(Lst1 x)
//{
//   char sep = 2;
//   string sIdAsig=to_string(x.idAsig);
//   string sComMax=string(1,x.comMax);
//   string sMax=to_string(x.max);
//   string sComMin=string(1,x.comMin);
//   string sMin=to_string(x.min);
//   return sIdAsig+sep+sComMax+sep+sMax+sep+sComMin+sep+sMin;
//}
//
//Lst1 lst1FromString(string s)
//{
//   char sep = 2;
//   Lst1 x;
//   string t0 = getTokenAt(s,sep,0);
//   x.idAsig=stoi(t0);
//   string t1 = getTokenAt(s,sep,1);
//   x.comMax=(char)t1[0];
//   string t2 = getTokenAt(s,sep,2);
//   x.max=stod(t2);
//   string t3 = getTokenAt(s,sep,3);
//   x.comMin=(char)t3[0];
//   string t4 = getTokenAt(s,sep,4);
//   x.min=stod(t4);
//   return x;
//}
//
//string lst1ToDebug(Lst1 x)
//{
//   stringstream sout;
//   sout<< "[";
//   sout << x.idAsig;
//   sout << ",";
//   sout << x.comMax;
//   sout << ",";
//   sout << x.max;
//   sout << ",";
//   sout << x.comMin;
//   sout << ",";
//   sout << x.min;
//   sout<< "]";
//   return sout.str();
//}
//
//string lst1ToDebug(string mssg,Lst1 x)
//{
//   stringstream sout;
//   sout<< mssg<<":[";
//   sout << x.idAsig;
//   sout << ",";
//   sout << x.comMax;
//   sout << ",";
//   sout << x.max;
//   sout << ",";
//   sout << x.comMin;
//   sout << ",";
//   sout << x.min;
//   sout<< "]";
//   return sout.str();
//}
//
//Lst1 lst1(int idAsig,char comMax,double max,char comMin,double min)
//{
//   Lst1 a;
//   a.idAsig = idAsig;
//   a.comMax = comMax;
//   a.max = max;
//   a.comMin = comMin;
//   a.min = min;
//   return a;
//}
//
//bool lst1Equals(Lst1 a,Lst1 b)
//{
//   if(a.idAsig!=b.idAsig) return false;
//   if(a.comMax!=b.comMax) return false;
//   if(a.max!=b.max) return false;
//   if(a.comMin!=b.comMin) return false;
//   if(a.min!=b.min) return false;
//   return true;
//}
//
//string lst2ToString(Lst2 x)
//{
//   char sep = 3;
//   string sIdAsig=to_string(x.idAsig);
//   string sPromGral=to_string(x.promGral);
//   return sIdAsig+sep+sPromGral;
//}
//
//Lst2 lst2FromString(string s)
//{
//   char sep = 3;
//   Lst2 x;
//   string t0 = getTokenAt(s,sep,0);
//   x.idAsig=stoi(t0);
//   string t1 = getTokenAt(s,sep,1);
//   x.promGral=stod(t1);
//   return x;
//}
//
//string lst2ToDebug(Lst2 x)
//{
//   stringstream sout;
//   sout<< "[";
//   sout << x.idAsig;
//   sout << ",";
//   sout << x.promGral;
//   sout<< "]";
//   return sout.str();
//}
//
//string lst2ToDebug(string mssg,Lst2 x)
//{
//   stringstream sout;
//   sout<< mssg<<":[";
//   sout << x.idAsig;
//   sout << ",";
//   sout << x.promGral;
//   sout<< "]";
//   return sout.str();
//}
//
//Lst2 lst2(int idAsig,double promGral)
//{
//   Lst2 a;
//   a.idAsig = idAsig;
//   a.promGral = promGral;
//   return a;
//}
//
//bool lst2Equals(Lst2 a,Lst2 b)
//{
//   if(a.idAsig!=b.idAsig) return false;
//   if(a.promGral!=b.promGral) return false;
//   return true;
//}
//
//string lstAToString(LstA x)
//{
//   char sep = 4;
//   string sIdAsig=to_string(x.idAsig);
//   string sProm2=to_string(x.prom2);
//   string sPorc=to_string(x.porc);
//   return sIdAsig+sep+sProm2+sep+sPorc;
//}
//
//LstA lstAFromString(string s)
//{
//   char sep = 4;
//   LstA x;
//   string t0 = getTokenAt(s,sep,0);
//   x.idAsig=stoi(t0);
//   string t1 = getTokenAt(s,sep,1);
//   x.prom2=stod(t1);
//   string t2 = getTokenAt(s,sep,2);
//   x.porc=stod(t2);
//   return x;
//}
//
//string lstAToDebug(LstA x)
//{
//   stringstream sout;
//   sout<< "[";
//   sout << x.idAsig;
//   sout << ",";
//   sout << x.prom2;
//   sout << ",";
//   sout << x.porc;
//   sout<< "]";
//   return sout.str();
//}
//
//string lstAToDebug(string mssg,LstA x)
//{
//   stringstream sout;
//   sout<< mssg<<":[";
//   sout << x.idAsig;
//   sout << ",";
//   sout << x.prom2;
//   sout << ",";
//   sout << x.porc;
//   sout<< "]";
//   return sout.str();
//}
//
//LstA lstA(int idAsig,double prom2,double porc)
//{
//   LstA a;
//   a.idAsig = idAsig;
//   a.prom2 = prom2;
//   a.porc = porc;
//   return a;
//}
//
//bool lstAEquals(LstA a,LstA b)
//{
//   if(a.idAsig!=b.idAsig) return false;
//   if(a.prom2!=b.prom2) return false;
//   if(a.porc!=b.porc) return false;
//   return true;
//}
//
//#endif
