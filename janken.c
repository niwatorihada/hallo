/*********************************************
学生番号：344658
氏名：杉原　功一郎
janken.c
コンピュータと寂しくじゃんけんするプログラム
*********************************************/
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int cp_te,hyum_te;
	int random;
	int i;
	
	srand(time(0));
	
	printf("〜ルール説明〜\n\
これはコンピュータと寂しくじゃんけんする一人用のゲームです\n\
「じゃんけん」の合図でグーなら０をチョキなら１をパーなら２を\
入力してください\n\
出した手が同じなら「あいこで…」と続きます\nplease enter\n");
	
	
	getchar();
	
	printf("じゃんけん…");
	
	for(i=0;;i++)
	{
		scanf("%d",&hyum_te);
		random = rand();
		cp_te = random % 3;
		
		if(i==0) 
		{  
			printf("ぽん!!\n");
		}
		else
		{
			printf("しょ!!\n");
		}
		
		printf("あなたの手：");
		
		if(hyum_te == 0)
		{
			printf("グー");
		}
		else if(hyum_te == 1)
		{
			printf("チョキ");
		}
		else if(hyum_te == 2)
		{
			printf("パー");
		}
		else
		{
			printf("必殺!グーチョキパー");
		}
		
		printf("\t");
		
		if(cp_te == 0)
		{
			printf("グー");
		}
		else  if(cp_te == 1)
		{
			printf("チョキ");
		}
		else
		{
			printf("パー");
		}
		
		printf("：コンピュータの手\n\n");
		
		if(cp_te == hyum_te || !(hyum_te>=0 && hyum_te<=2))
		{
			printf("あいこで…");
		}
		else if((cp_te==hyum_te-1 && hyum_te!=0) || (cp_te==2 && hyum_te==0))
		{
			printf("あなたの負けです!!またよろしくお願いします。\n");
			break;
		}
		else if((hyum_te==cp_te-1 && cp_te!=0) || (hyum_te==2 && cp_te==0))
		{
			printf("あなたの勝ちです!!次は負けません!!\n");
			break;
		}
	}
	
	exit(0);
}
