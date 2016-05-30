#ifndef _TOKEN_H_
#define _TOKEN_H_

#include "QString"

class Token
{
public:
	static const Token TEOF;
	static const QString TEOL;

protected:
	Token(const int line);
	virtual ~Token();

public:
	const int GetLineNumber() const;
	const virtual QString GetText() const;

private:
	int m_line=0;

};

#endif