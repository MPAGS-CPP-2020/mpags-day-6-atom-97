#ifndef MPAGSCIPHER_EXCEPTIONS_HPP
#define MPAGSCIPHER_EXCEPTIONS_HPP
#include <stdexcept>
#include <string>

/**  
 *\file Exceptions.hpp
 *\brief Constains the declaration of the exception classes used by processCmdLine and ciphers
 */

/**
 * \class MissingArgument 
 * \brief Exception to be thrown when an argument was missing in the command line input
 */

class MissingArgument : public std::invalid_argument {
    public:
        MissingArgument( const std::string& msg ) : std::invalid_argument(msg) {}
};

/**
 * \class UnknownArgument 
 * \brief Exception to be thrown when an unknwon argument was provided in the command line input
 */

class UnknownArgument : public std::invalid_argument{
    public:
        UnknownArgument( const std::string& msg ) : std::invalid_argument(msg) {}
};

/**
 * \class InvalidKey 
 * \brief Exception to be thrown when an invlaid argument was provided as a cipher key
 */

class InvalidKey : public std::invalid_argument {
    public:
        InvalidKey( const std::string& msg ) : std::invalid_argument(msg) {}
}; 
#endif