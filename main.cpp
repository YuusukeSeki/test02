//=============================================================================
// main�֐� [main.cpp]
// Author : Yusuke Seki
//=============================================================================
#include "main.h"
#include "cat.h"
#include "human.h"
#include <iostream>
#include <string>

//=============================================================================
// ���C���֐�
//=============================================================================
int main(void)
{
	// Cat ���̐�

	Cat		a("�^�}");
	Cat*	p = new Cat;
	Cat		b( a );
	Cat		c = b;

	// ���̔j��
	delete p;
	p = NULL;

	std::cout << b.GetName() << std::endl;
	std::cout << c.GetName() << std::endl;

	a.Play();

	//Human humanA;
	//humanA.Play( &a );

//	std::string* strName = cat.strName.c_str();	// const char�^�̃|�C���^�[��Ԃ�l�Ƃ��ēn���֐�

	// ���͑҂�
	rewind(stdin);
	getchar();

	// ����I��
	return 0;
}
