//=============================================================================
// ���N���X[pet.h]
// Author : Yusuke Seki
//=============================================================================
#ifndef _PET_H_
#define _PET_H_

//---------- �C���N���[�h�t�@�C��
#include "main.h"

//---------- �N���X�̒�`
class Pet
{
public:
	virtual ~Pet(){}
	virtual void Play() = 0;
private:
};

#endif
