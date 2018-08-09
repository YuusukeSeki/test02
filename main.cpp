//=============================================================================
// main�֐� [main.cpp]
// Author : Yusuke Seki
//=============================================================================
#include "main.h"
#include "human.h"
#include "cat.h"
#include "dog.h"
#include "ultraman.h"

//---------- �萔��`
static const int NUM_PET = 3;

//-----------------------------------------------------------------------------
// ���C���֐�
//-----------------------------------------------------------------------------
int main(void)
{
	// �I�u�W�F�N�g����
	Human*		pHuman			= new Human;
	Pet*		pPet[NUM_PET]	= { new Cat, new Dog, new Ultraman };

	// �V�΂���
	for( int i = 0; i < NUM_PET; i++ ){
		pHuman->SetPet( pPet[i] );
		pHuman->Play();
	}

	// �I�u�W�F�N�g�j��
	delete pHuman;
	for( int i = 0; i < NUM_PET; i++ ){
		delete pPet[i];
	}

	// ���͑҂�
	rewind(stdin);
	getchar();

	// ����I��
	return 0;
}
