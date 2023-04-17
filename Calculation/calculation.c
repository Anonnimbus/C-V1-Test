#include <stdio.h>
void main () {
	int angka ,angka2, pilih;
	printf ("masukan angka : ");
	scanf ("%d", &angka);
	printf ("[1] di bagi\n[2]dikali");
	scanf ("%d",&pilih);
	printf("masukan angka ke 2 :");
	scanf("%d", &angka2);
	printf ("%d", hitung(angka, angka2, pilih));
	return 0;
	}
	
	int hitung (int angka, int angka2, int pilih){
		int hasil;
		if (pilih ==1){
			hasil=angka / angka2;
			
		}else{
			hasil = angka * angka2;
		}
		  return hasil; 
		  
		  
	}

    