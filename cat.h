//=============================================================================
// [cat.h]
// Author : Yusuke Seki
//=============================================================================
#ifndef _CAT_H_
#define _CAT_H_

//*****************************************************************************
// �w�b�_�t�@�C��
//*****************************************************************************
#include "main.h"
#include <string>
#include <iostream>

//*****************************************************************************
// �N���X�̒�`
//*****************************************************************************
class Cat
{
private:
	std::string m_strName;	// ���O
public:
	Cat():m_strName("������"){ std::cout << "�R���X�g���N�^" << std::endl; }
	~Cat(){ std::cout << "�f�X�g���N�^" << std::endl; }
	Cat( const Cat& r ){ *this = r; }
	Cat( const std::string& strName ):m_strName(strName){}
	void SetName( std::string strName ){ m_strName = strName; }
	//void SetName( const std::string& strName );	// ����ȏ��������ł����
	const std::string& GetName(void) const{ return m_strName; }
	void operator = ( const Cat& r ){ this->m_strName = r.m_strName + "�̃R�s�["; printf("�I�y���[�^�[\n"); }
	void Play(void){ std::cout << "����l�l��������ł��ꂽ�j���`��" << std::endl; }
}

#endif
