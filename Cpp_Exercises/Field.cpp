#include "Field.h"

int Field::getSurroundingBombs() {
	return this->_surroundingBombs;
}

void Field::setBomb(bool i) {
	this->_hasBomb = i;
}

void Field::setFlag(bool i) {
	this->_hasFlag = i;
}

bool Field::hasFlag() {
	return this->_hasFlag;
}

bool Field::hasBomb() {
	return this->_hasBomb;
}

void Field::setSuroundingBombs(int i) {
	this->_surroundingBombs = i;
}

Field::Field() {

}