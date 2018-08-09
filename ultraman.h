//=============================================================================
// 派生クラス[ultraman.h]
// Author : Yusuke Seki
//=============================================================================
#ifndef _ULTRAMAN_H_
#define _ULTRAMAN_H_

//---------- インクルードファイル
#include "main.h"
#include "pet.h"

//---------- クラスの定義
class Ultraman : public Pet
{
public:
	// コンストラクタ
	Ultraman():m_strName("名無し"){ std::cout << "ウルトラマンのコンストラクタ" << std::endl; }
	Ultraman( const Ultraman& r ){ *this = r; }
	Ultraman( const std::string& strName ):m_strName(strName){}
	// デストラクタ
	~Ultraman(){ std::cout << "ウルトラマンのデストラクタ" << std::endl; }
	// オペレーター
	void operator = ( const Ultraman& r ){ this->m_strName = r.m_strName + "のコピー"; printf("オペレーター\n"); }
	// その他
	void SetName( std::string strName ){ m_strName = strName; }
	const std::string& GetName(void) const{ return m_strName; }
	void Play(void)override{ std::cout << "ご主人様があそんでくれたジュワ" << std::endl; }
private:
	std::string m_strName;	// 名前
};

#endif
