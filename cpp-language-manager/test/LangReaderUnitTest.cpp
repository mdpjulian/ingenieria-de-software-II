#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include <catch.hpp>
#include <LangReader.hpp>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**@test ${1:LangReader create instance
 *
 */

TEST_CASE( "Correct getValueOf of .lang file without Section", "[LangReader getValueOf]" ) 
{
    // Arrange
    LangReader* lr = new LangReader();

    // Act
   	lr->open("./resources/test.lang");
	string greet = lr->getValueOf("greet");
	string greet2 = lr->getValueOf("greet2");
	string greet3 = lr->getValueOf("greet3");

    // Assert
    REQUIRE( greet == "¡Hola Ñoños!" );
    REQUIRE( greet2 == "¡Hola Mundo Cruel?" );
    REQUIRE( greet3 == "¡Hola Amigos &&&&" );
}