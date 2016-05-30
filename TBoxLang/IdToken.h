#ifndef _ID_TOKEN_H_
#define _ID_TOKEN_H_

#include "Token.h"

class IdToken:public Token
{
protected:
	IdToken(const int lineNumber,const QString& name);
	~IdToken();

public:
	const virtual QString GetText() const override;

private:
	QString m_name;
};

#endif