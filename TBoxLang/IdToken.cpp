#include "IdToken.h"



IdToken::IdToken(const int lineNumber, const QString& name) :Token(lineNumber), m_name(name)
{
}

IdToken::~IdToken()
{

}

const QString IdToken::GetText() const
{
	return m_name;
}
