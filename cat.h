//=============================================================================
// 派生クラス[cat.h]
// Author : Yusuke Seki
//=============================================================================
#ifndef _CAT_H_
#define _CAT_H_

//---------- インクルードファイル
#include "main.h"
#include "pet.h"

//---------- クラスの定義
class Cat : public Pet
{
public:
	// コンストラクタ
	Cat():m_strName("名無し"){ std::cout << "猫のコンストラクタ" << std::endl; }
	Cat( const Cat& r ){ *this = r; }
	Cat( const std::string& strName ):m_strName(strName){}
	// デストラクタ
	~Cat(){ std::cout << "猫のデストラクタ" << std::endl; }
	// オペレーター
	void operator = ( const Cat& r ){ this->m_strName = r.m_strName + "のコピー"; printf("オペレーター\n"); }
	// その他
	void SetName( std::string strName ){ m_strName = strName; }
	const std::string& GetName(void) const{ return m_strName; }
	void Play(void)override{ std::cout << "ご主人様があそんでくれたニャ〜ン" << std::endl; }
private:
	std::string m_strName;	// 名前
};

#endif
