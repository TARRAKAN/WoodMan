#include <SFML/Graphics.hpp>

int main(){
	sf::VideoMode vidMode(1920, 1080);
	sf::RenderWindow gameWindow(vidMode,"WoodMan",sf::Style::Fullscreen);
	sf::Texture tBackground;
	tBackground.loadFromFile("grphcs/background.png");
	sf::Sprite sBackground;
	sBackground.setTexture(tBackground);
	sBackground.setPosition(0, 0);

	while (gameWindow.isOpen()) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
			gameWindow.close();
		}
			//
			//
			//
			//
			gameWindow.clear();
			//
			//
			//
			gameWindow.draw(sBackground);
			//
			//
			// 
			gameWindow.display();
	}
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
