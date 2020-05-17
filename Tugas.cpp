#include<iostream>
#include<string.h>
using namespace std;

void header(){
cout <<				"+===================================================+\n";		
cout << 			"|===================================================|\n";
cout <<				"|                    PROGRAM QUIZ                   |\n";
cout << 			"|                      COVID 19                     |\n";
cout <<				"|===================================================|\n";
cout << 			"+===================================================+\n\n";}

int main(){
int i, nilaibenar, nilaisalah, nilai, benar, salah, pass;
char nama[50], nim[20], user[50], password[20];
char opsi[5]={'a','b','c','d','e'};
char pilihan, jawab[9];

ulang :
system("cls");
header();	
cout <<">>> SIGN UP / DAFTAR <<<\n\n";
cout << "Nama Lengkap	: "; cin >> nama; cout<<endl;	
cout << "NIM		: "; cin >> nim; cout<<endl;
system("CLS");
int a=0;
do {
header();	
cout << ">>> LOGIN / MASUK <<<\n" << endl;
cout << "Nama Lengkap	: "; cin >> user; cout<<endl;
cout << "NIM		: "; cin >> password; cout<<endl;
    if (!(strcmp(nama,user) == 0 && strcmp(nim,password) == 0)) {
    cout << "Maaf login gagal silahkan ulangi kembali "<<2-a<<endl<<endl;
	a=a+1;}
	else {system("CLS");
    goto lanjut;}}
while (a<3); cout<<endl;
	cout << "Maaf, Silahkan Ulang Kembali 30 menit lagi"<<endl;
    goto selesai;
        
lanjut:	
header();
cout<<"		>>>>> CATATAN <<<<<\n\n";
cout<<"1. SOAL BERJENIS PILIHAN GANDA\n\n";
cout<<"2. SOAL SEBANYAK 10 NOMOR\n\n";
cout<<"3. TOPIK SOAL YAKNI BERKAITAN DENGAN PANDEMI COVID19\n\n";
cout<<"4. SATU SOAL BENAR BERNILAI '10'\n\n";
cout<<"5. SATU SOAL SALAH BERNILAI '-5'\n\n";
cout<<"6. SATU SOAL TIDAK DIJAWAB BERNILAI '0'\n\n";
cout<<"7. APABILA SEMUA JAWABAN BENAR, ANDA AKAN MENDAPATKAN SKOR '100'\n\n";
cout<<"8. PILIH SALAH SATU JAWABAN YANG MENURUT ANDA BENAR, ANTARA A, B, C, ATAU D!\n\n";
cout<<"9. PILIH OPSI E 'PASS' APABILA ANDA RAGU ATAU TIDAK TAU JAWABANNYA\n\n";
cout<<"=============================================================================\n\n";		
cout<<"Mulai Quiz ? [Y/T] : "; cin>>pilihan;
	if (pilihan=='y' || pilihan=='Y'){goto ulangjwb;} 				
	else if (pilihan=='t' || pilihan=='T'){goto selesai;}
	else {cout<< "Input yang Anda Masukkan Salah"<<endl;
	goto selesai;} 

ulangjwb :{	
benar=0;
salah=0; 
pass=0;
system("cls");
cout<<"1. Sebuah virus mirip dengan keluarga virus yang menyebabkan SARS (Severe Acute Respiratory\n   Syndrome) dan sejumlah influensa biasa adalah...\n\n";
string pilgan1[5]={"	a. COVID-19   ","	b. EBOLA","	c. H5N1","	d. MERS","	e. pass"};
for (i=0;i<=4;i++)
{cout<<pilgan1[i]<<"\n";}
	cout<<"Jawaban Anda : "; cin>>jawab[0];
	if(jawab[0] == opsi[0]) {benar++;}
	else if(jawab[0] == opsi[4]) {pass++;}
	else{salah++;}  
cout<<"==========================================================================\n\n";
        
cout<<"2. Tanda atau gejala infeksi virus corona yaitu seperti.....\n\n";
string pilgan2[5]={"	a. diare, batuk, dan pusing","	b. Keram, keseleo, dan pegal-pegal",
"	c.kulit pucat, gatal-gatal, dan panuan ","	d. demam, rasa lelah, dan batuk kering.","	e. pass"};
for (i=0;i<=4;i++)
{cout<<pilgan2[i]<<"\n";}
cout<<"Jawaban Anda : "; cin>>jawab[1]; 
	if(jawab[1] == opsi[3]) {benar++;}
	else if(jawab[1] == opsi[4]) {pass++;}
	else{salah++;}
cout<<"==========================================================================\n\n";    
  
cout<<"3. COVID-19 atau yang biasa disebut dengan virus Corona ini asal muasalnya dari....\n\n";
string pilgan3[5]={"	a. Kebocoran Lab di salah satu laboratorium China dan terjadi mutasi. ","	b. Orang yang memakan hewan terkontaminasi di Pasar Makanan Laut Cina  ","	c. Rekayasa Genetika Amerika Serikat ","	d. Limbah Pabrik di Wuhan, China","	e. pass"};
for (i=0;i<=4;i++)
{cout<<pilgan3[i]<<"\n";}
cout<<"Jawaban Anda : "; cin>>jawab[2];
	if(jawab[2] == opsi[1]) {benar++;}
	else if(jawab[2] == opsi[4]) {pass++;}
	else{salah++;}	
cout<<"==========================================================================\n\n";
				
cout<<"4. Berdasarkan hasil penelitian dari National Institute of Allergy and Infectious Diseases,\n   ukuran COVID-19 adalah......\n\n";
string pilgan4[5]={"	a. 120 hingga 200 nanometer   ","	b. 110 hingga 130 nanometer     ","	c. 120 hingga 160 nanometer","	d. 110 hingga 160 nanometer","	e. pass"};
for (i=0;i<=4;i++)
{cout<<pilgan4[i]<<"\n";}
cout<<"Jawaban Anda : "; cin>>jawab[3];
	if(jawab[3] == opsi[2]) {benar++;}
	else if(jawab[3] == opsi[4]) {pass++;}
	else{salah++;}   
cout<<"==========================================================================\n\n";  
     
cout<<"5. Dalam klasifikasinya, Orang yang memiliki gejala COVID-19 dinamakan.....\n\n";
string pilgan5[5]={"	a. ODP","	b. PDP","	c. Positive","	d. Negative","	e. pass"};
for (i=0;i<=4;i++)
{cout<<pilgan5[i]<<"\n";}
cout<<"Jawaban Anda : "; cin>>jawab[4];
	if(jawab[4] == opsi[0]) {benar++;}
	else if(jawab[4] == opsi[4]) {pass++;}
	else{salah++;}	
cout<<"==========================================================================\n\n";

cout<<"6. Virus Corona sangat cepat menyebar, oleh karena itu antisipasi masyarakat perlu ditingkatkan\n   Berikut ini cara memutus tali penularan covid-19, kecuali....\n\n";
string pilgan6[5]={"	a. Berdiam diri dirumah ","	b. Sering mencuci tangan","	c. Menutup telinga dikerumunan orang","	d. Memakai masker ketika keluar rumah","	e. pass"};
for (i=0;i<=4;i++)
{cout<<pilgan6[i]<<"\n";}
cout<<"Jawaban Anda : "; cin>>jawab[5];
	if(jawab[5] == opsi[2]) {benar++;}
	else if(jawab[5] == opsi[4]) {pass++;}
	else{salah++;}     	
cout<<"==========================================================================\n\n";

cout<<"7. Jika sebuah daerah pada awalnya termasuk zona hijau COVID-19, lalu menjadi merah karena\n   ada yang tertular dari tempat lain, maka hal yang paling tepat dilakukan oleh masyarakat\n   setempat yaitu....\n\n";
string pilgan7[5]={"	a. Menyuruh orang terjangkit untuk pergi ke zona merah kembali.","	b. Menghubungi petugas kesehatan setempat untuk diperiksa ditangani lebih lanjut.","	c. Memberikan semangat kepada korban yang terinfeksi ","	d. Menjauhi korban karena khawatir tertular.","	e. pass"};
for (i=0;i<=4;i++)
{cout<<pilgan7[i]<<"\n";}
cout<<"Jawaban Anda : "; cin>>jawab[6];
	if(jawab[6] == opsi[1]) {benar++;}
	else if(jawab[6] == opsi[4]) {pass++;}
	else{salah++;}	
cout<<"==========================================================================\n\n";

cout<<"8. Cuci tangan yang paling baik dilakukan dengan menggunakan sabun pada......\n\n";
string pilgan8[5]={"	a. Air hangat ","	b. Air panas ","	c. Air mengalir ","	d. Air dalam wadah   ","	e. pass"};
for (i=0;i<=4;i++)
{cout<<pilgan8[i]<<"\n";}
cout<<"Jawaban Anda : "; cin>>jawab[7];
	if(jawab[7] == opsi[2]) {benar++;}
	else if(jawab[7] == opsi[4]) {pass++;}
	else{salah++;}	
cout<<"==========================================================================\n\n";

cout<<"9. Suhu tubuh yang bisa diindikasikan sedang terjangkit penyakit termasuk COVID-19 yaitu.....\n\n";
string pilgan9[5]={"	a. 35 derajat celcius","	b. 36 derajat celcius ","	c. 37 derajat celcius","	d. 38 derajat celcius","	e. pass"};
for (i=0;i<=4;i++)
{cout<<pilgan9[i]<<"\n";}
cout<<"Jawaban Anda : "; cin>>jawab[8];
	if(jawab[8] == opsi[3]) {benar++;}
	else if(jawab[8] == opsi[4]) {pass++;}
	else{salah++;}	
cout<<"==========================================================================\n\n";

cout<<"10. Seperti yang kita ketahui, Korban virus Corona Sampai saat ini masih terus meningkat,\n    Oleh karena itu, kita sebagai masyarakat yang bijak sepatutnya tidak....\n\n";
string pilgan10[5]={"	a. Mengacuhkan arahan dari pemerintah","	b. Mengkampanyekan sosial distancing di media sosial","	c. Tetap berdiam diri dirumah","	d. Selalu berdoa agar virus ini dapat berakhir","	e. pass"};
for (i=0;i<=4;i++)
{cout<<pilgan10[i]<<"\n";}
cout<<"Jawaban Anda : "; cin>>jawab[9];
	if(jawab[9] == opsi[0]) {benar++;}
	else if(jawab[9] == opsi[4]) {pass++;}
	else{salah++;} 
cout<<"==========================================================================\n\n";

cout<<"==========================================================================\n";		
cout<<"\nKONFIRMASI JAWABAN ? [Y/T] : "; cin>>pilihan;cout<<"\n";
	if (pilihan=='y' || pilihan=='Y')
	{goto nilai;}
	if (pilihan!='y' || pilihan!='Y')
	{system("cls"); 
	goto ulangjwb;
	cout<<endl;}}

nilai :
system("cls");
header();	
cout<<"===============================================\n";
cout<<" No Soal   Jawaban yang dipilih   Kunci Jawaban\n";
cout<<"===============================================\n";
cout<<"   1	 	    "<<jawab[0]<<"			"<<opsi[0]<<endl;
cout<<"   2	 	    "<<jawab[1]<<"			"<<opsi[3]<<endl;
cout<<"   3	 	    "<<jawab[2]<<"			"<<opsi[1]<<endl;
cout<<"   4	 	    "<<jawab[3]<<"			"<<opsi[2]<<endl;
cout<<"   5	 	    "<<jawab[4]<<"			"<<opsi[0]<<endl;
cout<<"   6	 	    "<<jawab[5]<<"			"<<opsi[2]<<endl;
cout<<"   7	 	    "<<jawab[6]<<"			"<<opsi[1]<<endl;
cout<<"   8	 	    "<<jawab[7]<<"			"<<opsi[2]<<endl;
cout<<"   9	 	    "<<jawab[8]<<"			"<<opsi[3]<<endl;
cout<<"   10	 	    "<<jawab[9]<<"			"<<opsi[0]<<endl<<endl;

cout<<">>>>> Perolehan Nilai <<<<<\n"<<endl;
nilaibenar	= benar*10;
nilaisalah	= salah*5;
nilai		= nilaibenar-nilaisalah;
cout<<"    NAMA				: "<<user<<endl<<endl;
cout<<"    NIM					: "<<password<<endl<<endl;
cout<<"    JUMLAH SOAL YANG BENAR 		: "<<benar<<" soal \n\n";
cout<<"    JUMLAH SOAL YANG SALAH		: "<<salah<<" soal \n\n";
cout<<"    JUMLAH SOAL YANG TIDAK DIJAWAB	: "<<pass<<" soal \n\n";
cout<<"    NILAI ANDA   			: "<<nilai<<"\n\n";
	
selesai :
cout<<"\n                +=====================================+"<<endl;
cout<<"                |   TERIMAKASIH TELAH BERPARTISIPASI  |\n";
cout<<"                +=====================================+"<<endl;	
}
