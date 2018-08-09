//=============================================================================
// main関数 [main.cpp]
// Author : Yusuke Seki
//=============================================================================
#include "main.h"
#include "human.h"
#include "cat.h"
#include "dog.h"
#include "ultraman.h"

//---------- 定数定義
static const int NUM_PET = 3;

//-----------------------------------------------------------------------------
// メイン関数
//-----------------------------------------------------------------------------
int main(void)
{
	// オブジェクト生成
	Human*		pHuman			= new Human;
	Pet*		pPet[NUM_PET]	= { new Cat, new Dog, new Ultraman };

	// 遊ばせる
	for( int i = 0; i < NUM_PET; i++ ){
		pHuman->SetPet( pPet[i] );
		pHuman->Play();
	}

	// オブジェクト破棄
	delete pHuman;
	for( int i = 0; i < NUM_PET; i++ ){
		delete pPet[i];
	}

	// 入力待ち
	rewind(stdin);
	getchar();

	// 正常終了
	return 0;
}
