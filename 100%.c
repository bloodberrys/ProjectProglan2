#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#define size 30
#define size2 30

//declaration of everything
float saldo = 0;
int tambahsaldo = 0;
float saldo2 = 0;
char con='0';
float tunggal[1000];
int anuitas = 0;
int bunga = 0;
int angsuran = 0;
int i,j,k;
float jumlahbunga =0;
float simpan_array[size][size2]={};
float simpan_array2[size][size2]={};
float arraydimensidua[size][size2]={};
int elemen=0;
int parameter=0;
float baru[size] = {};
int baris,parameterbaris;
float simpanpny1[size]={};
float simpanpny2[size]={};
float temp;
int size3= 0;
//variable input
int pinjaman[100] = {500000};

float bunga_persen = 5;
float bunga_p = 10;
    int hitung = 0;
    //user input
    int bulan = 15;

    int bunga;


float penyusutan(float bunga, float hargabarang, float periode){
 float pny;
 return pny=hargabarang*(bunga/100)*pow((1-bunga/100),periode);
}

float penyusutan2(float bunga2,float hargabarang2, float periode2){
 float pny2;
 return pny2=hargabarang2*(1-(periode2*bunga2/100));
}




//Bunga Majemuk
float mop(float b, float n, float mo){
float m;

m = mo * pow((1+(b/100)),n);
return m;

}
//Bunga Tunggal
float mop2(float b1, float n1, float mo2){
float m2;

m2=mo2*(1+(b1/100)*n1);
return m2;
}
//Penyusutan Besar Nilai Buku dan Nilai Barangnya
float pen(float p1, float n2,float mo3){
float p;

p=(p1/100)*mo3 * pow(1-(p1/100),n2-1);
return p;
}
float men(float p2, float n3,float mo4){
float m3;

m3=mo4* pow(1-(p2/100),n3);
return m3;
}
//Penyusutan Besar Harga Beli dan Nilai Barangnya
float pen1(float p3,float mo5){
float p1;

p1=(p3/100)*mo5;
return p1;
}

float men1(float p4, float n4,float mo6){
float m4;

m4=mo6*(1-(n4*(p4/100)));
return m4;
}
//Anuitas
float a1(float b,float n5,float mo7){
float x;
x=mo7*(b/100)/pow (1-(1+b/100),n5);

return x;
}
//Rencana Pelunasan Angsuran dan Sisa Pinjaman
float a2(float an,float bn,float b,float mo8){
float c;
float an1;
float m1;

an1=c-bn;
an1=c-(b/100)*mo8;
m1=mo8-c;

return m1;
}

void ui_samadengan(){
printf("=======================================================================================================================\n");

}

void ui_garis(){
printf("-----------------------------------------------------------------------------------------------------------------------\n");
}

void ui_welcome(){
int m;
double n;
char welcome[]= "\t\t\t\t\t\tWELCOME TO OUR PROJECT!\t\t\t\t\t\t\t\t\t\t";


printf("\n\n\n\n\n\n\n\n\n\n\n");
for(m=0;welcome[m]!=NULL;m++){
    printf("%c",welcome[m]);
    for(n=0;n<=9999999;n++){}
}


}
void ui_proghead(){


ui_samadengan();
for(i=0;i<34;i++){
printf(" ");
}
printf("SISTEM KOMPUTASI TABUNGAN DAN RENCANA PELUNASAN ANGSURAN \n");
for(i=0;i<38;i++){
printf(" ");
}
printf("DEPARTEMEN TEKNIK ELEKTRO UNIVERSITAS INDONESIA\n");
for(i=0;i<22;i++){
printf(" ");
}
printf("Programmed by Alfian Firmansyah (1706985874) dan Fahri Alamsyah (1706985943)\n");
ui_garis();
}

void ui_saldo(){
printf("\n    .====================.\n");
printf("    |     ISI SALDO      |\n");
printf("    '===================='\n\n\n");
}

void ui_info(){
    printf("\n");
printf("    .=========================.\n");
printf("    |    INFORMASI SALDO      |\n");
printf("    '========================='\n\n\n");
}

void ui_angsuran(){
  printf("\n");
printf("    .====================================.\n");
printf("    |    PEMBAYARAN MELALUI ANGSURAN     |\n");
printf("    '===================================='\n\n\n");

}

void ui_tabungan(){
 printf("\n");
printf("    .=========================.\n");
printf("    |        TABUNGAN         |\n");
printf("    '========================='\n\n\n");

}

void ui_tentangprogram(){
 printf("\n");
printf("    .=========================.\n");
printf("    |    TENTANG PROGRAM      |\n");
printf("    '========================='\n\n\n");

}

