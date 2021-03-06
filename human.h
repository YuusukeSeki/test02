//=============================================================================
// human class [human.h]
// Author : Yusuke Seki
//=============================================================================
#ifndef _HUMAN_H_
#define _HUMAN_H_

//---------- インクルードファイル
#include "main.h"
#include "pet.h"

//---------- クラスの定義
class Human
{
public:
	Human(){}
	Human( Pet* pPet ) : m_pPet( pPet ){}
	void SetPet( Pet* pPet ){ m_pPet = pPet; }
	void Play(){ m_pPet->Play(); }
private:
	Pet* m_pPet;
};

#endif
