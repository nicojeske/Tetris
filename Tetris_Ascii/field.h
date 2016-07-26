#ifndef FIELD_H
#define FIELD_H

#include "tetromino.h"

class Field
{
public:
	// Konstruktoren
	Field(const size_t HEIGHT, const size_t WIDTH);

	// getter
	size_t getHeight() const;
	size_t getWidth() const;

	// Methoden
	void setCursor(const unsigned short x, const unsigned short y);
	void print() const;
	bool isFree(const Tetromino *brick);
	bool drawBrick(const Tetromino *brick);

	// Destruktor
	~Field();

private:
	struct Point
	{
		unsigned short x;
		unsigned short y;

		Point()
			: x(0), y(0)
		{
		}

		unsigned short getX() const
		{
			return this->x;
		}

		unsigned short getY() const
		{
			return this->y;
		}

		void setX(const unsigned short x)
		{
			this->x = x;
		}

		void setY(const unsigned short y)
		{
			this->y = y;
		}
	};

	// Eigenschaften
	Point cursor;
	char **field;
	const size_t HEIGHT;
	const size_t WIDTH;
};

#endif