void keluar(){
system("cls");
int m;
double n;
char welcome[]= "\t\t\t\t\t  Anda Berhasil Keluar Dari Program!\t\t\t\t\t\t\t\t\t\t";

system("cls");
printf("\n\n\n\n\n\n\n\n\n");
for(m=0;welcome[m]!=NULL;m++){
    printf("%c",welcome[m]);
    for(n=0;n<=9999999;n++){
}
}
flashload();

}

void flashload(){

printf("\n");
printf("\t\t\t\t\t\t\t     ^\n");Sleep(40);
printf("\t\t\t\t\t\t\t    ^^^\n");Sleep(40);
printf("\t\t\t\t\t\t\t   ^^^^^\n");Sleep(40);
printf("\t\t\t\t\t\t\t  ^^^^^^^         THANK YOU..\n");Sleep(40);
printf("\t\t\t\t\t\t\t   ^^^^^          \n");Sleep(40);
printf("\t\t\t\t\t\t\t    ^^^           FOR\n");Sleep(40);
printf("\t\t\t\t\t\t\t     ^            USING\n");Sleep(40);
printf("\t\t\t\t\t\t\t    ^^^           OUR\n");Sleep(40);
printf("\t\t\t\t\t\t\t   ^^^^^          PROGRAM\n");Sleep(40);
printf("\t\t\t\t\t\t\t  ^^^^^^^         :)\n");Sleep(40);
printf("\t\t\t\t\t\t\t   ^^^^^\n");Sleep(40);
printf("\t\t\t\t\t\t\t    ^^^\n");Sleep(40);
printf("\t\t\t\t\t\t\t     ^\n");Sleep(40);

}




