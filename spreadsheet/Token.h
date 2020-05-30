#pragma once
#include <string>

class Token
{
public:
    enum class Type
    {
        Operator_Plus,
        Operator_Minus,
        Operator_Multiply,
        Operator_Divide,
        Operator_Pow,
        Operator_Equals,
        Number_i,
        Number_f,
        String,
        Identifier_R,
        Identifier_C
    };
private:
    Type _type;
    std::string _value;
public:
    Token(std::string value, Token::Type type);
    Type getType() const;
    std::string getValue() const;
};
