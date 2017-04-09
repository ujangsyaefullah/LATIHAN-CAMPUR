#include <iostream.h>
#include <conio.h>
#include <stdio.h>
main( )
{
   char kode;
   clrscr( );
   cout<<"Masukkan Kode Barang [A..C] : "; cin>>kode;
   switch(kode)
   {
         case 'A' :
         case 'a' :
             cout<<"Alat Olah Raga";
         break;
         case 'B' :
         case 'b' :
            cout<<"Alat Elelktronik";
         break;
         case 'C' :
         case 'c' :
            cout<<"Alat Masak";
         break;
         default:
            cout<<"Anda Salah Memasukan kode";
         break;
   }
getch( );
}