#include "Token.h"



const Token Token::TEOF = Token(-1);

const QString Token::TEOL = "\\n";

Token::Token(const int line)
{
	m_line = line;
}

Token::~Token()
{

}

const int Token::GetLineNumber() const
{
	return m_line;
}

const QString Token::GetText() const
{
	return "";
}
