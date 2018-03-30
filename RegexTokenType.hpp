#ifndef SWEET_LALR_REGEXTOKENTYPE_HPP_INCLUDED
#define SWEET_LALR_REGEXTOKENTYPE_HPP_INCLUDED

namespace sweet
{

namespace lalr
{
    
/*
// The type of a token.
//
// The %RegexTokenType enumeration is specified in order of increasing priority 
// so that states that can match both a literal and a regular expression 
// result in the literal being matched.
//
// @relates RegexToken
*/
enum RegexTokenType
{
    TOKEN_NULL,
    TOKEN_REGULAR_EXPRESSION,
    TOKEN_LITERAL
};

}

}

#endif