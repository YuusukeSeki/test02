//=============================================================================
// main関数 [main.cpp]
// Author : Yusuke Seki
//=============================================================================
#include "main.h"
#include "cat.h"
#include "human.h"
#include <iostream>
#include <string>

//=============================================================================
// メイン関数
//=============================================================================
int main(void)
{
	// Cat 実体生

	Cat		a("タマ");
	Cat*	p = new Cat;
	Cat		b( a );
	Cat		c = b;

	// 実体破棄
	delete p;
	p = NULL;

	std::cout << b.GetName() << std::endl;
	std::cout << c.GetName() << std::endl;

	a.Play();

	//Human humanA;
	//humanA.Play( &a );

//	std::string* strName = cat.strName.c_str();	// const char型のポインターを返り値として渡す関数

	// 入力待ち
	rewind(stdin);
	getchar();

	// 正常終了
	return 0;
}
