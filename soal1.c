/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 * Modul               : 5 -Foundation of Algorithm
 * Hari dan Tanggal    : Senin, 11 Mei 2026
 * Nama (NIM)          : Aqilah Safitri Sjarif (13224050)
 * Nama File           : soal1.c
 * Deskripsi           : Membuat graph dalam bentuk matriks meggunakan array
 * menghitung total derajat simpul tiap vertice
 * menentukan simpul terbanyak dari tiap vertice sesuai kondisi
 * menghitung simpul yang terisolasi
 */

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int matrix[N][N];
    int degree[N];
    int max_degree = 0;
    int max_vertex = 0;
    int isolated = 0;

    for (int i = 0; i < N; i++) {
        degree[i] = 0;}
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &matrix[i][j]);
            degree[i] = degree[i]+ matrix[i][j];}

    if (degree[i] > max_degree) {
                max_degree = degree[i];
                max_vertex = i;
            }}
    for (int i =0; i <N; i++){
    printf("DEGREE %d %d\n",i, degree[i]);
}

    printf("MAX_VERTEX %d", max_vertex);
    
    if(isolated ==0){
        printf("ISOLATED NONE\n");}
    else{
    printf("ISOLATED\n");}
    for (int i = 0; i < N; i++) {
        if (degree[i] == 0) {
            printf(" %d", i);
            isolated++;}}
    
    return 0;
}
