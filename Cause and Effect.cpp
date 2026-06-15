#include <iostream>
#include <random>
#include <chrono>
#include <vector>
#include <fstream>
#include <thread>
#include <string>
#include <conio.h>
int iii = 2;
int skoko_chaev = 3;
int potok = 1;

int proideno = 0;
int sec = 0;

int vremya = 0;
int vsego_proideno = 0;

int save_time = 0;
int save_proideno = 0;

double iron = 0;
double copper = 0;
double derevo = 0;
double coal = 0;
double nickel = 0;
double steel = 0;

std::mt19937 chislo(std::chrono::steady_clock::now().time_since_epoch().count());
std::uniform_int_distribution j(-1, 1);
std::uniform_int_distribution da(0, skoko_chaev);
std::uniform_int_distribution Cave(1, 4);
std::uniform_int_distribution dlyashapok(0, iii);
std::uniform_int_distribution bite_chai(0, 4);
std::uniform_int_distribution podarok(0, 3);
std::uniform_int_distribution otvety(1, 2);
std::uniform_int_distribution chance(1, 100);

struct kto {
	int kak;
	double kg;
};
struct cave {
	int otx;
	int kx;
	int oty;
	int ky;
};
struct route_struct {
	int route_point;
	int y;
	int x;
};


std::vector<cave> line{};
std::vector<route_struct> point{};
std::vector<kto> shapka{};

std::vector<kto> sharf{};

std::vector<kto> zele{};

std::vector<kto> sz{
	{0,0.150},
	{0,0.200},
	{0,0.290},
	{0,0.400},
};
std::vector<kto> der{
	{0,0.100},
	{0,0.360},
	{0,0.630},
	{0,0.810},
};
std::vector<kto> med{
	{0,0.700},
    {0,0.920},
    {0,1.05},
	{0,1.2},
};
std::vector<kto> nick{
	{0,0.100},
	{0,0.120},
	{0,0.160},
	{0,0.175},
};
std::vector<kto> es{
};
std::vector<kto> metall{
};

int golo = 14;
bool igra = 1;

int vvod() {
	int x;
	int r;
	do {
		r = 0;
		std::cin >> x;
		if (std::cin.fail()) { std::cin.clear(); std::cin.ignore(); r = 1; std::cout << " . . . . . неправельный ввод . . . . .\n "; }
	} while (r);
	return x;
}
std::string bukva_vvod() {
	std::string x;
		std::cin >> x;
		std::cin.clear();
		std::cin.ignore(100,'\n');
return x;
}
int srazu_vvod() {
	int x = _getch();
	return x;
}




std::thread a([&]() {
	while (potok) {

		std::this_thread::sleep_for(std::chrono::milliseconds(1000));
		++sec;
	}

}
);

