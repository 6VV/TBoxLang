#ifndef _NUM_TOKEN_H_
#define _NUM_TOKEN_H_

#include "Token.h"

class NumToken:public Token
{
protected:
	NumToken(const int lineNum,const int value);
	~NumToken();
	
public:
	const int GetValue() const;
	const virtual QString GetText() const override;

private:
	int m_value;
};

#endif