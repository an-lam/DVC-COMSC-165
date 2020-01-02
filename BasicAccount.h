#ifndef   BASICACCOUNT_H
#define   BASICACCOUNT_H

#include <iostream>
#include <string>
class BasicAccount
{
  private:
    std::string m_username ;
    std::string m_password ;

  public:
    BasicAccount(std::string username, std::string password) :
       m_username(username), m_password(password)
    {
    }
    virtual std::string toString()
    {
      return "USERNAME(" + m_username + ") PASSWORD(" + m_password + ")" ;
    }
    virtual std::string getUserName()
    {
      return m_username ;
    }
} ;
#endif