void save() {
	std::ofstream file("Cause_and_Effect_save_file.txt");
		if (!file) { return; }
		file << vsego_proideno << " " << vremya;

}
void read_save() {
	std::ifstream file("Cause_and_Effect_save_file.txt");
		if (!file) { return; }
		file >> save_proideno >> save_time;

}
void create(int x = 4, int y = 4, int z = 4) {
	while (shapka.size() > 0)
	{
		shapka.pop_back();
		sharf.pop_back();
	}
	while (zele.size() > 0)
	{
		zele.pop_back();
	}
	while (es.size() > 0) {
		es.pop_back();
		metall.pop_back();
	}


	int r = x;
	while (r) {
		shapka.push_back({ j(chislo) });
		sharf.push_back({ j(chislo) });
		--r;

	}
	int rr = y;
	while (rr) {
		zele.push_back({ bite_chai(chislo) });
		--rr;

	}
	while (z) {
		es.push_back({ bite_chai(chislo),0.0 });
		metall.push_back({ bite_chai(chislo),0.0 });
		--z;
	}

	



	skoko_chaev = y - 1;
	iii = x - 1;
	dlyashapok.param(std::uniform_int_distribution<int>::param_type(0, iii));
	da.param(std::uniform_int_distribution<int>::param_type(0, skoko_chaev));

}
void create_cave() {
	while (line.size() > 0) {
		line.pop_back();}
	while (point.size() > 0) {
		point.pop_back();
	}


	point.push_back({-1,0,0});
	int index = 0;
	int point_index = 0;
	int error = 0;

	while (index < 60 && error < 10000) {
		line.push_back({ 0,0,0,0, });






		int route = Cave(chislo);
		int sto = chance(chislo);
		if (route == point[point_index].route_point) { line.pop_back(); continue; }

		if (route == 1) {
			line[index].oty = (point[point_index].y);
			line[index].ky = (point[point_index].y - 4);
			line[index].otx = (point[point_index].x);
			line[index].kx = (point[point_index].x);
		}
		else if (route == 2) {
			line[index].oty = (point[point_index].y);
			line[index].ky = (point[point_index].y + 4);
			line[index].otx = (point[point_index].x);
			line[index].kx = (point[point_index].x);
		}
		else if (route == 3) {
			line[index].oty = (point[point_index].y);
			line[index].ky = (point[point_index].y);
			line[index].otx = (point[point_index].x);
			line[index].kx = (point[point_index].x - 4);
		}
		else if (route == 4) {
			line[index].oty = (point[point_index].y);
			line[index].ky = (point[point_index].y);
			line[index].otx = (point[point_index].x);
			line[index].kx = (point[point_index].x + 4);
		}
		else { line.pop_back(); continue; }

		int i = 0;
		bool cont = 0;
		while (i < line.size()) {
			if (index == i) { ++i; continue; }
			if (((line[i].oty <= line[index].oty && line[i].ky >= line[index].ky) || (line[i].oty >= line[index].oty && line[i].ky <= line[index].ky)) && ((line[i].otx <= line[index].otx && line[i].kx >= line[index].kx) || (line[i].otx >= line[index].otx && line[i].kx <= line[index].kx))) {
				cont = 1; break;
			}
			++i;
		}
		if (cont == 1) {
			line.pop_back();
			++error;
			continue;
		}
		if (point.size() < 60) {
		if (route == 1) {
			if (sto <= 33) {
				point.push_back({ 2,line[index].ky - 1, line[index].kx });

			}
			if (sto <= 66) {
				point.push_back({ 4,line[index].ky, line[index].kx - 1 });

			}
			if (sto <= 100) {
				point.push_back({ 3,line[index].ky, line[index].kx + 1 });

			}
		}
		else if (route == 2) {
			if (sto <= 33) {
				point.push_back({ 1,line[index].ky + 1, line[index].kx });

			}
			if (sto <= 66) {
				point.push_back({ 4,line[index].ky, line[index].kx - 1 });

			}
			if (sto <= 100) {
				point.push_back({ 3,line[index].ky, line[index].kx + 1 });

			}
		}
		else if (route == 3) {
			if (sto <= 33) {
				point.push_back({ 1,line[index].ky + 1, line[index].kx });

			}
			if (sto <= 66) {
				point.push_back({ 2,line[index].ky - 1, line[index].kx });

			}
			if (sto <= 100) {
				point.push_back({ 4,line[index].ky, line[index].kx + 1 });

			}
		}
		else if (route == 4) {
			if (sto <= 33) {
				point.push_back({ 1,line[index].ky + 1, line[index].kx });

			}
			if (sto <= 66) {
				point.push_back({ 2,line[index].ky - 1, line[index].kx });

			}
			if (sto <= 100) {
				point.push_back({ 3,line[index].ky, line[index].kx - 1 });

			}
		}
	    }
			++index;
			++point_index;
	}


}
int craft(int& pribor,int& priborf, int& invertor, bool& organ, double& imunitet, double& infection, int& cat, int& pribor_metall, int& pribor_es, int& znachenie_metall, int& znachenie_es, int& znachenie_chai) {
	std::cout << " 0 выйти из меню крафта (если кроме этого текста здесь ничего не написано, значит вы не можете ничего создать. если кроме этого текста здесь чтото написано, значит вы можете это создать)\n";
	if (iron >= 0.600 && pribor == -1) { std::cout << " 1 создать прибор для просмотра значения шапки за 0.600 кг железа (заряд 1)\n"; }
	if (iron >= 0.600 && derevo >= 0.150 && priborf == -1) { std::cout << " 2 создать прибор для просмотра значения шарфа за 0.600 кг железа и 0.150 кг дерева (заряд на 1 использование)\n"; }
	if (iron >= 1.3 && invertor == -1) { std::cout << " 3 создать инвертор значений шапки и шарфа за 1.3 кг железа (заряд 1) (при исподьзовании 1 меняет на -1, -1 меняет на 1, 0 меняет на 0, использование работает одновременно на шапку и шарф)\n"; }
	if (derevo >= 0.31) { std::cout << " 4 востановить 1 здоровье за 0.31 кг дерева\n"; }
	if (nickel >= 0.300) { std::cout << " 5 зарядить любой предмет которому нужен заряд на 2 за 0.300 кг никеля\n "; }
	if (nickel >= 0.600 && organ == 0) { std::cout << " 6 востановить орган за 0.600 кг никеля\n"; }
	if (nickel >= 0.100 && iron >= 0.200){std::cout << " 7 увеличить иммунитет на 15 за 0.100 кг никеля и 0.200 кг железа\n";}
	if (nickel >= 0.080 && iron >= 0.150) { std::cout << " 8 уменьшить инфекцию на 15 за 0.080 кг никеля и 0.150 кг железа\n"; }
	if (derevo >= 2.5 && cat == -1) { std::cout << " 9 создать деревянного механического кота за 2.500 кг дерева (заряд 10)\n"; }
	if (derevo >= 2.0 && pribor_metall == -1) { std::cout << " 10 создать прибор для изменения значений металла за 2.0 дерева (заряд 1)\n"; }
	if (derevo >= 2.0 && pribor_es == -1) { std::cout << " 11 создать прибор для изменения значений электростанций за 2.0 дерева (заряд 1)\n"; }
	if (derevo >= 0.8 && znachenie_metall == -1) { std::cout << " 12 создать прибор для просмотра значений металла за 0.8 дерева (заряд 1)\n"; }
	if (derevo >= 0.8 && znachenie_es == -1) { std::cout << " 13 создать прибор для просмотра значений электростанций за 0.8 дерева (заряд 1)\n"; }
	if (derevo >= 1.0 && znachenie_chai == -1) { std::cout << " 14 создать прибор для просмотра значений чая за 1.0 дерева (заряд 1)\n"; }
	int chto = vvod();
	if (chto == 1 && iron >= 0.600 && pribor == -1) { iron -= 0.600; pribor = 1; }
	else if (chto == 2 && iron >= 0.600 && derevo >= 0.150 && priborf == -1) { iron -= 0.600; derevo -= 0.150; priborf = 1; }
	else if (chto == 3 && iron >= 1.3 && invertor == -1) { iron -= 1.3; invertor = 1; }
	else if (chto == 4 && derevo >= 0.31) { golo += 1; derevo -= 0.31; }
	else if (chto == 5 && nickel >= 0.300 && (pribor > -1 || priborf > -1 || invertor > -1 || cat > -1 || pribor_metall > -1 || pribor_es > -1 || znachenie_metall > -1 || znachenie_es > -1 || znachenie_chai > -1)) {
		nickel -= 0.300;
		int zaryad = 2;
		std::string a = " выберите";
		std::string b = " предмет чей заряд увеличить на 1 (1 прибор для просмотра значений шапок. 2 прибор для просмотра значений шарфов. 3 инвертор. 4 деревянный механический кот. 5 прибор для просмотра значений металлов. 6 прибор для просмотра значений электростанций. 7 прибор для просмотра значений металов. 8 прибор для просмотра значений электростанций. 9 прибор для просмотра значений чая)\n";
		std::string c = " ещё раз";
		while (zaryad > 0) {
			std::cout << a + b;
			int chto = vvod();
			if (chto == 1 && pribor > -1) { pribor += 1; }
			else if (chto == 2 && priborf > -1) { priborf += 1; }
			else if (chto == 3 && invertor > -1) { invertor += 1; }
			else if (chto == 4 && cat > -1) { cat += 10; }
			else if (chto == 5 && pribor_metall > -1) { pribor_metall += 1; }
			else if (chto == 6 && pribor_es > -1) { pribor_es += 1; }
			else if (chto == 7 && znachenie_metall > -1) { znachenie_metall += 1; }
			else if (chto == 8 && znachenie_es > -1) { znachenie_es += 1; }
			else if (chto == 9 && znachenie_chai > -1) { znachenie_chai += 1; }
			else { std::cout << "\n = = = = = ошибка = = = = =\n\n"; continue; }
			a += c;
			--zaryad;
		}
	}
	else if (chto == 6 && nickel >= 0.600 && organ == 0) {
		nickel -= 0.600;
		organ = 1;
	}
	else if (chto == 7 && nickel >= 0.100 && iron >= 0.200) {
		imunitet += 15;
		nickel -= 0.100;
		iron -= 0.200;
	}
	else if (chto == 8 && nickel >= 0.080 && iron >= 0.150) {
		infection -= 15;
		nickel -= 0.080;
		iron -= 0.150;
	}
	else if (chto == 9 && derevo >= 2.5 && cat == -1) {
		derevo -= 2.5;
		cat = 10;
	}
	else if (chto == 10 && derevo >= 2.0 && pribor_metall == -1) {
		derevo -= 2.0;
		pribor_metall = 1;
	}
	else if (chto == 11 && derevo >= 2.0 && pribor_es == -1) {
		derevo -= 2.0;
		pribor_es = 1;
	}
	else if (chto == 12 && derevo >= 0.8 && znachenie_metall == -1) {
		derevo -= 0.8;
		znachenie_metall = 1;
	}
	else if (chto == 13 && derevo >= 0.8 && znachenie_es == -1) {
		derevo -= 0.8;
		znachenie_es = 1;
	}
	else if (chto == 14 && derevo >= 1.0 && znachenie_chai == -1) {
		derevo -= 1.0;
		znachenie_chai = 1;
	}
	else if (chto == 0) { return 0; }
	else { std::cout << "\n = = = = = не получилось создать предмет, причины этому могут быть: неправельный ввод, нехватка ресурсов, предмет уже создан = = = = =\n\n"; }

	return 0;
}
void menu2() {
	create();
}
int menu() {
	int r = 0;
	do{
		std::cout << " МЕНЮ\n нажмите 1 (затем ENTER) чтобы начать играть. нажмите 2 (затем ENTER) чтобы продолжить игру\n\n\n";
		int chto = vvod();
		if (chto == 9201) {
			std::cout << " введите 2 числа через пробел, первое число отвечает за количество шарфов и шапок (введёте 10 будет 10 шапок и 10 шарфов) второе число отвечает за количество чаёв\n";
			int chto = vvod();
			int sho = vvod();
			create(chto,sho);
			std::cout << " готово, количество шапок и шарфов: " << shapka.size() << " " << sharf.size() << " количество чаёв: " << zele.size() << "\n\n";
		}
		else if (chto == 2) { return 0; }
	} while (r);
	menu2();
	return 1;
}
void pishera() {
	int ix = 0;
	int iy = 0;
	bool vyhod = 1;
	

	auto mozhno = [&](int x, int y){
		if ((x < 0 || x > 4) || (y < 0 || y > 4)) { return 0; }
		else { return 1; }
		return 0;
	};

	std::cout << "перемещение на WASD. 0 выход\n";
	while (vyhod) {
		
		int chto = 0;
		int vvod_ = srazu_vvod();
		switch (vvod_) {
		case 48: { vyhod = 0; continue; }
		case 119: { if (mozhno(ix - 1, iy)) { ix -= 1; } break; }
		case 97: { if (mozhno(ix, iy - 1)) { iy -= 1; }break; }
		case 115: { if (mozhno(ix + 1, iy)) { ix += 1; } break; }
		case 100:{if (mozhno(ix, iy + 1)) { iy += 1; } break;}
		};

		for (int x = 0; x < 5; ++x) {
			for (int y = 0; y < 5; ++y) {

				if (ix == x && iy == y) {
					chto = 1;
				}
				else{chto = 0;}
				
				switch (chto) {
				case 0: { std::cout << "."; break; }
				case 1: { std::cout << "|"; break; }
				}

			}
			std::cout << '\n';}
		std::cout << '\n';
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
		
	}
}

