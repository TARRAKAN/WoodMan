#include <SFML/Graphics.hpp>

int main(){
	sf::VideoMode vidMode(1336, 1080);
	sf::RenderWindow gameWindow(vidMode,"WoodMan",sf::Style::Resize);
	sf::Clock clock;
	//background
	sf::Texture tBackground;
	tBackground.loadFromFile("grphcs/background.png");
	sf::Sprite sBackground;
	sBackground.setTexture(tBackground);
	sBackground.setPosition(0, 0);
	//tree
	sf::Texture tTree;
	tTree.loadFromFile("grphcs/tree.png");
	sf::Sprite sTree;
	sTree.setTexture(tTree);
	sTree.setPosition(860, 0);
	//bee
	sf::Texture tBee;
	tBee.loadFromFile("grphcs/bee.png");
	sf::Sprite sBee;
	sBee.setTexture(tBee);
	sBee.setPosition(0, 800);
	bool beeIsActive = false;
	float speedOfBee = 0.0;
	//clouds
	sf::Texture tCloud;
	tCloud.loadFromFile("grphcs/cloud.png");
	sf::Sprite sCloud1, sCloud2, sCloud3;
	sCloud1.setTexture(tCloud);
	sCloud2.setTexture(tCloud);
	sCloud3.setTexture(tCloud);
	sCloud1.setPosition(0,0);
	sCloud2.setPosition(0,250);
	sCloud3.setPosition(0,500);
	bool Cloud1IsActive = false;
	bool Cloud2IsActive = false;
	bool Cloud3IsActive = false;
	bool speedOfCloud1 = 0.0;
	bool speedOfCloud2 = 0.0;
	bool speedOfCloud3 = 0.0;

	while (gameWindow.isOpen()) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
			gameWindow.close();
		}
			//
			//
			//
			//
			gameWindow.clear();
			sf::Time tme = clock.restart();
			if (!beeIsActive) {
				srand((int)time(0));
				speedOfBee = (rand() % 200)+200;
				srand((int)time(0) * 10);
				float height = (rand() % 500) + 500;
				sBee.setPosition(2000, height);
				beeIsActive = true;
			} else {
				sBee.setPosition(sBee.getPosition().x -	(speedOfBee * tme.asSeconds()), sBee.getPosition().y);
				if (sBee.getPosition().x < -100)
				{
					beeIsActive = false;
				}
			}
			//
			//
			gameWindow.draw(sBackground);
			gameWindow.draw(sCloud1);
			gameWindow.draw(sCloud2);
			gameWindow.draw(sCloud3);
			gameWindow.draw(sTree);
			gameWindow.draw(sBee);
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
