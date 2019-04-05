#pragma once

class Field {
private:
	bool _hasBomb;
	bool _hasFlag;
	int _surroundingBombs;

public:
	Field();
	void setSuroundingBombs(int i);
	int getSurroundingBombs();
	void setFlag(bool i);
	bool hasFlag();
	bool hasBomb();
	void setBomb(bool i);
};