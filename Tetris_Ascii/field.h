#ifndef FIELD_H
#define FIELD_H

#include "tetromino.h"
//#include "game.h"

class Field
{	
public:
	struct Point
	{
		unsigned short x;
		unsigned short y;

		Point()
			: x(0), y(0)
		{
		}

		Point(unsigned short x, unsigned short y)
			: x(x), y(y)
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
	// Konstruktoren
	Field(const size_t HEIGHT, const size_t WIDTH);

	// getter
	size_t getHeight() const;
	size_t getWidth() const;
	const Point& getCursor() const;

	// Methoden
	void setCursor(const unsigned short x, const unsigned short y);
	void print() const;
	bool isFree(const Tetromino *brick);
	bool drawBrick(const Tetromino *brick, char format = 'O');
	size_t clearCompleteLines();
	/*void clear(const Point cursor, const Tetromino *brick);*/
	void clear(char format);
	//void move(const signed short moveX, const signed short moveY, Field::Point alt);

	// Destruktor
	~Field();



private:
	

	// Eigenschaften
	Point cursor;
	char **field;
	const size_t HEIGHT;
	const size_t WIDTH;
};

#endif