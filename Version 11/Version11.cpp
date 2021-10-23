//
//// ***********************************************
//// * Busqueda binaria sobre archivo de consultas *
//// ***********************************************
//
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
//
//#include "biblioteca/tads/List.hpp"
//#include "biblioteca/tads/Stack.hpp"
//#include "biblioteca/tads/Queue.hpp"
//#include "biblioteca/tads/Coll.hpp"
//#include "Version11.hpp"
//using namespace std;
//
//Padron buscarEstudiante(int,FILE*,bool&);
//void procesarInscripcion(Inscripcion,Padron,bool&,FILE*);
//
//int fechaCmp(int a,int b)
//{
//   return a-b;
//}
//
//// constantes
//#define ERR_ESTINEXIST 1; // error tipo 1
//#define ERR_ESCUELADIF 2; // error tipo 2
//#define ERR_FECHAANT   3; // error tipo 3
//
////int main()
////{
////   FILE* f = fopen("INCONSISTENCIAS_v11.dat","r+b");
////   Inconsistencia x = read<Inconsistencia>(f);
////   while( !feof(f) )
////   {
////      cout << inconsistenciaToDebug(x) << endl;
////      x = read<Inconsistencia>(f);
////   }
////
////   fclose(f);
////
////   return 0;
////}
//
//int main()
//{
//   // abrimos los archivos
//   FILE* fIns = fopen("INSCRIPCIONES_v11.dat","r+b");
//   FILE* fPad = fopen("PADRON_v11.dat","r+b");
//   FILE* fOut = fopen("INCONSISTENCIAS_v11.dat","w+b");
//
//   Inscripcion ins = read<Inscripcion>(fIns);
//   while( !feof(fIns) )
//   {
//      // buscamos el estudiante, asigna true o false a enc
//      // segun encuentre o no lo que busca
//      bool enc;
//      Padron pad = buscarEstudiante(ins.idEst,fPad,enc);
//
//      // procesamos el registro
//      procesarInscripcion(ins,pad,enc,fOut);
//
//      // leemos el siguiente registro
//      ins = read<Inscripcion>(fIns);
//   }
//
//   // cerramos los archivos
//   fclose(fOut);
//   fclose(fPad);
//   fclose(fIns);
//
//   return 0;
//}
//
//
//void procesarInscripcion(Inscripcion ins
//                        ,Padron pad
//                        ,bool& enc
//                        ,FILE* fOut)
//{
//   Inconsistencia out;
//
//
//
//   // asignamos la escuela involucrada
//   out.idEscuela = ins.idEscuela;
//
//   if( !enc )
//   {
//      strcpy(out.nombreEstudiante,rpad("desconocido",19,' ').c_str());
//      out.idTipoProblema = ERR_ESTINEXIST;
//      write<Inconsistencia>(fOut,out);
//   }
//   else
//   {
//      strcpy(out.nombreEstudiante,pad.nombre);
//      if( pad.idEscuela!=ins.idEscuela )
//      {
//         out.idTipoProblema = ERR_ESCUELADIF;
//         write<Inconsistencia>(fOut,out);
//      }
//      else
//      {
//         if( fechaCmp(ins.fecha,pad.fechaMatriculacion)<0 )
//         {
//            out.idTipoProblema = ERR_FECHAANT;
//            write<Inconsistencia>(fOut,out);
//         }
//      }
//   }
//}
//
//Padron buscarEstudiante(int id,FILE* f,bool& enc)
//{
//   Padron ret;
//
//   int i=0;
//   int j=fileSize<Padron>(f)-1;
//
//   enc=false;
//   while( i<=j && !enc)
//   {
//      int k = (i+j)/2;
//
//
//      // posiciono y leo
//      seek<Padron>(f,k);
//      ret = read<Padron>(f);
//
//      if( ret.idEst<id )
//      {
//         i = k+1;
//      }
//      else
//      {
//         if( ret.idEst>id )
//         {
//            j = k-1;
//         }
//         else
//         {
//            enc=true;
//         }
//      }
//   }
//
//   return ret;
//}
//
//
//#endif