void tabungan(){
system("cls");
ai:
ui_tabungan();
printf("  | 1 | Tabungan Bunga Tunggal\n\n  | 2 | Tabungan Bunga Majemuk\n\n  | 3 | Besar Penyusutan\n\n  | 4 | Kembali ke Menu\n\n ");
printf("  Pilihan Anda: ");
char v='0';
scanf(" %c", &v);
switch(v){
 case '1':
  system("cls");
  ui_tabungan();
  printf("\n\n  Bunga tunggal :\n\n");
float periode = 0;
printf("  Modal Awal Anda: Rp. %0.2f\n",saldo);
printf("  Periode:");
scanf("%f",&periode);


for(i=0;i<periode;i++){
    printf("\n  Rp. %0.2f\n",mop2(5,i+1,saldo));
  		
    
		


}
printf("\n\n");
elemen=i;
int baris,parameterbaris;
baris = elemen/5;
parameterbaris = elemen%5;

if(parameterbaris>0){
	baris++;

} 


j=0;
int size3= 0;
for(k=0;k<1;k++){
	

		for(j=size3;j<size3+5;j++){
	simpan_array[k][j]= mop2(5,j+k+1,saldo);
	}


}

for(k=1;k<2;k++){
		for(j=size3;j<size3+5;j++){
	simpan_array[k][j]= mop2(5,j+k+5,saldo);
	}
	
}

for(k=2;k<3;k++){
		for(j=size3;j<size3+5;j++){
	simpan_array[k][j]= mop2(5,j+k+9,saldo);
	}
	
}


for(k=3;k<4;k++){
		for(j=size3;j<size3+5;j++){
	simpan_array[k][j]= mop2(5,j+k+13,saldo);
	}
	
}

printf("  MATRIKS BUNGA: \n\n");
//printf(" %0.2f\t", simpan_array[0][0]-saldo);
parameter=0;
for(i=0;i<3;i++){
	for(j=0;j<5;j++){
		if (parameter >11){
			printf("");
		}
		else{
		
	printf(" %0.2f\t", simpan_array[i][j]-saldo);
	jumlahbunga+=simpan_array[i][j]-saldo;
}
	
	parameter ++;
	
}
printf("\n");
}
elemen=0;
baris=0;
parameterbaris=0;


printf("\n  Rata-rata bunga Anda: Rp. %0.2f",jumlahbunga/periode);
printf("\n\n  Tabungan Anda sekarang: Rp. %0.2f\n",mop2(5,periode,saldo));
printf("  Tekan apapun untuk kembali.");
jumlahbunga=0;
getch();
return tabungan();
break;
case '2':
 system("cls");
 ui_tabungan();
 printf("  Bunga Majemuk:\n\n\n");
 printf("  Periode:");
scanf(" %f",&periode);
printf("  Modal Awal Anda: Rp. %0.2f\n",saldo);
printf("  Periode:");
for(i=0;i<periode;i++){
    printf(" Rp. %0.2f\n",mop(5,i+1,saldo));
}
printf("\n\n");
baris=0;
elemen=i;
baris = elemen/5;
parameterbaris = elemen%5;


if(parameterbaris>0){
	baris++;
} 


j=0;
size3= 0;
for(k=0;k<1;k++){
	

		for(j=size3;j<size3+5;j++){
	simpan_array2[k][j]= mop(5,j+k+1,saldo);
	}


}

for(k=1;k<2;k++){
		for(j=size3;j<size3+5;j++){
	simpan_array2[k][j]= mop(5,j+k+5,saldo);
	}
	
}

for(k=2;k<3;k++){
		for(j=size3;j<size3+5;j++){
	simpan_array2[k][j]= mop(5,j+k+9,saldo);
	}
	
}


for(k=3;k<4;k++){
		for(j=size3;j<size3+5;j++){
	simpan_array2[k][j]= mop(5,j+k+13,saldo);
	}
	
}


jumlahbunga = 0;
printf("  MATRIKS BUNGA: \n\n");
//printf(" %0.2f\t", simpan_array[0][0]-saldo);
parameter=0;
for(i=0;i<3;i++){
	for(j=0;j<5;j++){
		if (parameter >11){
			printf("");
		}
		else{
		
	printf(" %0.2f\t", simpan_array2[i][j]-saldo);
	jumlahbunga+=simpan_array2[i][j]-saldo;
}
	
	parameter ++;
	
}
printf("\n");
}
elemen=0;
baris=0;
parameterbaris=0;


printf("\n  Rata-rata bunga Anda: Rp. %0.2f",jumlahbunga/periode);
printf("\n\n  Tabungan Anda sekarang: Rp. %0.2f\n",mop(5,periode,saldo));
printf("  Tekan apapun untuk kembali.");

printf("  Tekan apapun untuk kembali.");
getch();
return tabungan();

break;
case '3':
	system("cls");
	 int pe = 0;
 float p = pe *1;
 int i;
 printf("Periode: ");
 scanf("%d",&pe);
 
 printf("Penyusutan Nilai buku sampai periode ke-%d:\n",pe);
 
 for(i=0;i<pe;i++){
  printf("ke-%d: Rp. %0.2f\n",i+1,penyusutan(bunga_p,mop(bunga_p,pe,saldo),i+1));
  simpanpny1[i]=penyusutan(bunga_p,mop(bunga_p,pe,saldo),i+1);
  
 }
 
 printf("\nPenyusutan Harga beli sampai periode ke-%d:\n",pe);
 
 for(i=0;i<pe;i++){
  printf("ke-%d: Rp. %0.2f\n",i+1,penyusutan2(bunga_p,mop(bunga_p,pe,saldo),i+1));
  }
  
for(i=0;i<pe;i++)
simpanpny1[i+pe]=penyusutan2(bunga_p,mop(bunga_p,pe,saldo),i+1);
 	
	
printf("  Tekan apapun untuk melanjutkan.");
getch();
system("cls");
printf("  Data Penyusutan setelah di urutkan:\n\n");
for(i=0;i<pe*2;i++){
	for(j=i;j<pe*2;j++){
		if(simpanpny1[j]<simpanpny1[j+pe]){
			temp = simpanpny1[j];
			simpanpny1[j]=simpanpny1[j+pe];
			simpanpny1[j+pe] = temp;
		}
		
		
	}
	
}
for(i=0;i<pe*2;i++){
	printf("  Rp. %0.2f\n",simpanpny1[i]);
}

printf("\n  Nilai min = Rp. %0.2f\n",simpanpny1[(pe*2)-1]);
printf("  Nilai max = Rp. %0.2f\n",simpanpny1[0]);
getch();
return tabungan();
	break;
	case '4':
		
		return menu();
		
default:
printf("  Salah, silahkan ulangi kembali.");
Sleep(1000);
system("cls");
goto ai;
}




}


