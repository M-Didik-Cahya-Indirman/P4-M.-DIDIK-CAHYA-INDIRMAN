#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
void film(){
    system("cls");
    cout <<"+=========================================================================================+" <<endl;	
    cout <<"|                                       DAFTAR FILM                                       |" << endl;
    cout <<"|                                     Bioskop Abal-abal                                   |" << endl;
    cout <<"+=========================================================================================+" << endl;
    cout <<"| KODE |    JUDUL   |   JENIS   |   DURATION    |    Waktu   |     LOC     |     PRICE    |" << endl;
    cout <<"===========================================================================================" << endl;
    cout <<"|      |            |           |               |            |             |              |" << endl;
    cout <<"|   1  |  Ant Man   |   Action  |  117 minutes  |   10:00    |   Studio 1  | Rp 45.000,00 |" << endl;
    cout <<"|      |            |           |               |            |             |              |" << endl;
    cout <<"|   2  |    Danur   |   Horor   |   78 minutes  |   12:30    |   Studio 2  | Rp 35.000,00 |" << endl;
    cout <<"|      |            |           |               |            |             |              |" << endl;
    cout <<"|   3  |Endless Love|  Romance  |  165 minutes  |   14:00    |   Studio 3  | Rp 25.000,00 |" << endl;
    cout <<"|      |            |           |               |            |             |              |" << endl;
    cout <<"|   4  |  Yowis Ben |  Comedy   |  99 Minutes   |   16:30    |   Studio 4  | Rp 30.000,00 |" << endl;
    cout <<"|      |            |           |               |            |             |              |" << endl;
    cout <<"|   5  |    Wild    | Adventure |  120 Minutes  |   21:00    |   Studio 5  | Rp 40.000,00 |" << endl;
    cout <<"|      |            |           |               |            |             |              |" << endl;
    cout <<"+=========================================================================================+" << endl;
	}
	
	void header(){
	system("cls");
    cout << "+===================================================+"<<endl;		
    cout << "|===================================================|"<<endl;
    cout << "|                 CINEMA TICKET BOOKING             |"<<endl;
    cout << "|                   Bioskop Abal-abal               |"<<endl;
    cout << "|===================================================|"<<endl;
    cout << "+===================================================+"<<endl;
    cout << "" <<endl;}
    
