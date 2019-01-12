// Обучающая программа, показывает работу структур, конструкторов структур и классов
//

#include "pch.h"
#include <iostream>

struct Vector3
{
	int x;
	int y;
	int z;

	Vector3() // простой конструктор, покажет то, что прописано в теле
	{
		x = 0;
		y = 0;
		z = 0;
	}

	Vector3(int x, int _y, int _z) // сложный конструкор, значения пропишутся в main
	{
		this->x = x;
		y = _y;
		z = _z;

	}

	void Assign(Vector3 new_v)
	{
		x = new_v.x;
		y = new_v.y;
		z = new_v.z;
	}
	/*
	Vector3 operator = (Vector3 new_v)
	{
		return Vector3(this->x = new_v.x, this->y = new_v.y, this->z = new_v.z*2);
	

	}*/


	void add(Vector3 v)
	{
		this->x = this->x + v.x;
		this->y = this->y + v.y;
		this->z = this->z + v.z;
	}




	friend //используем дружественную функцию для перегрузкипараметра, когда больше одного прараметра
	Vector3 operator + (Vector3 v1, Vector3 v2)
	{
		return Vector3(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);

	}

};

class Game
{
public:
	void PrintName()
	{

		std::cout << "Labirinth Hero";
	}
	int x;
	static int y;

};





int main()
{
	/*Vector3 v1(11, 22, 33);
	Vector3 v2(44, 55, 66);

	//v2 = v1;

	//v2 = v1 + v2; // это то же самое, что и v2.add(v1)
	v2.add(v1);

	//v2.Assign(v1);
	/*v2.x = v1.x;
	v2.y = v1.y;
	v2.z = v1.z;*/

   /* //std::cout << v1.x; 
	std::cout << v2.z;*/

	Game* game = new Game();
	Game* game2 = new Game();
	Game::y = 2;

	game->x = 2;
	game2->x = 4;

	//game->PrintName();

	std::cout << game->x << '\n';
	std::cout << game2->x << '\n';
	std::cout << Game::y << '\n'; //на данный момент строка не работает, производится поиск ошибки

	delete game;
}
