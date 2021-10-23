//
//// **********************
//// * Indexacion directa *
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
//#include "Version12.hpp"
//using namespace std;
//
//// constantes
//#define ERR_ESTINEXIST 1; // error tipo 1
//#define ERR_ESCUELADIF 2; // error tipo 2
//#define ERR_FECHAANT   3; // error tipo 3
//
//Padron buscarEstudiante(int, FILE*, bool&, Coll<int>);
//void procesarInscripcion(Inscripcion, Padron, bool&, FILE*);
//Padron idxBuscar(int, FILE*, bool&, Coll<int>);
//Coll<int> idxCrear(FILE*);
//
//int main()
//{
//// abrimos los archivos
//   FILE* fIns = fopen("INSCRIPCIONES_v12.dat","r+b");
//   FILE* fPad = fopen("PADRON_v12.dat","r+b");
//   FILE* fOut = fopen("INCONSISTENCIAS_v12.dat","w+b");
//
//// creamos el indice
//   Coll<int> idx = idxCrear(fPad);
//
//   Inscripcion ins = read<Inscripcion>(fIns);
//   while( !feof(fIns) )
//   {
//      // buscamos el estudiante, asigna true o false a enc
//      // segun encuentre o no lo que busca
//      bool enc;
//      Padron pad = buscarEstudiante(ins.idEst,fPad,enc,idx);
//
//      // procesamos el registro
//      procesarInscripcion(ins,pad,enc,fOut);
//
//      // leemos el siguiente registro
//      ins = read<Inscripcion>(fIns);
//   }
//
//// cerramos los archivos
//   fclose(fOut);
//   fclose(fPad);
//   fclose(fIns);
//   return 0;
//}
//
////Padron buscarEstudiante(int id,FILE* f,bool& enc,Coll<int> idx)
////{
////return idxBuscar(id,f,enc,idx);
////}
//
//int fechaCmp(int a,int b)
//{
//   return a-b;
//}
//
//
//
//void procesarInscripcion(Inscripcion ins
//                        ,Padron pad
//                        ,bool& enc
//                        ,FILE* fOut)
//{
//   Inconsistencia out;
//
//   // asignamos la escuela involucrada
//   out.idEscuela = ins.idEscuela;
//
//   if( !enc )
//   {
//      strcpy(out.nombreEstudiante,"desconocido");
//      out.idTipoProblema = ERR_ESTINEXIST;
//      write<Inconsistencia>(fOut,out);
//      cout << inconsistenciaToDebug(out) << endl;
//   }
//   else
//   {
//      strcpy(out.nombreEstudiante,pad.nombre);
//      if( pad.idEscuela!=ins.idEscuela )
//      {
//         out.idTipoProblema = ERR_ESCUELADIF;
//         write<Inconsistencia>(fOut,out);
//         cout << inconsistenciaToDebug(out) << endl;
//      }
//      else
//      {
//         if( fechaCmp(ins.fecha,pad.fechaMatriculacion)<0 )
//         {
//            out.idTipoProblema = ERR_FECHAANT;
//            write<Inconsistencia>(fOut,out);
//            cout << inconsistenciaToDebug(out) << endl;
//         }
//      }
//   }
//
//}
//
//
//int cmpIntId(int a, int b)
//{
//   return a-b;
//}
//
//Padron idxBuscar(int id, FILE* f, bool& enc, Coll<int> idx)
//{
//   Padron ret;
//
//   int pos = collFind<int, int>(idx,id,cmpIntId,stringToInt);
//   if( pos>=0 )
//   {
//      seek<Padron>(f,pos);
//      ret = read<Padron>(f);
//   }
//
//   enc = pos>=0;
//
//   return ret;
//}
//
//Padron buscarEstudiante(int id, FILE* f, bool& enc, Coll<int> idx)
//{
//   return idxBuscar(id,f,enc,idx);
//}
//
//Coll<int> idxCrear(FILE* f)
//{
//   Coll<int> idx = coll<int>();
//
//   // posicionamos al archivo en el primer registro
//   seek<Padron>(f,0);
//
//   Padron p = read<Padron>(f);
//   while( !feof(f) )
//   {
//      collAdd<int>(idx,p.idEst,intToString);
//      p = read<Padron>(f);
//   }
//
//   return idx;
//}
//
//#endif
