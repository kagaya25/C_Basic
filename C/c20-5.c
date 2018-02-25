/*
 ============================================================================
 Name        : c20-5.c
 Author      : john
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/* ヘッダファイル -------------------------------------------------------- */
#include <stdio.h>
/* 記号定数(マクロ) ---------------------------------------------------- */
#define COL 3
/* プロトタイプ宣言 ------------------------------------------------------ */
void Disp(int data[][COL], int row);
/* エントリポイント Disp 関数の動作チェック ------------------------------ */
int main(void) {
int test[][COL] = {
{ 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
Disp(test, 3); printf("\n");
Disp(test, 2); printf("\n");
Disp(test, 1);
return 0; }
/* ----------------------------------------------------------------------- */
/* 関数名:Disp */
/* 機 能:引数で指定された int 型二次元配列の内容を出力する */
/* 戻り値:なし */
/* 引 数:・int data[][COL] :二次元配列の先頭アドレス */
/* ・int row :出力する行数 */
/* ----------------------------------------------------------------------- */
void Disp(int data[][COL], int row) {
int i, j;
for ( i = 0 ; i < row ; i++ ) {
for ( j = 0 ; j < COL ; j++ ) {
printf("%3d", data[i][j]); }
printf("\n");

}

}