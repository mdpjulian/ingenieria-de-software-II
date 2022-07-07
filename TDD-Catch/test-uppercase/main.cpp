#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include <catch.hpp>
#include <iostream>
#include <cctype>
#include <string>

class NameNormalizer{  
    public:
        NameNormalizer(){}
        ~NameNormalizer(){}
        std::string FirstLetterUpperCase(std::string name){
            std::string result;
            result.push_back((char)toupper(name[0]));

            for(int i = 1; i < name.size(); i++){
               result.push_back( name[i] );
               if(toupper(name[i]) == 32){
                   result.push_back((char)toupper(name[i + 1]));
                   i++;
               }
            }
            return result;
        }

};



TEST_CASE( "Pablo Rodriguez Test", "[FirstLetterUpperCase]" ) 
{
    // Arrange
    string name = "pablo rodriguez";
    NameNormalizer normalizer;

    // Act
    string result = normalizer.FirstLetterUpperCase(name);
    
    
    // Assert
    REQUIRE( "Pablo Rodriguez" == result );
}

TEST_CASE( "Nicolás Canosa Test", "[FirstLetterUpperCase]" ) 
{
    // Arrange
    string name = "José Perez";
    NameNormalizer normalizer;

    // Act
    string result = normalizer.FirstLetterUpperCase(name);
    
    
    // Assert
    REQUIRE( "José Perez" == result );
}
