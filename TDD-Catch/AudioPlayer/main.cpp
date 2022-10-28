#include <catch2/catch_test_macros.hpp>
#include <iostream>
#include <fstream>
using namespace std;
class AudioPlayer
{
   public:
        AudioPlayer() 
        { 
            isOpen = false; 
            isPlaying = false;
            setVolume(10);
            setVersion(2.1);
        }
        ~AudioPlayer(){}
        void open(string filePath)
        {
            //@ToDo: por ahora simulamos la apertura correcta
            isOpen = true;
        }
        void play()
        {
            //@ToDo: por ahora simulamos la reproducción correcta
            if(isOpen) isPlaying = true;
        }   
        void stop()
        {
            if(isPlaying) isPlaying = false;
        }
        bool getOpenStatus()
        {
            return isOpen;
        }
        bool getPlaybackStatus()
        {
            return isPlaying;
        }
        float getVolume()
        {
            return volume;
        }
        void setVolume(float value)
        {
            volume = value;
        }
        int getVersion(){
            return version;
        };
        void setVersion(int value)
        {
            version = value;
        }
   private:
        float volume;
        bool isOpen;
        bool isPlaying;
        int version;
};
 
TEST_CASE( "Correct opening of audio files", "[AudioPlayer]" )
{
   // Arrange
   string filePath = "./resources/orchestral.ogg";
   AudioPlayer* player = new AudioPlayer();
 
   // Act
   player->open(filePath);
      
   // Assert
   REQUIRE( player->getOpenStatus() == true );
}


TEST_CASE( "Correct playing of audio files", "[AudioPlayer]" ) 
{
    // Arrange
    string filePath = "./resources/orchestral.ogg";
    AudioPlayer* player = new AudioPlayer();
    player->open(filePath);

    // Act
    player->play();
    
    // Assert
    REQUIRE( player->getPlaybackStatus() == true );
}

TEST_CASE( "Correct stopping of audio files", "[AudioPlayer]" ) 
{
    // Arrange
    string filePath = "./resources/orchestral.ogg";
    AudioPlayer* player = new AudioPlayer();
    player->open(filePath);
    player->play();

    // Act
    player->stop();
    
    // Assert
    REQUIRE( player->getPlaybackStatus() == false );
}

TEST_CASE( "Correct volume set of audio file", "[AudioPlayer]" ) 
{
    // Arrange
    string filePath = "./resources/orchestral.ogg";
    AudioPlayer* player = new AudioPlayer();

    // Act
    player->setVolume(4.5);
    
    // Assert
    REQUIRE( player->getVolume() == 4.5 );
}

TEST_CASE( "Correct version of audio player", "[AudioPlayer]" ) 
{
    // Arrange
    AudioPlayer* player = new AudioPlayer();

    // Act
    player->setVersion(3);
    
    // Assert
    REQUIRE( player->getVersion() == 3 );
}