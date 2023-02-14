#include<stdio.h>
#include<string.h>
#define MAXLEN 255
int main(){
    
    FILE * absen = NULL;
    absen=fopen("absen.txt", "w");
    if(absen==NULL){
        printf("error, file not created");
        return 0;
    }
    fputs("Name,NIM\n", absen);
    int jumlah_mhs;
    int namaNum=1;
    printf("Masukkan jumlah mahasiswa: ");
    char tempName[20];
    char tempNIM[10];
    char *tempCombined;
    scanf("%d", &jumlah_mhs);
    while(jumlah_mhs>0){
        printf("Nama Mahasiswa ke-%d: ", namaNum);
        scanf("%s",&tempName);
        printf("NIM Mahasiswa ke-%d: ", namaNum);
        scanf("%s", &tempNIM);
        tempCombined=strcat(tempName, ",");
        tempCombined=strcat(tempCombined,tempNIM);
        tempCombined=strcat(tempCombined, "\n");
        printf("%s\n",tempCombined);
        printf("\n");
        fputs(tempCombined,absen);
        namaNum=namaNum+1;
        jumlah_mhs=jumlah_mhs-1;
    };
    fclose(absen);
    printf("File 'absen.txt' berhasil dibuat!");
    return 0;
}