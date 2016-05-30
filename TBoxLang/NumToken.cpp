#include "NumToken.h"



NumToken::NumToken(const int lineNum, const int value) :Token(lineNum), m_value(value)
{
}

NumToken::~NumToken()
{

}

const int NumToken::GetValue() const
{
	return m_value;
}

const QString NumToken::GetText() const
{
	return QString::number(m_value);
}
