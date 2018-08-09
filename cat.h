//=============================================================================
// [cat.h]
// Author : Yusuke Seki
//=============================================================================
#ifndef _CAT_H_
#define _CAT_H_

//*****************************************************************************
// ヘッダファイル
//*****************************************************************************
#include "main.h"
#include <string>
#include <iostream>

//*****************************************************************************
// クラスの定義
//*****************************************************************************
class Cat
{
private:
	std::string m_strName;	// 名前
public:
	Cat():m_strName("名無し"){ std::cout << "コンストラクタ" << std::endl; }
	~Cat(){ std::cout << "デストラクタ" << std::endl; }
	Cat( const Cat& r ){ *this = r; }
	Cat( const std::string& strName ):m_strName(strName){}
	void SetName( std::string strName ){ m_strName = strName; }
	//void SetName( const std::string& strName );	// こんな書き方もできるよ
	const std::string& GetName(void) const{ return m_strName; }
	void operator = ( const Cat& r ){ this->m_strName = r.m_strName + "のコピー"; printf("オペレーター\n"); }
	void Play(void){ std::cout << "ご主人様があそんでくれたニャ～ン" << std::endl; }
}

#endif