int main()
{
	system("chcp 1251 > nul");
	menu();
	while(true){
		read_save();
		igra = 1;
	golo = 15;
	int bite = -1;
	int bite2 = 3;
	bool pokozat = 1;
	bool organ = 1;
	int dlya_organa = 0;
	int cota = 0;

	int pribor = -1;
	int priborf = -1;
	int invertor = -1;
	int cat = -1;

	int pribor_metall = -1;
	int pribor_es = -1;
	int znachenie_metall = -1;
	int znachenie_es = -1;
	int znachenie_chai = -1;

	double infection = -1;
	double imunitet = 175;
	int inffection = 0;
	
	int faza = 5;
	bool prodolszit_put = 0;

	std::cout << "\n . . . . . . . . . . началась новая игра! . . . . . . . . . .\n\n";
	while (igra) {
		int s = dlyashapok(chislo);
		int f = dlyashapok(chislo);
		int ss = shapka[s].kak;
		int ff = sharf[f].kak;

		int szeleza = podarok(chislo);
		int dereva = podarok(chislo);
		int Nickel = podarok(chislo);
		int Copper = podarok(chislo);

		int sf = ss + ff;
		int chai = da(chislo);

		int otvet = otvety(chislo);
		int ES = podarok(chislo);
		int ME = podarok(chislo);
		int esme = (es[ES].kak + metall[ME].kak);

		if (faza == 0) {
			create_cave();
		}

		if (dlya_organa == 0) { if (organ == 0) { bite += 1; dlya_organa = 1; } }
		if (dlya_organa == 1) { if (organ == 1) { bite -= 1; dlya_organa = 0; } }

		if (cota == 0) { if (cat > 0) { bite -= 1; cota = 1; } }
		if (cota == 1) { if (cat == 0) { bite += 1; cota = 0; } }

		if (faza > 0) {
			if (sf <= bite || zele[chai].kak >= bite2 || (zele[chai].kak == (bite2 - 1) && esme <= 2)) {
				if (zele[chai].kak == (bite2 - 1) && esme <= 2 && sf <= bite && infection < 0) {
					golo -= 1;
					infection = 30;
					inffection = 1;
				}
				else if (sf <= bite && zele[chai].kak >= bite2 && organ == 1) { organ = 0; }
				else { golo -= 1; }
			}
			
		}
		int cikl2 = 0;
		do {
			cikl2 = 0;
			if (faza > 0) {
				if (sf <= bite || zele[chai].kak >= bite2 || (zele[chai].kak == (bite2 - 1) && esme <= 5)) { std::cout << " = = = вас укусил монстр = = =\n"; }


				std::string shp = " null ";
				std::string shf = " null ";
				if (s == 0) {
					shp = "Зелёная";
				}
				else if (s == 1) {
					shp = "Красная";
				}
				else if (s == 2) {
					shp = "Белая с Жёлтой Полоской";
				}
				else if (s == 3) {
					shp = "Грязная";
				}

				if (f == 0) {
					shf = "Знатный";
				}
				else if (f == 1) {
					shf = "Розовый";
				}
				else if (f == 2) {
					shf = "из Урановой Руды";
				}
				else if (f == 3) {
					shf = "из Стальных Пластин";
				}
				std::string c = " null ";
				if (chai == 0) {
					c = "Зелёный";
				}
				else if (chai == 1) {
					c = "Чёрный";
				}
				else if (chai == 2) {
					c = "Кофе";
				}
				else if (chai == 3) {
					c = "Вкусный";
				}
				std::cout << "\n . . . шапка:  [" << shp << "]  шарф:  [" << shf << "]  любимый чай:  [" << c << "]\n";
				std::string e = " null ";
				std::string m = " null ";
				if (ES == 0) {
					e = "ТЭС";
				}
				else if (ES == 1) {
					e = "ГЭС";
				}
				else if (ES == 2) {
					e = "ВЭС";
				}
				else if (ES == 3) {
					e = "ГеоТЭС";
				}

				if (ME == 0) {
					m = "Кобальт";
				}
				else if (ME == 1) {
					m = "Вольфрам";
				}
				else if (ME == 2) {
					m = "Хром";
				}
				else if (ME == 3) {
					m = "Цинк";
				}
				std::cout << " любимый тип электростанций:  [" << e << "]  любимый металл:  [" << m << "]  . . .\n\n";
				if (pokozat == 1) { std::cout << " . . . " << shp << ":  [" << shapka[s].kak << "]  " << shf << ":  [" << sharf[f].kak << "]  " << c << ":  [" << zele[chai].kak << "]  " << e << ":  [" << es[ES].kak << "]  " << m << ":  [" << metall[ME].kak << "] . . .\n\n"; pokozat = 0; }


				std::cout << " 0 попасть в меню. 1 укусить. 2 пройти мимо. 3 поздароваться. 100 рассказать анекдот. 4 меню крафта.";
			}
			else {
				std::cout << " . . . . . вы остановились идти по тропинке в лесу . . . . . 0 попасть в меню. 1 продолжить идти. 2 пойти в пищеру. 4 меню крафта. 44 ничего не делать.";
			/*for (int i = 0; i < line.size(); ++i) {
				std::cout << "\n " << line[i].otx << " " << line[i].kx << " " << line[i].oty << " " << line[i].ky;
			}
			std::cout << "\n";
			for (int x = -25; x < 25; ++x) {
				for (int y = -50; y < 50; ++y) {
					int index = 0; 
					int chto_risovat = 0;
					while (index < line.size()) {
						if (((y <= line[index].oty && y >= line[index].ky) || (y >= line[index].oty && y <= line[index].ky)) && ((x <= line[index].otx && x >= line[index].kx) || (x >= line[index].otx && x <= line[index].kx))) {
			
							chto_risovat = 1;
							break;
						}
						++index;
					}
					if (x == 0 && y == 0) { std::cout << "0"; }
					else if (chto_risovat == 1) { std::cout << "."; }
					else{std::cout << " "; }
				}
				std::cout << ",\n";
			}*/
			}
			std::cout << "\n [===============\n ваше здоровье:  [" << golo << "]  орган:  [" << organ << "]  инфекция:  [" << infection << "]  иммунитет:  [" << imunitet << "]\n";
			bool pravda = 0;
			if (iron != 0) { std::cout << "\n у вас кг железа: " << iron; pravda = 1; }
			if (copper != 0) { std::cout << "\n у вас кг меди: " << copper; pravda = 1; }
			if (derevo != 0) { std::cout << "\n у вас кг дерева: " << derevo; pravda = 1; }
			if (coal != 0) { std::cout << "\n у вас кг угля: " << coal; pravda = 1; }
			if (nickel != 0) { std::cout << "\n у вас кг никеля: " << nickel; pravda = 1; }
			if (steel != 0) { std::cout << "\n у вас кг стали: " << steel; pravda = 1; }
			if (pravda) { std::cout << "\n"; }

			bool pravda2 = 0;
			if (pribor != -1) { std::cout << "\n заряд прибора для шапок (11 использовать): " << pribor; pravda2 = 1; }
			if (priborf != -1) { std::cout << "\n заряд прибора для шарфов (22 использовать): " << priborf; pravda2 = 1; }
			if (invertor != -1) { std::cout << "\n заряд инвертора (33 использовать): " << invertor; pravda2 = 1; }
			if (cat != -1) { std::cout << "\n заряд деревянного механического кота: " << cat; pravda2 = 1; }
			if (pribor_metall != -1) { std::cout << "\n заряд прибора для металлов (44 использовать): " << pribor_metall; pravda2 = 1; }
			if (pribor_es != -1) { std::cout << "\n заряд прибора для электростанций (55 использовать):" << pribor_es; pravda2 = 1; }
			if (znachenie_metall != -1) { std::cout << "\n заряд прибора для просмотра значений металлов (66 использовать): " << znachenie_metall; pravda2 = 1; }
			if (znachenie_es != -1) { std::cout << "\n заряд прибора для просмотра значений электростанций (77 использовать): " << znachenie_es; pravda2 = 1; }
			if (znachenie_chai != -1) { std::cout << "\n заряд прибора для просмотра значений чая (88 использовать) : " << znachenie_chai; pravda2 = 1; }
			if (pravda2) { std::cout << "\n"; }
			



			std::cout << " ===============]\n" << " вы прошли монстров:  [" << proideno << "]  вы прошли за всё время:  [" << vsego_proideno << "]  время в игре за всё время в секундах:  [" << vremya << "]\n\n\n";

			bool cikl = 0;
			do {
				cikl = 0;
				int chto = vvod();
				if (chto == 1 && faza > 0) {
					if (sf <= bite) {
						if (shapka[s].kak < 1) { std::cout << " шапка +1\n"; shapka[s].kak += 1; }
						else if (sharf[f].kak < 1) { std::cout << " шарф +1\n"; sharf[f].kak += 1; }
					}
					else if (zele[chai].kak >= bite2) { std::cout << " чай +1\n"; zele[chai].kak += 1; }
					else if (zele[chai].kak == (bite2 - 1) && esme <= 5) {
						if (es[ES].kak > 0) { std::cout << " ЭС -1\n"; es[ES].kak -= 1; }
						else{ std::cout << " металл -1\n"; metall[ME].kak -= 1; }
					}
					else {
						if (sf == (bite + 1)) {
							if (otvet == 1) {
								std::cout << " монстр: здраствуйте, куда вы идёте по этой тропинке в лесу?  (1 ответить: доставляю уран на гидрометаллургический завод (правда) 2 ответить: доставляю стекловату для Черемши (ложь) 3 ничего не ответить)\n";
								chto = vvod();
							}
							else if (otvet == 2) {
								std::cout << " здрасьте, вы не боитесь монстра 170? (1 ответить: боюсь, а кто это? (правда) 2 ответить: уверуй в монолит (истина))\n";
								chto = vvod();
								if (chto == 1) {
									std::cout << " монстр: он очень злой и страшный. и вообще он 170 килограмм урановой руды добыл (1 ответить: ясно)\n";
									chto = vvod();
									if (chto == 1) { std::cout << " монстр: чё те ясно\n"; }
								}
								else if (chto == 2) {
									std::cout << " монстр: за монолит!\n";
								}
							}

							if (otvet == 1) {
								std::cout << " монстр: могу вам дать " << sz[szeleza].kg << " килограмм железа либо " << der[dereva].kg << " калограмм дерева (1 взять железо 2 взять дерево)\n";
								chto = vvod();
							}
							if (otvet == 2) {
								std::cout << " монстр: могу вам дать " << nick[Nickel].kg << " килограмм никеля либо " << med[Copper].kg << " калограмм меди (1 взять никель 2 взять медь)\n";
								chto = vvod();
							}

							if (otvet == 1) {
								if (chto == 1) { iron += sz[szeleza].kg; }
								else if (chto == 2) { derevo += der[dereva].kg; }
							}
							else if (otvet == 2) {
								if (chto == 1) { nickel += nick[Nickel].kg; }
								else if (chto == 2) { copper += med[Copper].kg; }

							}



						}
						else if (sf >= (bite + 2)) {
							if (shapka[s].kak > -1) { std::cout << "\n = = = = = шапка -1 = = = = =\n\n"; shapka[s].kak -= 1; }
							else if (sharf[f].kak > -1) { std::cout << "\n = = = = = шарф -1 = = = = =\n\n"; sharf[f].kak -= 1; }
							else if (zele[chai].kak < (bite2 + 1)) { std::cout << "\n чай +1\n\n"; zele[chai].kak += 1; }
						}
					}

				}
				else if (chto == 2 && faza > 0) {
					if (zele[chai].kak >= bite2) { std::cout << " чай -1\n"; zele[chai].kak -= 1; }
					else if (sf <= bite) {
						if (shapka[s].kak > -1) { std::cout << " шапка -1\n"; shapka[s].kak -= 1; }
						else{ std::cout << " шарф -1\n"; sharf[f].kak -= 1; }
					}
					else if (zele[chai].kak == (bite2 - 1) && esme <= 5) {
						if (es[ES].kak > 0) { std::cout << " ЭС -1\n"; es[ES].kak -= 1; }
						else{ std::cout << " металл -1\n"; metall[ME].kak -= 1; }
					}
				}
				else if (chto == 3 && faza > 0 && !(sf <= bite || zele[chai].kak >= bite2 || (zele[chai].kak == (bite2 - 1) && esme <= 5))) {
					if (sf >= (bite + 2)) {
						int chto;
						if (otvet == 1) {
							std::cout << " монстр: здраствуйте, куда вы идёте по этой тропинке в лесу?  (1 ответить: доставляю уран на гидрометаллургический завод (правда) 2 ответить: доставляю стекловату для Черемши (ложь) 3 ничего не ответить)\n";
							chto = vvod();
						}
						else if (otvet == 2) {
							std::cout << " здрасьте, вы не боитесь монстра 170? (1 ответить: боюсь, а кто это? (правда) 2 ответить: уверуй в монолит (истина))\n";
							chto = vvod();
							if (chto == 1) {
								std::cout << " монстр: он очень злой и страшный. и вообще он 170 килограмм урановой руды добыл (1 ответить: ясно)\n";
								chto = vvod();
								if (chto == 1) { std::cout << " монстр: чё те ясно\n"; }
							}
							else if (chto == 2) {
								std::cout << " монстр: за монолит\n";
							}
						}




						if (otvet == 1) {
							std::cout << " монстр: могу вам дать " << sz[szeleza].kg << " килограмм железа либо " << der[dereva].kg << " калограмм дерева (1 взять железо 2 взять дерево)\n";
							chto = vvod();
						}
						if (otvet == 2) {
							std::cout << " монстр: могу вам дать " << nick[Nickel].kg << " килограмм никеля либо " << med[Copper].kg << " калограмм меди (1 взять никель 2 взять медь)\n";
							chto = vvod();
						}


						if (otvet == 1) {
							if (chto == 1) { iron += sz[szeleza].kg; }
							else if (chto == 2) { derevo += der[dereva].kg; }
						}
						else if (otvet == 2) {
							if (chto == 1) { nickel += nick[Nickel].kg; }
							else if (chto == 2) { copper += med[Copper].kg; }

						}


					}
					else if (sf == (bite + 1)) {
						if (shapka[s].kak > -1) { std::cout << "\n = = = = = шапка -1 = = = = =\n\n"; shapka[s].kak -= 1; }
						else if (sharf[f].kak > -1) { std::cout << "\n = = = = = шарф -1 = = = = =\n\n"; sharf[f].kak -= 1; }
						else if (zele[chai].kak < (bite2 + 1)) { std::cout << "\n = = = = = чай +1 = = = = =\n\n"; zele[chai].kak += 1; }
					}

				}
				else if (chto == 4) {
					craft(pribor, priborf, invertor, organ, imunitet, infection, cat,pribor_metall,pribor_es,znachenie_metall,znachenie_es,znachenie_chai);
					cikl2 = 1;
				}
				else if (chto == 100 && faza > 0) {
					if ((zele[chai].kak == (bite2 - 1) && esme <= 5) || (sf > bite && zele[chai].kak < bite2)) {
						if (es[ES].kak < 4) { std::cout << " ЭС +1\n"; es[ES].kak += 1; }
						else if (metall[ME].kak < 4) { std::cout << " металл +1\n"; metall[ME].kak += 1; }
					}
					else if (sf <= bite) {
					if (shapka[s].kak > -1) { std::cout << "\n = = = = = шапка -1 = = = = =\n\n"; shapka[s].kak -= 1; }
					else{ std::cout << "\n = = = = = шарф -1 = = = = =\n\n"; sharf[f].kak -= 1; }
					}
					else if (zele[chai].kak >= bite2) { std::cout << "\n чай +1\n\n"; zele[chai].kak += 1; }

				}
				else if (chto == 9201) {
					int y = 0;
					for (int x = 0; x < shapka.size(); ++x) {
						std::cout << " шапка: " << shapka[x].kak << "|" << " шарф: " << sharf[x].kak << "\n";
					}
					for (int x = 0; x < zele.size(); ++x) {
						std::cout << " чай: " << zele[x].kak << "\n";
					}
					cikl = 1;
				}
				else if (chto == 11 && pribor > 0 && faza > 0) {
					pribor -= 1;
					std::cout << " значение шапки монстра: " << shapka[s].kak << "\n";
					cikl = 1;
				}
				else if (chto == 22 && priborf > 0 && faza > 0) {
					priborf -= 1;
					std::cout << " значение шарфа монстра: " << sharf[f].kak << "\n";
					cikl = 1;
				}
				else if (chto == 33 && invertor > 0 && faza > 0) {
					--invertor;
					if (shapka[s].kak == 1) { shapka[s].kak = -1; }
					else if (shapka[s].kak == -1) { shapka[s].kak = 1; }
					if (sharf[f].kak == 1) { sharf[f].kak = -1; }
					else if (sharf[f].kak == -1) { sharf[f].kak = 1; }
					cikl = 1;
				}
				else if (chto == 44 && pribor_metall > 0 && faza > 0) {
					--pribor_metall;
					metall[ME].kak += 1;
					cikl = 1;
				}
				else if (chto == 55 && pribor_es > 0 && faza > 0) {
					--pribor_es;
					es[ES].kak += 1;
					cikl = 1;
				}
				else if (chto == 66 && znachenie_metall > 0 && faza > 0) {
					--znachenie_metall;
					std::cout << " значение любимого металла монстра: " << metall[ME].kak << "\n";
					cikl = 1;
				}
				else if (chto == 77 && znachenie_es > 0 && faza > 0) {
					--znachenie_es;
					std::cout << " значение любимого типа электростанций монстра: " << es[ES].kak << "\n";
					cikl = 1;
				}
				else if (chto == 88 && znachenie_chai > 0 && faza > 0) {
					--znachenie_chai;
					std::cout << " значение любимого чая монстра: " << zele[chai].kak << "\n";
					cikl = 1;
				}
				else if (chto == 0) {
					int x = menu();
					if (x == 1) { igra = 0; cikl2 = 0; cikl = 0; }
					else { cikl2 = 1; cikl = 0; }
				}
				else if (chto == 1 && faza == 0) { prodolszit_put = 1; cikl = 0; cikl2 = 0; }
				else if (chto == 44 && faza == 0) { cikl = 0; cikl2 = 0; }
				else if (chto == 7089) { faza = 1; }
				else if (chto == 2 && faza == 0) { pishera(); }
				else { std::cout << "\n = = = = = неправельный ввод = = = = =\n"; cikl = 1; }

			} while (cikl);
		} while (cikl2);
		if (golo <= 0) {
			std::cout << "\n - - - - - вы мертвы - - - - -\n\n";
			proideno = 0;
			iron = 0;
			copper = 0;
			derevo = 0;
			coal = 0;
			nickel = 0;
			steel = 0;
			igra = 0;
		}
		if (infection >= 0 && infection < 100 && inffection == 0) {
			if (imunitet <= 50) {
				infection += 4.7;
				imunitet -= 7.8;
			}
			else if (imunitet <= 100) {
				infection += 4.0;
				imunitet -= 7.0;
			}
			else if (imunitet <= 150) {
				infection += 3.0;
				imunitet -= 5.0;
			}
			else if (imunitet <= 200) {
				infection -= 0.6;
				imunitet -= 4.0;
			}
			else if (imunitet <= 250) {
				infection -= 1.2;
				imunitet -= 3.0;
			}
			else if (imunitet <= 300) {
				infection -= 1.4;
				imunitet -= 1.5;

			}
		}
		else if (infection >= 100) {
			golo /= 2;
			infection = -1;
		}
		inffection = 0;
		if (faza > 0) {++proideno;}
		if (cat > 0 && faza > 0) { --cat; }
		if (prodolszit_put) { faza = 5; }
		else if (faza > 0) { --faza; }
		vsego_proideno = proideno + save_proideno;
		vremya = sec + save_time;
		save();
	}
	}
	potok = 0;
	a.join();
	std::cout << " конец\n ";
	return 0;}