int main()
{
    char nama[50];
    char nim[20];
    char user[50];
    char pass[20];
    char judulfilm[20][20];
    char kodefilm[20];
    char jenisfilm[10][10];
    int jumlahbeli[10];
    int banyaktiket[20];
    char kursi[20][20];
    char waktu[10][10];
    char durasi[10][10];
    char studio[10][10];
    int harga[20];
    int jumlahharga[20];
    char y;
    int diskon, hargadiskon, banyakpembelian, totalbeli, saldo, cash;
		
		header();
        cout << ">>>>>>SILAHKAN REGISTRASI<<<<<<"<<endl;
        cout << ""<<endl;
        cout << "NAMA			: ";
        cin >> nama;	
        cout << "NIM			: ";
        cin >> nim;
        cout << "Depositkan saldo 	: Rp.";
        cin >> saldo;
        cout << ""<<endl;
        system("CLS");
        int a=0;
        
		do {
		header();	
        cout << "Silahkan LOGIN" << endl;
        cout << "Nama : "; cin >> user;
        cout << "NIM  : "; cin >> pass;
        if (!(strcmp(nama,user) == 0 && strcmp(nim,pass) == 0)) {
            cout << "Maaf login gagal silahkan ulangi kembali "<<2-a<<endl<<endl;
			a=a+1;}
		else {
            system("CLS");
            goto atas;}
        }while (a<3);
        cout<<endl;
		cout << "Maaf, Akun anda kami Blokir !!! "<<endl;
        goto bawah;
        
         
    atas:   
    film();    
   	cout<<"Banyak Pembelian Film     : "; cin>>banyakpembelian;
	jumlahbeli[banyakpembelian]=0;

	for(int i=1;i<=banyakpembelian;i++)
{
	film();
	cout<<"Masukan Kode Film [1|2|3|4|5]    : ";cin>>kodefilm[i];
    cout<<"Jumlah Tiket = "; cin>>banyaktiket[i];
        
    system ("cls");
	cout <<"                 +===================================================+" <<endl;
    cout <<"                 |                Tampilan Kursi Bioskop             |" << endl;
    cout <<"                 |                  Bioskop Abal-abal                |" << endl;
    cout <<"                 +===================================================+" << endl;

    cout<<"              +------------------------------------------------------------+  "<<endl;
    cout<<"              |                         L A Y A R                          |  "<<endl;
    cout<<"              +------------------------------------------------------------+  "<<endl;

    cout<<"         EXIT                                                               ENTER"<<endl;
    cout<<" "<<endl;
    cout<<"            Kode                                                           Kode  "<<endl;
    cout<<"            ---|----------   ---------------------------   ---------------|----  "<<endl;
    cout<<"             A |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| A    "<<endl;
    cout<<"            ---|----------   ---------------------------   ---------------|----  "<<endl;
    cout<<"             B |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| B    "<<endl;
    cout<<"            ---|---------   ---------------------------   ----------------|---   "<<endl;
    cout<<"             C |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| C    "<<endl;
    cout<<"            ---|----------   ---------------------------   ---------------|---   "<<endl;
    cout<<"             D |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| D    "<<endl;
    cout<<"            ---|----------   ---------------------------   ---------------|----  "<<endl;
    cout<<"             E |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| E    "<<endl;
    cout<<"            ---|----------   ---------------------------   ---------------|----  "<<endl;
    cout<<"             F |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| F    "<<endl;
    cout<<"            ---|----------   ---------------------------   ---------------|----  "<<endl;
    cout<<"             G |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| G    "<<endl;
    cout<<"            ---|----------   ---------------------------   ---------------|----  "<<endl;
    cout<<"             H |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| H    "<<endl;
    cout<<"            ---|----------   ---------------------------   ---------------|----  "<<endl;
    cout<<"             I |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| I    "<<endl;
    cout<<"            ---|----------   ---------------------------   ---------------|----  "<<endl;
    cout<<"             J |1|2|3|4|5|   |6|7|8|9|10|11|12|13|14|15|   |16|17|18|19|20| J    "<<endl;
    cout<<endl;
    cout<<"               ---------------D-E-R-E-T-A-N-----K-U-R-S-I------------------      "<<endl;
	cout<<"Pilih Kursi="<<endl;
    for(int k=0;k<banyaktiket[i];k++){
        cout<<"Kursi "<<k+1<<" = ";
        cin>> kursi[k];}
    
    if (kodefilm[i]=='1'||kodefilm[i]=='1'){									
            strcpy(judulfilm[i],"Ant Man");
            strcpy(jenisfilm[i],"Action");
            strcpy(waktu[i],"10:00");
            strcpy(durasi[i],"117 menit");
           	strcpy(studio[i],"1");
            harga[i]=45000;}
            
    else if (kodefilm[i]=='2'||kodefilm[i]=='2'){								
            strcpy(judulfilm[i],"Danur");
            strcpy(jenisfilm[i],"Horor");
            strcpy(waktu[i],"12:30 ");
            strcpy(durasi[i],"78 minutes");
           	strcpy(studio[i],"2");
            harga[i]=35000;}
            
    else if (kodefilm[i]=='3'||kodefilm[i]=='3'){							
            strcpy(judulfilm[i],"Endless Love");
            strcpy(jenisfilm[i],"Romance");
            strcpy(waktu[i],"14:00");
            strcpy(durasi[i],"165 minutes");
           	strcpy(studio[i],"3");
            harga[i]=25000;}
            
    else if (kodefilm[i]=='4'||kodefilm[i]=='4'){								
            strcpy(judulfilm[i],"Yowis Ben");
            strcpy(jenisfilm[i],"Comedy");
            strcpy(waktu[i],"16:30");
            strcpy(durasi[i],"99 Minutes");
           	strcpy(studio[i],"4");
            harga[i]=30000;}
            
            
    else if (kodefilm[i]=='5'||kodefilm[i]=='5'){									
            strcpy(judulfilm[i],"Wild");
            strcpy(jenisfilm[i],"Adventure");
            strcpy(waktu[i],"21:00");
            strcpy(durasi[i],"120 Minutes");
           	strcpy(studio[i],"5");
            harga[i]=40000;}
    else	{
 			strcpy(judulfilm[i],"-");
 			strcpy(jenisfilm[i],"-");
            strcpy(waktu[i],"-");
            strcpy(durasi[i],"-");
           	strcpy(studio[i],"-");
            harga[i]=0;}
            
    jumlahharga[i]=banyaktiket[i]*harga[i];
 	jumlahbeli[banyakpembelian]=jumlahbeli[banyakpembelian]+jumlahharga[i];
}
 	totalbeli=jumlahbeli[banyakpembelian];
 	diskon=totalbeli*0.88;																			
 	system("cls");
 	cout <<"                +===================================================+" <<endl;							
    cout <<"                |                 Konfirmasi Pemesanan	            |" << endl;
    cout <<"                |                  Bioskop Abal-abal                |" << endl;
    cout <<"                +===================================================+" << endl<<endl;
    cout <<"Atas Nama		: "<<nama<<endl;
    cout <<"NIM			: "<<nim<<endl;
    cout <<"Jumlah Saldo		: Rp."<<saldo<<endl;
	for(int i=1;i<=banyakpembelian;i++)
	{
	cout<<"=============================================+"<<endl;
	cout<<"No.Kode				: "<<kodefilm[i]<<endl;
	cout<<"Nama Film			: "<<judulfilm[i]<<endl;
	cout<<"Jenis Film 			: "<<jenisfilm[i]<<endl;
	cout<<"Waktu Film 			: "<<waktu[i]<<endl;
	cout<<"Durasi 				: "<<durasi[i]<<endl;
	cout<<"Studio 				: "<<studio[i]<<endl;
	cout<<"Jumlah Tiket			: "<<banyaktiket[i]<<endl;
	cout<<"Harga				: "<<harga[i]<<endl;	
	cout<<"Jumlah Harga			: "<<jumlahharga[i]<<endl;
	cout<<"=============================================+"<<endl<<endl;
	}
	cout<<"_____________________________________________________"<<endl;
	cout<<"Total Bayar			= Rp."<<totalbeli<<endl<<endl;
	for(int i=1;i<=banyakpembelian;i++){
	if (banyaktiket[i]>1){
	cout<<"SELAMAT ! Pembelian Minimal 2 Tiket Akan Mendapatkan Diskon 88% !!!"<<endl;
	hargadiskon=totalbeli-diskon;				
	cout<<"Harga Diskon 			= Rp."<<hargadiskon<<endl;
	cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl<<endl;}}    
	
	getch();
	cout<<"Konfirmasi Pembelian ? (Y/T) : ";cin>>y;
	if (y=='y' || y=='Y'){cout<< "Silakan Lakukan Pembayaran"<<endl<<endl;} 				
	else if (y=='t' || y=='T'){cout<<"Pembelian dibatalkan"<<endl;
	goto ulang;
	cout<<endl;} 			
	else {cout<< "Input yang Anda Masukkan Salah"<<endl;
	goto bawah;
	cout<<endl;} 
    
    cout<<">>>>>> Proses Pembayaran <<<<<<"<<endl;
    cout<<"Pembayaran Via Saldo atau Cash? (S/C) : "; cin>>y;
	cout<<endl;
    if (y=='s' || y=='S'){
    	cout<<">>> Pembayaran Via Saldo <<<"<<endl;
    	for(int i=1;i<banyakpembelian;i++){
		if (banyaktiket[i]>1){
		cout<< "Jumlah saldo anda : Rp."<<saldo<<endl;
			if (saldo>=hargadiskon){
			cout<< "Sisa saldo anda : Rp."<<saldo-hargadiskon<<endl;}
			else if (saldo<hargadiskon){
			cout<<"Mohon maaf saldo anda kurang";}}
		else if (banyaktiket[i]=1){
		cout<< "Jumlah saldo anda : Rp."<<saldo<<endl;
			if (saldo>=totalbeli){
			cout<< "Sisa saldo anda : Rp."<<saldo-totalbeli<<endl;}
			else if (saldo<totalbeli){
			cout<<"Mohon maaf saldo anda kurang"<<endl;}}}}
						
	else if (y=='c' || y=='C'){
		cout<<">>> Pembayaran Secara Cash <<<"<<endl;
		for(int i=1;i<banyakpembelian;i++){
		if (banyaktiket[i]>1){
		cout<< "Masukan uang anda	: Rp.";cin>>cash;
		cout<<endl;
			if (cash>=hargadiskon){
			cout<< "Kembalian uang anda	: Rp."<<cash-hargadiskon<<endl;}
			else if (cash<hargadiskon){
			cout<<"Mohon maaf uang anda kurang";}}
		else if (banyaktiket[i]=1){
		cout<< "Masukan uang anda	: Rp.";cin>>cash;
		cout<<endl;
			if (cash>=totalbeli){ 
			cout<< "Kembalian uang anda	: Rp."<<cash-totalbeli<<endl;}
			else if (cash<totalbeli){
			cout<<"Mohon maaf uang anda kurang"<<endl;}}}}
					
	else {cout<< "Input yang Anda Masukkan Salah"<<endl;
	cout<<endl;}
    cout<<endl;
    
    getch();
	ulang:	
    cout<<"Apakah Anda ingin memilih lagi (Y/T) : ";cin>>y;
	cout<<endl;
	if (y=='Y'  ||  y=='y'){goto atas;}
	if (y!='Y'  ||  y!='y' ){goto bawah;}

	bawah:
	cout<<"====================================================="<<endl;
	cout<<"                    Terima Kasih                     "<<endl;
	cout<<"====================================================="<<endl;
	getch();
return 0;
}
