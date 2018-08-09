//=============================================================================
// �h���N���X[dog.h]
// Author : Yusuke Seki
//=============================================================================
#ifndef _DOG_H_
#define _DOG_H_

//---------- �C���N���[�h�t�@�C��
#include "main.h"
#include "pet.h"

//---------- �N���X�̒�`
class Dog : public Pet
{
public:
	// �R���X�g���N�^
	Dog():m_strName("������"){ std::cout << "���̃R���X�g���N�^" << std::endl; }
	Dog( const Dog& r ){ *this = r; }
	Dog( const std::string& strName ):m_strName(strName){}
	// �f�X�g���N�^
	~Dog(){ std::cout << "���̃f�X�g���N�^" << std::endl; }
	// �I�y���[�^�[
	void operator = ( const Dog& r ){ this->m_strName = r.m_strName + "�̃R�s�["; printf("�I�y���[�^�[\n"); }
	// ���̑�
	void SetName( std::string strName ){ m_strName = strName; }
	const std::string& GetName(void) const{ return m_strName; }
	void Play(void)override{ std::cout << "����l�l��������ł��ꂽ����" << std::endl; }
private:
	std::string m_strName;	// ���O
};

#endif