void menu(){
    system("cls");
    system("color 1E");
char switch1='0';
ui_proghead();

printf("\n  .===============.\n");
printf("  |     MENU      |\n");
printf("  '==============='\n\n\n");

printf("  | 1 | Isi Saldo Rekening Anda\n\n  | 2 | Informasi Saldo\n\n  | 3 | Tabungan\n\n  | 4 | Pembayaran melalui Angsuran\n\n  | 5 | Tentang Program\n\n  | 6 | Keluar\n\n ");
printf("  Pilihan: ");
scanf("%c",&switch1);
switch(switch1){
case '1':
    system("cls");
    ui_saldo();
    if (saldo!=0){
     salah:
       printf("\n\n\n\n\n\t\t\t\t\t  Saldo Anda    : Rp. %0.2f \n",saldo);
       printf("\n\n\n\n\n\t\t\t\t\t  Tambah Saldo?");
       printf(" Ketik Y/T : ");
       scanf(" %c",&con);
       printf("\n");
       if(con == 'Y' || con == 'y'){
        system("cls");
        ui_saldo();
        tambahsaldo = 1;
       goto to;
        }
        if(con == 'T' || con == 't'){
            printf("  Tekan enter untuk kembali ke menu awal.");
            getch();
            return menu();
            break;
        }
        else{
         printf("  Salah!");
         Sleep(1000);
         goto salah;
  }
    }

    to:
    system("cls");
    ui_saldo();
    printf("\n\n\n\n\n\t\t\t\t\t  MASUKKAN NOMINAL SALDO: ");

    if(tambahsaldo == 1){
    scanf("%f",&saldo2);
    saldo = saldo + saldo2;

    printf("\n  Saldo sudah ditambahkan!");
    Sleep(1000);
    return menu();
    }
    else{
        scanf("%f",&saldo);
        if(saldo<50000){
            printf("\n\n\t\t  Saldo tidak boleh kurang dari Rp, 50000,00\n");
            Sleep(1000);
            system("cls");
            goto to;

        }
        else{
    printf("\n  Saldo sudah ditambahkan!");
    Sleep(1000);
    return menu();
        }
    }
    break;
case '2':
    system("cls");
    ui_info();

if(saldo != 0){
        printf("\n\n\n\n\n\t\t\t\t\t  Saldo Anda    : Rp. %0.2f \n",saldo);
        printf("\n\n\n  Tekan apapun untuk kembali.");
        getch();
        return menu();
}
else{
    printf("\n\n\n\n\n\t\t\t\t\t  Saldo Anda    : Rp. %0.2f \n",saldo);
        printf("\n\n\n  Keterangan: Segera isi saldo Anda! (Tekan apapun untuk kembali).");
        getch();
        return menu();
}

    break;
    case '3':
    tabungan();
    break;
    case '4':

 system("cls");

 ui_angsuran();

 hitung = 0;
 printf("\n\n\n\n\n\t\t\t\t\t  Masukkan Nominal Pinjaman: ");
 scanf("  %d",&pinjaman[0]);
 system("cls");
 ui_angsuran();
 
    anuitas = (bunga_persen/100 * pinjaman[0])/(1 - pow((1 + bunga_persen/100), - bulan));

    printf("  Anuitas : %d\n\n", anuitas);
printf("     .-------------------------------------------------------.\n");
printf("     | Nomor    |   Modal      | Bunga | Tetapan  | Sisa     |\n");
printf("     | Angsuran |  Pinjaman    | BANK  | Angsuran | Pinjaman |\n");
    while (pinjaman[hitung]>0){
           hitung++;

           bunga = pinjaman[hitung - 1]*0.05;
           angsuran=anuitas-bunga;
printf("\n        %d",hitung);
         

     printf("\t   %d",pinjaman[hitung - 1]);
     printf("\t%d",bunga);
	 printf("\t  %d",angsuran);
     printf("    %d",pinjaman[hitung - 1] - angsuran);
    // printf("\t",pinjaman[hitung - 1] - angsuran);
           pinjaman[hitung] = pinjaman[hitung - 1] - angsuran;
      


    }

    printf("\n  Pinjaman anda telah lunas setelah %d", hitung);printf(" bulan dengan kembalian sebesar %d", -1*(pinjaman[hitung - 1]-angsuran));
 	getch();
 	return menu();
    break;
    case '5':
    system("cls");
    
    ui_tentangprogram();
    
	printf("Bunga Tunggal = Jika Sebuah modal sebesar M disimpan di bank (dipinjamkan)\n\n dengan bunga tunggal sebesar b dalam suatu periode (yang telah disepakati) \n\n");
	printf("Bunga majemuk = bunga yang dibebankan untuk setiap periode didasarkan pada modal/pinjaman\n\n pokok ditambah setiap beban bunga yang terakumulasi sampai dengan awal periode  \n\n");
	printf("Anuitas = serangkaian pembayaran pinjaman dengan jumlah yang sama dalam periode waktu yang sama pula \n\n");
	printf("Rencana Pelunasan Angsuran = Menggunakan anuitas untuk melunasi angsuran yang ada  \n\n");
	printf("  Kembali ke Menu\n");
   	getch();
 	return menu();
    break;
    case '6':
    keluar();
    break;
    default:
    printf("  Ulangi pilihan Anda!");
    Sleep(500);

    return menu();

}

}


int main(){
system("cls");
ui_welcome();


menu();

return 0;
}






