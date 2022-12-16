#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <curses.h>
#include <windows.h>
#include <iostream>

using namespace std;

int skor_Anda = 0;
int skor_Komp = 0;
 
void wait(){
    for(int i=0; i<999999999; i++)
    {
    }
}

void welcome(){
		cout<<"   ================================="<<endl;
		cout<<"            SELAMAT DATANG\n        "<<endl;
		cout<<"   ================================="<<endl;
	
}

void menu(){
    printf("   ===========================\n");
    printf("   = GUNTING - BATU - KERTAS =\n");
    printf("   ===========================\n");
    printf("   =      BY KELOMPOK 4      =\n");
    printf("   ===========================\n");
    printf("   || 1. Batu               ||      Skor Anda     : %d\n",skor_Anda);
    printf("   || 2. Gunting            ||      Skor Komputer : %d\n",skor_Komp);
    printf("   || 3. Kertas             ||\n");
    printf("   || 4. EXIT               ||\n");
    printf("   ===========================\n");
}
 
 
int main(){
 
    int pilih;
    int komp;
 
    srand(time(NULL));

 	welcome();
 	Sleep(1000); 
    system("cls");

    do{
        system("cls");
        menu();
        do{
            printf("\n");
            printf("   Pilih Batu, Gunting, Kertas [1..4]: ");
            scanf("%d",&pilih);
            fflush(stdin);
        }while(pilih < 1 || pilih > 4);
 
        if(pilih != 4){
 
            //ENTER GAME
            komp = rand()%3+1; //1 = Batu, 2 = Gunting, 3 = Kertas
 
            if(komp == 1){ //KOMPUTER BATU
                if(pilih == 1){ //USER BATU
                    printf("\n\n   Anda Memilih : Batu\n");
                    wait();
                    printf("   Komputer Memilih : Batu\n\n");
                    printf("   HASIL SERI :D\n\n");
                    printf("   Press Enter to continue...");
                    getchar();
                }
                else if(pilih == 2){ //USER GUNTING
                    printf("\n\n   Anda Memilih : Gunting\n");
                    wait();
                    printf("   Komputer Memilih : Batu\n\n");
                    printf("   ANDA KALAH :(\n\n");
                    printf("   Press Enter to continue...");
                    skor_Komp++;
                    getchar();
                }
                else if(pilih == 3){ //USER KERTAS
                    printf("\n\n   Anda Memilih : Kertas\n");
                    wait();
                    printf("   Komputer Memilih : Batu\n\n");
                    printf("   ANDA MENANG SELAMAT :)\n\n");
                    printf("   Press Enter to continue...");
                    getchar();
                    skor_Anda++;
                }
            }
            else if(komp == 2){ //KOMPUTER GUNTING
                if(pilih == 1){ //USER BATU
                    printf("\n\n   Anda Memilih : Batu\n");
                    wait();
                    printf("   Komputer Memilih : Gunting\n\n");
                    printf("   ANDA MENANG SELAMAT :)\n\n");
                    printf("   Press Enter to continue...");
                    skor_Anda++;
                    getchar();
                }
                else if(pilih == 2){ //USER GUNTING
                    printf("\n\n   Anda Memilih : Gunting\n");
                    wait();
                    printf("   Komputer Memilih : Gunting\n\n");
                    printf("   HASIL SERI :D\n\n");
                    printf("   Press Enter to continue...");
                    getchar();
                }
                else if(pilih == 3){ //USER KERTAS
                    printf("\n\n   Anda Memilih : Kertas\n");
                    wait();
                    printf("   Komputer Memilih : Gunting\n\n");
                    printf("   ANDA KALAH :(\n\n");
                    printf("   Press Enter to continue...");
                    skor_Komp++;
                    getchar();
                }
            }
            else if(komp == 3){ //KOMPUTER KERTAS
                if(pilih == 1){ //USER BATU
                    printf("\n\n   Anda Memilih : Batu\n");
                    wait();
                    printf("   Komputer Memilih : Kertas\n\n");
                    printf("   ANDA KALAH :(\n\n");
                    printf("   Press Enter to continue...");
                    skor_Komp++;
                    getchar();
                }
                else if(pilih == 2){ //USER GUNTING
                    printf("\n\n   Anda Memilih : Gunting\n");
                    wait();
                    printf("   Komputer Memilih : Kertas\n\n");
                    printf("   ANDA MENANG SELAMAT :)\n\n");
                    printf("   Press Enter to continue...");
                    skor_Anda++;
                    getchar();
                }
                else if(pilih == 3){ //USER KERTAS
                    printf("\n\n   Anda Memilih : Kertas\n");
                    wait();
                    printf("   Komputer Memilih : Kertas\n\n");
                    printf("   HASIL SERI :D\n\n");
                    printf("   Press Enter to continue...");
                    getchar();
                }
            }
        }
    }while(pilih != 4);
 
    //EXIT GAME
    printf("\nTerima Kasih Sudah Bermain");
    getchar();
    
    return 0;
}