/**
 * Main method and junk
 *
 */
#include <string>

#include "TokyoThriftGame.h"

TokyoThriftGame theGame;

int main( int argc, char* args[]){

	theGame = TokyoThriftGame();

	theGame.runGame();
}
