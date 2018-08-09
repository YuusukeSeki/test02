//=============================================================================
// 派生クラス[dog.h]
// Author : Yusuke Seki
//=============================================================================
#ifndef _DOG_H_
#define _DOG_H_

//---------- インクルードファイル
#include "main.h"
#include "pet.h"

//---------- クラスの定義
class Dog : public Pet
{
public:
	// コンストラクタ
	Dog():m_strName("名無し"){ std::cout << "犬のコンストラクタ" << std::endl; }
	Dog( const Dog& r ){ *this = r; }
	Dog( const std::string& strName ):m_strName(strName){}
	// デストラクタ
	~Dog(){ std::cout << "犬のデストラクタ" << std::endl; }
	// オペレーター
	void operator = ( const Dog& r ){ this->m_strName = r.m_strName + "のコピー"; printf("オペレーター\n"); }
	// その他
	void SetName( std::string strName ){ m_strName = strName; }
	const std::string& GetName(void) const{ return m_strName; }
	void Play(void)override{ std::cout << "ご主人様があそんでくれたワン" << std::endl; }
private:
	std::string m_strName;	// 名前
};

#endif
