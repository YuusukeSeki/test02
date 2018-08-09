//=============================================================================
// 基底クラス[pet.h]
// Author : Yusuke Seki
//=============================================================================
#ifndef _PET_H_
#define _PET_H_

//---------- インクルードファイル
#include "main.h"

//---------- クラスの定義
class Pet
{
public:
	virtual ~Pet(){}
	virtual void Play() = 0;
private:
};

#endif
