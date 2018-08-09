//=============================================================================
// �h���N���X[ultraman.h]
// Author : Yusuke Seki
//=============================================================================
#ifndef _ULTRAMAN_H_
#define _ULTRAMAN_H_

//---------- �C���N���[�h�t�@�C��
#include "main.h"
#include "pet.h"

//---------- �N���X�̒�`
class Ultraman : public Pet
{
public:
	// �R���X�g���N�^
	Ultraman():m_strName("������"){ std::cout << "�E���g���}���̃R���X�g���N�^" << std::endl; }
	Ultraman( const Ultraman& r ){ *this = r; }
	Ultraman( const std::string& strName ):m_strName(strName){}
	// �f�X�g���N�^
	~Ultraman(){ std::cout << "�E���g���}���̃f�X�g���N�^" << std::endl; }
	// �I�y���[�^�[
	void operator = ( const Ultraman& r ){ this->m_strName = r.m_strName + "�̃R�s�["; printf("�I�y���[�^�[\n"); }
	// ���̑�
	void SetName( std::string strName ){ m_strName = strName; }
	const std::string& GetName(void) const{ return m_strName; }
	void Play(void)override{ std::cout << "����l�l��������ł��ꂽ�W����" << std::endl; }
private:
	std::string m_strName;	// ���O
};

#endif
