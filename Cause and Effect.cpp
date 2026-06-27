#include <iostream>
#include <random>
#include <chrono>
#include <vector>
#include <fstream>
#include <string>
#include <conio.h>
#include "text.h"
#include <thread>


int kakaya_shapka = 3;
int skoko_chaev = 3;

int record = 0;
int languge = 0;
int vsego_proideno = 0;
int save_proideno = 0;
int zabeg = 0;

std::mt19937 chislo(std::chrono::steady_clock::now().time_since_epoch().count());
std::uniform_int_distribution<int> znacheniya_shapok(-1, 1);
std::uniform_int_distribution<int> kakoy_chai(0, skoko_chaev);
std::uniform_int_distribution<int> dlyashapok(0, kakaya_shapka);
std::uniform_int_distribution<int> bite_chai(0, 4);
std::uniform_int_distribution<int> podarok(0, 3);
std::uniform_int_distribution<int> otvety(1, 2);
std::uniform_int_distribution<int> chance(1, 100);

struct kto {
	int kak;
	double kg;};

struct cave {
	int x = 0;
	int y = 0;
	int id = -1;
};
struct krovotichenie {
	int tyazhest;
	int timer_zhguta = -1;
	int index_ = -1;
};
std::vector<cave> entity{
	{0,0,0},
};
struct lekarstvo {
private:
	double kachestvo;
	int index_ = -1;
public:
	void izmenenie(double steel_kachestvo) {
		if (steel_kachestvo <= 40) { kachestvo = 1; }
		else if (steel_kachestvo <= 60) { kachestvo = 2; }
		else if (steel_kachestvo <= 80) { kachestvo = 3; }
		else if (steel_kachestvo <= 100) { kachestvo = 4; }
		else if (steel_kachestvo <= 120) { kachestvo = 5; }
		else if (steel_kachestvo <= 140) { kachestvo = 6; }
	}
	void izmenenie_index(int index) {
		index_ = index;
	}
	double getter() const { return kachestvo; }
	int getter_index() const { return index_; }
};
std::vector<lekarstvo> vector_zhgut;
std::vector<lekarstvo> vector_lekarstvo;
std::vector<krovotichenie> vector_krov;
std::vector<kto> shapka;
std::vector<kto> sharf;
std::vector<kto> zele;
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
std::vector<kto> es;
std::vector<kto> metall;

int golo = 14;
bool igra = 1;

int vvod() {
	int x;
	int r;
	do {
		r = 0;
		std::cin >> x;
		if (std::cin.fail()) { std::cin.clear(); std::cin.ignore(100,'\n'); r = 1; std::cout << txt20; }
	} while (r);
	return x;
}
double vvod_double() {
	double x;
	int r;
	do {
		r = 0;
		std::cin >> x;
		if (std::cin.fail()) { std::cin.clear(); std::cin.ignore(100, '\n'); r = 1; std::cout << txt20; }
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
void save(int proideno,int& zabeg) {
	std::ofstream file("Cause_and_Effect_save_file.txt");
		if (!file) { return; }

		vsego_proideno = proideno + save_proideno;
		if (proideno > record) { record = proideno; }

		file << vsego_proideno << " " << record << " " << languge << " " << zabeg;
}
void read_save() {
	std::ifstream file("Cause_and_Effect_save_file.txt");
		if (!file) { return; }
		file >> save_proideno >> record >> languge >> zabeg;
}
void create(int x = 4, int y = 4, int z = 4) {
	shapka.clear();
	sharf.clear();
	zele.clear();
	es.clear();
	metall.clear();

	int r = x;
	while (r) {
		shapka.push_back({ znacheniya_shapok(chislo) });
		sharf.push_back({ znacheniya_shapok(chislo) });
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
	kakaya_shapka = x - 1;
	dlyashapok.param(std::uniform_int_distribution<int>::param_type(0, kakaya_shapka));
	kakoy_chai.param(std::uniform_int_distribution<int>::param_type(0, skoko_chaev));

}
void craft(int& pribor, int& priborf, int& invertor, bool& organ, double& imunitet, double& infection, int& cat, int& pribor_metall, int& pribor_es, int& znachenie_metall, int& znachenie_es, int& znachenie_chai, int& spear, int& fakel, int& look, int& pribor_chai, bool& organ2, double& iron, double& nickel, double& derevo, double& copper, double& coal, double& steel, int& listya, int& bint, double& steel_kachestvo, bool& mednaya_pech) {
	int cena_zhgut_steel = 0.100;
	
	std::cout << txt2;
	if (iron >= 0.600 && pribor <= -1) { std::cout << txt3; }
	if (iron >= 0.600 && derevo >= 0.150 && priborf <= -1) { std::cout << txt4; }
	if (iron >= 1.3 && invertor <= -1) { std::cout << txt5; }
	if (derevo >= 0.31) { std::cout << txt6; }
	if (nickel >= 0.300 && (pribor > -1 || priborf > -1 || invertor > -1 || cat > -1 || pribor_metall > -1 || znachenie_metall > -1 || pribor_es > -1 || znachenie_es > -1 || znachenie_chai > -1 || pribor_chai > -1)) { std::cout << txt7; }
	if (nickel >= 0.600 && organ == 0) { std::cout << txt8; }
	if (nickel >= 0.090 && iron >= 0.150) { std::cout << txt9; }
	if (nickel >= 0.150 && iron >= 0.200 && infection > -1) { std::cout << txt10; }
	if (derevo >= 2.5 && cat <= -1) { std::cout << txt11; }
	if (derevo >= 2.0 && pribor_metall <= -1) { std::cout << txt12; }
	if (derevo >= 2.0 && pribor_es <= -1) { std::cout << txt13; }
	if (derevo >= 0.8 && znachenie_metall <= -1) { std::cout << txt14; }
	if (derevo >= 0.8 && znachenie_es <= -1) { std::cout << txt15; }
	if (derevo >= 1.0 && znachenie_chai <= -1) { std::cout << txt16; }
	if (derevo >= 0.100 && spear <= -1) { std::cout << txt112; }
	if (derevo >= 0.400 && fakel <= -1) { std::cout << txt113; }
	if (derevo >= 0.400 && look <= -1) { std::cout << txt114; }
	if (iron >= 2.0 && pribor_chai <= -1) { std::cout << txt1014; }
	if (nickel >= 0.200 && organ2 == 0) { std::cout << txt08; }
	if (listya >= 4) { std::cout << txt1015; }
	if (copper >= 3.0 && !mednaya_pech) { std::cout << txt1016; }
	if (derevo >= 0.310 && mednaya_pech) { std::cout << txt1017; }
	if (iron >= 0.100 && coal >= 0.050 && mednaya_pech && (coal >= 0.060 || derevo >= 0.010)) { std::cout << txt1018; }
	if (steel >= 0.200) { std::cout << txt1021; }
	if (steel >= cena_zhgut_steel) { std::cout << txt016 << cena_zhgut_steel << txt017; }

	int chto = vvod();
	if (chto == 1 && iron >= 0.600 && pribor <= -1) { iron -= 0.600; pribor = 1; }
	else if (chto == 2 && iron >= 0.600 && derevo >= 0.150 && priborf <= -1) { iron -= 0.600; derevo -= 0.150; priborf = 1; }
	else if (chto == 3 && iron >= 1.3 && invertor <= -1) { iron -= 1.3; invertor = 1; }
	else if (chto == 4 && derevo >= 0.31) { golo += 1; derevo -= 0.31; }
	else if (chto == 5 && nickel >= 0.300 && (pribor > -1 || priborf > -1 || invertor > -1 || cat > -1 || pribor_metall > -1 || pribor_es > -1 || znachenie_metall > -1 || znachenie_es > -1 || znachenie_chai > -1 || pribor_chai > -1)) {
		nickel -= 0.300;
		int zaryad = 2;
		std::string a = txt17;
		std::string b = txt18;
		std::string c = txt19;
		while (zaryad > 0) {
			std::cout << a + b << txt100;
			if (pribor > -1) { std::cout << txtZ1; }
			if (priborf > -1) { std::cout << txtZ2; }
			if (invertor > -1) { std::cout << txtZ3; }
			if (cat > -1) { std::cout << txtZ4; }
			if (pribor_metall > -1) { std::cout << txtZ5; }
			if (pribor_es > -1) { std::cout << txtZ6; }
			if (znachenie_metall > -1) { std::cout << txtZ7; }
			if (znachenie_es > -1) { std::cout << txtZ8; }
			if (znachenie_chai > -1) { std::cout << txtZ9; }
			if (pribor_chai > -1) { std::cout << txtZ10; }
			std::cout << txt101 << "\n";
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
			else if (chto == 10 && pribor_chai > -1) { pribor_chai += 1; }
			else { std::cout << txt20; continue; }
			a += c;
			--zaryad;
		}
	}
	else if (chto == 6 && nickel >= 0.600 && organ == 0) {
		nickel -= 0.600;
		organ = 1;
	}
	else if (chto == 7 && nickel >= 0.090 && iron >= 0.150) {
		imunitet += 15;
		nickel -= 0.090;
		iron -= 0.150;
	}
	else if (chto == 8 && nickel >= 0.150 && iron >= 0.200 && infection > -1) {
		infection -= 15;
		nickel -= 0.150;
		iron -= 0.200;
	}
	else if (chto == 9 && derevo >= 2.5 && cat <= -1) {
		derevo -= 2.5;
		cat = 10;
	}
	else if (chto == 10 && derevo >= 2.0 && pribor_metall <= -1) {
		derevo -= 2.0;
		pribor_metall = 1;
	}
	else if (chto == 11 && derevo >= 2.0 && pribor_es <= -1) {
		derevo -= 2.0;
		pribor_es = 1;
	}
	else if (chto == 12 && derevo >= 0.8 && znachenie_metall <= -1) {
		derevo -= 0.8;
		znachenie_metall = 1;
	}
	else if (chto == 13 && derevo >= 0.8 && znachenie_es <= -1) {
		derevo -= 0.8;
		znachenie_es = 1;
	}
	else if (chto == 14 && derevo >= 1.0 && znachenie_chai <= -1) {
		derevo -= 1.0;
		znachenie_chai = 1;
	}
	else if (chto == 15 && derevo >= 0.100 && spear <= -1) {
		derevo -= 0.100;
		spear = 9;
	}
	else if (chto == 16 && derevo >= 0.400 && fakel <= -1) {
		derevo -= 0.400;
		fakel = 9;
	}
	else if (chto == 17 && derevo >= 0.400 && look <= -1) {
		derevo -= 0.400;
		look = 9;
	}
	else if (chto == 18 && iron >= 2.0 && pribor_chai <= -1) {
		iron -= 2.0;
		pribor_chai = 1;
	}
	else if (chto == 19 && nickel >= 0.200 && organ2 == 0) {
		nickel -= 0.200;
		organ2 = 1;
	}
	else if (chto == 20 && listya >= 4) {
		listya -= 4;
		bint += 1;
	}
	else if (chto == 21 && copper >= 3.0 && !mednaya_pech) {
		copper -= 3.0;
		mednaya_pech = 1;
	}
	else if (chto == 22 && derevo >= 0.310 && mednaya_pech) {
		derevo -= 0.310;
		coal += 0.100;
	}
	else if (chto == 23 && iron >= 0.100 && coal >= 0.050 && mednaya_pech && (coal >= 0.060 || derevo >= 0.010)) {

		std::cout << txt1019;
		int chto1 = vvod();
		if (chto1 != 1 && chto1 != 2) { std::cout << txt20; return; }

		std::cout << txt1020;
		double chto = vvod_double();

		if (chto1 == 1 && chto >= 0.010 && chto <= derevo) {
			if (chto >= 0.100 && chto < 0.150) {
				if (steel <= 0 && steel_kachestvo <= 0) { steel_kachestvo = 50; }
				else { steel_kachestvo = (steel_kachestvo + 50) / 2; }
			}
			else if (chto >= 0.150 && chto < 0.200) {
				if (steel <= 0 && steel_kachestvo <= 0) { steel_kachestvo = 70; }
				else { steel_kachestvo = (steel_kachestvo + 70) / 2; }
			}
			else if (chto >= 0.200 && chto < 0.250) {
				if (steel <= 0 && steel_kachestvo <= 0) { steel_kachestvo = 90; }
				else { steel_kachestvo = (steel_kachestvo + 90) / 2; }
			}
			else if (chto >= 0.250 && chto < 0.300) {
				if (steel <= 0 && steel_kachestvo <= 0) { steel_kachestvo = 110; }
				else { steel_kachestvo = (steel_kachestvo + 110) / 2; }
			}
			else {
				if (steel <= 0 && steel_kachestvo <= 0) { steel_kachestvo = 25; }
				else { steel_kachestvo = (steel_kachestvo + 25) / 2; }
			}

			derevo -= chto;
		}
		else if (chto1 == 2 && chto >= 0.010 && chto <= coal) {
			if (chto >= 0.100 && chto < 0.150) {
				if (steel <= 0 && steel_kachestvo <= 0) { steel_kachestvo = 100; }
				else { steel_kachestvo = (steel_kachestvo + 100) / 2; }
			}
			else if (chto >= 0.150 && chto < 0.200) {
				if (steel <= 0 && steel_kachestvo <= 0) { steel_kachestvo = 120; }
				else { steel_kachestvo = (steel_kachestvo + 120) / 2; }
			}
			else if (chto >= 0.200 && chto < 0.250) {
				if (steel <= 0 && steel_kachestvo <= 0) { steel_kachestvo = 140; }
				else { steel_kachestvo = (steel_kachestvo + 140) / 2; }
			}
			else if (chto >= 0.250 && chto < 0.300) {
				if (steel <= 0 && steel_kachestvo <= 0) { steel_kachestvo = 160; }
				else { steel_kachestvo = (steel_kachestvo + 160) / 2; }
			}
			else {
				if (steel <= 0 && steel_kachestvo <= 0) { steel_kachestvo = 60; }
				else { steel_kachestvo = (steel_kachestvo + 60) / 2; }
			}
			coal -= chto;
		}
		else { std::cout << txt20; return; }
		steel += 0.100;
		coal -= 0.050;
		iron -= 0.100;
		std::cout << txt_gotovo;
	}
	else if (chto == 24 && steel >= 0.200 && bint >= 1) {
		steel -= 0.200;
		lekarstvo lek;
		lek.izmenenie(steel_kachestvo);
		vector_lekarstvo.push_back(lek);

		if (steel <= 0) { steel_kachestvo = 0; }
	}
	else if (chto == 25 && steel >= cena_zhgut_steel) {
		steel -= cena_zhgut_steel;
		lekarstvo zhg;
		zhg.izmenenie(steel_kachestvo);
		vector_zhgut.push_back(zhg);
	}
	else if (chto == 0) { return; }
	else { std::cout << txt20; }
	return;
}
int menu(int proideno,int& zabeg) {
	int r = 0;
	do{
		r = 0;
		std::cout << txt0 << txt_version << txt1 << txt01 << txt02 << "\n\n";
		int chto = vvod();
		if (chto == 9201) {
			std::cout << txt9201;
			int chto = vvod();
			int sho = vvod();
			if (chto > -1 && sho > -1){
				create(chto, sho);
		}
			std::cout << txt9202 << shapka.size() << " " << sharf.size() << txt9203 << zele.size() << "\n\n";
			txt50 += "@были использованы читы@";
		}
		else if (chto == 2) { return 0; }
		else if (chto == 3) {std::cout << txt_; r = 1;}
		else if (chto == 4) { languge = 0; russian(); r = 1; save(proideno,zabeg); }
		else if (chto == 5) { languge = 1; english(); r = 1; save(proideno,zabeg); }
	} while (r);
	create();
	return 1;
}
void sobrat(int x, int y,double& iron,double& nickel) {
	int index = 0;
	while (index < entity.size()) {
		if (entity[index].id == 1 && entity[index].x == x && entity[index].y == y) {
			entity.erase(entity.begin() + index);
			--index;
			nickel += 0.020;
			std::cout << txt124;
			break;
		}
		else if (entity[index].id == 2 && entity[index].x == x && entity[index].y == y) {
			entity.erase(entity.begin() + index);
			--index;
			iron += 0.020;
			std::cout << txt125;
			break;
		}
		++index;
	}
}
void proverka_lovushka(int x, int y, int boevoy,int& spear) {
	int index = 0;
	

	while (index < entity.size()) {

		bool uslovie_lovushka1 = entity[index].id == 3 && ((entity[index].x == x && (entity[index].y == y || entity[index].y == y - 1 || entity[index].y == y + 1) || (entity[index].y == y && (entity[index].x == x || entity[index].x == x - 1 || entity[index].x == x + 1))));
		bool uslovie_lovushka2 = entity[index].id == 4 && entity[index].x == x && (entity[index].y == y - 2 || entity[index].y == y + 2 || entity[index].y == y);
		bool uslovie_lovushka3 = entity[index].id == 5 && entity[index].x >= x && entity[index].y == y;

		bool krov_1 = entity[index].id == 3 && (entity[index].y == y && (entity[index].x == x - 1 || entity[index].x == x + 1));
		bool krov_2 = (entity[index].id == 3 && (entity[index].x == x && (entity[index].y == y - 1 || entity[index].y == y + 1))) || (entity[index].id == 4 && entity[index].x == x && entity[index].y == y + 2);
		bool krov_3 = entity[index].id == 4 && entity[index].x == x && entity[index].y == y - 2;
		bool krov_4 = entity[index].id == 5 && entity[index].x >= x && entity[index].y == y;
		

		if(uslovie_lovushka1 || uslovie_lovushka2 || uslovie_lovushka3) {
			if (boevoy > 0 && spear > -1) {
				--spear;
				std::cout << txt128;
			}
			else {
				if (krov_1) { vector_krov.push_back({1}); }
				if (krov_2) { vector_krov.push_back({2}); }
				if (krov_3) { vector_krov.push_back({3}); }
				if(krov_4) { vector_krov.push_back({4}); }

				std::cout << txt126;
			}
			entity.erase(entity.begin()+index);
			--index;
		}
		++index;
	}
}
void pishera(bool& mozhno_v_pisheru,int& spear,double& iron,double& nickel,int proideno) {
	bool vyhod = 1;
	int razmer = 0;
	entity[0].x = 0;
	entity[0].y = 0;
	while (razmer < entity.size()) {
		if (entity[razmer].id == 1) {
			entity.erase(entity.begin()+razmer); 
			--razmer;
		}
		else if (entity[razmer].id == 2) {
			entity.erase(entity.begin() + razmer);
			--razmer;
		}
		else if (entity[razmer].id == 3) {
			entity.erase(entity.begin() + razmer);
			--razmer;
		}
		else if (entity[razmer].id == 4) {
			entity.erase(entity.begin() + razmer);
			--razmer;
		}
		else if (entity[razmer].id == 5) {
			entity.erase(entity.begin() + razmer);
			--razmer;
		}
		++razmer;
	}
	int ruda_nickel = 5;
	int ruda_iron = 5;
	int lovushka = 10;
	int lovushka2 = 0;
	int lovushka3 = 0;
	if (proideno > 30) { lovushka2 = 5; }
	if (proideno > 50) { lovushka3 = 3; }

	for (int x = 0; x <= 4; ++x) {
		for (int y = 0; y <= 19; ++y) {
			int sluchano = chance(chislo);
			if (sluchano <= 5 && ruda_nickel > 0) {
				entity.push_back({x,y,1});
				--ruda_nickel;
			}
			else if (sluchano <= 10 && ruda_iron > 0) {
				entity.push_back({ x,y,2 });
				--ruda_iron;
			}
			else if (sluchano <= 20 && lovushka > 0 && !(x <= 1 && y <= 1)) {
				entity.push_back({ x,y,3 });
				--lovushka;
			}
			else if (sluchano <= 30 && proideno > 30 && lovushka2 > 0 && !(y <= 2 || y >= 19)) {
				entity.push_back({x,y,4});
				--lovushka2;
			}
			else if (sluchano <= 40 && proideno > 50 && lovushka3 > 0 && !(y == 0 && (x <= 4 || x >= 0))) {
				entity.push_back({ x,y,5 });
				--lovushka3;
			}
		}
		if (ruda_nickel <= 0 && ruda_iron <= 0 && lovushka <= 0 && lovushka2 <= 0 && lovushka3 <= 0) { break; }
	}
	auto mozhno = [&](int x, int y){
		if ((x < 0 || x > 4) || (y < 0 || y > 19)) { return 0; }
		else { return 1; }
		return 0;
	};

	std::cout << txt21;
	int boevoy = 0;
	while (vyhod) {
		int vvod_ = srazu_vvod();

		switch (vvod_) {
		case 48: { vyhod = 0; continue; }
		case 119: { if (mozhno(entity[0].x - 1, entity[0].y)) { entity[0].x -= 1; } break; }
		case 97: { if (mozhno(entity[0].x, entity[0].y - 1)) { entity[0].y -= 1; }break; }
		case 115: { if (mozhno(entity[0].x + 1, entity[0].y)) { entity[0].x += 1; } break; }
		case 100:{if (mozhno(entity[0].x, entity[0].y + 1)) { entity[0].y += 1; } break;}
		case 87: { if (mozhno(entity[0].x - 1, entity[0].y)) { entity[0].x -= 1; } break; }
		case 65: { if (mozhno(entity[0].x, entity[0].y - 1)) { entity[0].y -= 1; }break; }
		case 83: { if (mozhno(entity[0].x + 1, entity[0].y)) { entity[0].x += 1; } break; }
		case 68: { if (mozhno(entity[0].x, entity[0].y + 1)) { entity[0].y += 1; } break; }
		case 69: { sobrat(entity[0].x, entity[0].y,iron,nickel); break; }
		case 101: { sobrat(entity[0].x, entity[0].y,iron,nickel); break; }
		case 102: { boevoy = 2; break; }
		case 70: { boevoy = 2; break; }
		};
		proverka_lovushka(entity[0].x,entity[0].y,boevoy,spear);
		int chto = 0;
		for (int x = 0; x <= 4; ++x) {
			for (int y = 0; y <= 19; ++y) {
				
				if(entity[0].x == x && entity[0].y == y) {
					chto = 1; 
				}
				else {
					for (int index = 0; index < entity.size(); ++index) {

						if (entity[index].id == 1 && entity[index].x == x && entity[index].y == y) {
							chto = 2; break;
						}
						else if (entity[index].id == 2 && entity[index].x == x && entity[index].y == y) {
							chto = 3; break;
						}
						else if (entity[index].id == 3 && entity[index].x == x && entity[index].y == y) {
							chto = 4; break;
						}
						else if (entity[index].id == 4 && entity[index].x == x && entity[index].y == y) {
							chto = 5; break;
						}
						else if (entity[index].id == 5 && entity[index].x == x && entity[index].y == y) {
							chto = 6; break;
						}
						else { chto = 0; }
					}
				}
				switch (chto) {
				case 0: { std::cout << "."; break; }
				case 1: { std::cout << "|"; break; }
				case 2: { std::cout << "&"; break; }
				case 3: { std::cout << "@"; break; }
				case 4: { std::cout << ","; break; }
				case 5: { std::cout << "%"; break; }
				case 6: { std::cout << "*"; break; }
				}

			}
			std::cout << '\n';}
		std::cout << '\n';
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
		if (boevoy > 0) { --boevoy; }
	}
	mozhno_v_pisheru = 0;
}
void les(int& spear, int& fakel, int& look,bool& mozhno_v_les,double& derevo,double& infection) {
	int oruzhie_u_monstra = bite_chai(chislo);
	switch (oruzhie_u_monstra) {
	case 0: { txt_monstr = txtM1; break; }
	case 1: { txt_monstr = txtM2; break; }
	case 2: { txt_monstr = txtM3; break; }
    case 3: { txt_monstr = txtM4; break; }
	case 4: { txt_monstr = txtM5; break; }
	};
	std::cout << text_v_lesu << txt_monstr;
	if (spear > -1) { std::cout << txtMA1; }
	if (fakel > -1) { std::cout << txtMA2; }
	if (look > -1) { std::cout << txtMA3; }

	bool pobeda = 0;
	int chto = vvod();
	if (chto == 0) { mozhno_v_les = 0; return; }
	else if (chto != 1 && chto != 2 && chto != 3) { std::cout << txt20; return; }
	if (chto == 1 && spear > -1) { spear -= 1; }
	else if (chto == 2 && fakel > -1) { fakel -= 1; }
	else if (chto == 3 && look > -1) { look -= 1; }

	if ((chto == 1 && oruzhie_u_monstra == 0) || (chto == 3 && oruzhie_u_monstra == 0) || (chto == 3 && oruzhie_u_monstra == 1) || (chto == 1 && oruzhie_u_monstra == 2) || (chto == 3 && oruzhie_u_monstra == 4)) { pobeda = 1; }
	else if (chto == 2 && oruzhie_u_monstra == 0) { std::cout << txt117; }
	else if (chto == 3 && oruzhie_u_monstra == 2) { std::cout << txt118; }
	else if (chto == 2 && oruzhie_u_monstra == 3) { std::cout << txt119; pobeda = 1; }
	else if (chto == 1 && oruzhie_u_monstra == 4) { std::cout << txt120; }



	if (!pobeda) { std::cout << txt116; 
	if (oruzhie_u_monstra == 0) { vector_krov.push_back({ 1 }); }
	else if (oruzhie_u_monstra == 1) { vector_krov.push_back({ 3 }); }
	else if (oruzhie_u_monstra == 2) { vector_krov.push_back({ 2 }); }
	else if (oruzhie_u_monstra == 3) { infection += 30.0; }
	else if (oruzhie_u_monstra == 4) { vector_krov.push_back({ 4 }); }
	}
	else { std::cout << txt115; derevo += 0.400; }

	mozhno_v_les = 0;
}
void znacheniya_igroka(bool organ, double infection, double imunitet, bool organ2, double krov,double bolezn) {
	std::cout << txt502 << txt100 << golo << txt101 << txt53 << txt100 << organ << txt101 << txt55 << txt100 << imunitet << txt101 << txt053 << txt100 << organ2 << txt101 << txt129 << txt100 << krov << txt101;
	if (infection > -1) { std::cout << txt54 << txt100 << infection << txt101; }
	if (bolezn > -1) { std::cout << txt054 << txt100 << bolezn << txt101; }
	for (int index = 0; index < vector_krov.size(); ++index) {
		if (vector_krov[index].tyazhest == 1) { std::cout << txt055; }
		else if (vector_krov[index].tyazhest == 2) { std::cout << txt056; }
		else if (vector_krov[index].tyazhest == 3) { std::cout << txt057; }
		else if (vector_krov[index].tyazhest == 4) { std::cout << txt058; }
	}

}
void operation(int x = 0, int index = 0, int i = 0) {
	if (x == 0) {
		if (shapka[index].kak > -1) { std::cout << txt90; --shapka[index].kak; }
		else { std::cout << txt91; --sharf[i].kak; }
	}
	else if (x == 1) {
		if (shapka[index].kak < 1) { std::cout << txt75; ++shapka[index].kak; }
		else if (sharf[i].kak < 1) { std::cout << txt76; ++sharf[i].kak; }
	}
	else if (x == 2) {
		std::cout << txt77; ++zele[index].kak;
	}
	else if (x == 3 && zele[index].kak > 0) {
		std::cout << txt92; --zele[index].kak;
	}
	else if(x == 4){
		if (es[index].kak > 0) { std::cout << txt78; --es[index].kak; }
		else { std::cout << txt79; --metall[i].kak; }
	}
	else if (x == 5) {
		if (es[index].kak < 4) { std::cout << txt93; ++es[index].kak; }
		else if(metall[i].kak < 4) { std::cout << txt94; ++metall[i].kak; }
	}

}
void razgovor(int otvet,int szeleza,int dereva,int Nickel,int Copper,double& copper,double& iron,double& nickel,double& derevo) {
	int chto;
	std::cout << txt80;
	chto = vvod();
	if (chto == 1) {
		std::cout << txt81;
		chto = vvod();
		if (chto == 1) {
			std::cout << txt83;
		}
		else if (chto == 2) {
			std::cout << txt84;
			chto = vvod();
			if (chto == 1) {
				std::cout << txt084;
			}
			else if (chto == 2) {
				std::cout << txt0083;
			}
		}
	}
	else if (chto == 2) {
		std::cout << txt82;
		chto = vvod();
		if (chto == 2) {
			std::cout << txt082;
		}

	}
	if (otvet == 1) {
		std::cout << txt85 << sz[szeleza].kg << txt86 << der[dereva].kg << txt87;
	}
	else if (otvet == 2) {
		std::cout << txt85 << nick[Nickel].kg << txt88 << med[Copper].kg << txt89;
	}
	chto = vvod();

	if (otvet == 1) {
		if (chto == 1) { iron += sz[szeleza].kg; }
		else { derevo += der[dereva].kg; }
	}
	else if (otvet == 2) {
		if (chto == 1) { nickel += nick[Nickel].kg; }
		else { copper += med[Copper].kg; }

	}

}
void pishutsya_nazvaniya_shapok(std::string& shp,std::string& shf, std::string& c,std::string& e, std::string& m,int s,int f,int chai,int ES,int ME) {
	if (s == 0) {
		shp = txt24;
	}
	else if (s == 1) {
		shp = txt25;
	}
	else if (s == 2) {
		shp = txt26;
	}
	else if (s == 3) {
		shp = txt27;
	}

	if (f == 0) {
		shf = txt28;
	}
	else if (f == 1) {
		shf = txt29;
	}
	else if (f == 2) {
		shf = txt30;
	}
	else if (f == 3) {
		shf = txt31;
	}
	if (chai == 0) {
		c = txt32;
	}
	else if (chai == 1) {
		c = txt33;
	}
	else if (chai == 2) {
		c = txt34;
	}
	else if (chai == 3) {
		c = txt35;
	}
	if (ES == 0) {
		e = txt39;
	}
	else if (ES == 1) {
		e = txt40;
	}
	else if (ES == 2) {
		e = txt41;
	}
	else if (ES == 3) {
		e = txt42;
	}
	if (ME == 0) {
		m = txt43;
	}
	else if (ME == 1) {
		m = txt44;
	}
	else if (ME == 2) {
		m = txt45;
	}
	else if (ME == 3) {
		m = txt46;
	}
}
void sobrat_listya(int& listya,bool& mozhno_listya) {
	int skolko_sobrano = 3;
	
	listya += skolko_sobrano;
	std::cout << txt130 << skolko_sobrano << "\n";
	mozhno_listya = 0;
}
void delete_vector_krov(int index) {
	
	for (int i = 0; i < vector_zhgut.size(); ++i) {
		if (vector_zhgut[i].getter_index() == index) { vector_zhgut[i].izmenenie_index(-1); }
		else if (vector_zhgut[i].getter_index() > -1 && vector_zhgut[i].getter_index() > index) { vector_zhgut[i].izmenenie_index(vector_zhgut[i].getter_index() - 1); }
	}
	vector_krov.erase(vector_krov.begin() + index);
}
void krov_bint(int& bint) {
	bool k1 = 0;
	bool k2 = 0;
	bool k3 = 0;
	bool k4 = 0;
	for (int index = 0; index < vector_krov.size(); ++index) {
		if (vector_krov[index].tyazhest == 1) { k1 = 1; }
		else if (vector_krov[index].tyazhest == 2) { k2 = 1; }
		else if (vector_krov[index].tyazhest == 3) { k3 = 1; }
		else if (vector_krov[index].tyazhest == 4) { k4 = 1; }
	}
	std::cout << txt_exit;
	if (k1) { std::cout << txtK1; }
	if (k2) { std::cout << txtK2; }
	if (k3) { std::cout << txtK3; }
	if (k4) { std::cout << txtK4; }

	int chto = vvod();

	for (int index = 0; index < vector_krov.size(); ++index) {
		if (chto == 1 && vector_krov[index].tyazhest == 1) { delete_vector_krov(index); --index; break; }
		else if (chto == 2 && vector_krov[index].tyazhest == 2) { vector_krov[index].tyazhest -= 1; break; }
		else if (chto == 3 && vector_krov[index].tyazhest == 3) { vector_krov[index].tyazhest -= 1; break; }
		else if (chto == 4 && vector_krov[index].tyazhest == 4) { vector_krov[index].tyazhest -= 1; break; }
		else { return; }
	}
	--bint;
	std::cout << txt_gotovo;
}
void lechit_bolezn(double& bolezn,double& infection,double& krov,double& imunitet) {
	int do_kuda = (vector_lekarstvo.size() - 1);
	std::cout << txt702 << "(" << txt703 << 0 << txt704 << do_kuda << ")";
	int chto = vvod();
	if (chto < 0 || chto > do_kuda) { return; }

	if (vector_lekarstvo[chto].getter() == 1) { infection += 10.0; bolezn /= 2.0; }
	else if (vector_lekarstvo[chto].getter() == 2) { krov -= 10.0; imunitet -= 30.0; bolezn /= 4.0; }
	else if (vector_lekarstvo[chto].getter() == 3) { krov -= 20.0; bolezn = -1; }
	else if (vector_lekarstvo[chto].getter() == 4) { bolezn = -1; imunitet += 10.0; }
	else if (vector_lekarstvo[chto].getter() == 5) { bolezn = -1; infection -= 20.0; imunitet += 20.0; }
	else if (vector_lekarstvo[chto].getter() == 6) { bolezn = -1; infection = -1; krov += 5.0; imunitet += 20.0; }
	else { return; }
	vector_lekarstvo.erase(vector_lekarstvo.begin()+chto);
	std::cout << txt_gotovo;
}
void zhgut_operation() {

	int index = 0;
	while (index < vector_zhgut.size()) {
		if (vector_zhgut[index].getter_index() > -1) { std::cout << "\n" << index << txt020 << vector_zhgut[index].getter_index(); }
		else { std::cout << "\n " << index; }
		++index;
	}
	std::cout << txt021;
	int chto = vvod();
	if(chto > -1 && chto < vector_zhgut.size()) {
		if (vector_zhgut[chto].getter_index() <= -1) {
			int index = 0;
			while (index < vector_krov.size()) {
				std::cout << "\n " << index;
				if (vector_krov[index].tyazhest == 1) { std::cout << txt055; }
				else if (vector_krov[index].tyazhest == 2) { std::cout << txt056; }
				else if (vector_krov[index].tyazhest == 3) { std::cout << txt057; }
				else if (vector_krov[index].tyazhest == 4) { std::cout << txt058; }
				++index;
			}
			std::cout << txt022;
			int chto2 = vvod();
			if (!(chto2 > -1 && chto2 < vector_krov.size())) { return; }
			if (vector_krov[chto2].index_ > -1) { std::cout << txt020; return; }
			vector_zhgut[chto].izmenenie_index(chto2);
			vector_krov[chto2].index_ = chto;

			int ustanovka_timer_zhguta = 1;
			if (vector_zhgut[chto].getter() == 1) { ustanovka_timer_zhguta = 3; }
			else if (vector_zhgut[chto].getter() == 2) { ustanovka_timer_zhguta = 5; }
			else if (vector_zhgut[chto].getter() == 3) { ustanovka_timer_zhguta = 8; }
			else if (vector_zhgut[chto].getter() == 4) { ustanovka_timer_zhguta = 10; }
			else if (vector_zhgut[chto].getter() == 5) { ustanovka_timer_zhguta = 13; }
			else if (vector_zhgut[chto].getter() == 6) { ustanovka_timer_zhguta = 16; }
			if (vector_krov[chto2].timer_zhguta <= -1 || vector_krov[chto2].timer_zhguta > ustanovka_timer_zhguta) { vector_krov[chto2].timer_zhguta = ustanovka_timer_zhguta; }

		}
		else{
			vector_krov[vector_zhgut[chto].getter_index()].index_ = -1;
			vector_zhgut[chto].izmenenie_index(-1);
			std::cout << txt023;
		}

	}
	else { std::cout << txt20; return; }
}
int main()
{
	system("chcp 1251 > nul");
	read_save();
	if (languge == 1) { english(); }
	int proideno = 0;

	while (shapka.size() < 1 || sharf.size() < 1 || zele.size() < 1) {
		menu(proideno,zabeg);
	}
	while (true) {
		read_save();
		

		vector_krov.clear();
		vector_lekarstvo.clear();

		igra = 1;
		golo = 15;
		double krov = 100;
		proideno = 0;
		int porog_sbrosa = 100;

		int bite = -1;
		int bite2 = 3;
		int bite_esme = 2;
		int anti_bite = 6;

		struct Steel {
			double kolichestvo = 0;
			double kachestvo = 0;
		};

		double copper = 0;
		double coal = 0;
		Steel steel;
		double iron = 0;
		double derevo = 0;
		double nickel = 0;
		int listya = 0;
		int bint = 0;

		bool pokozat = 1;
		bool organ = 1;
		bool organ2 = 1;
		int dlya_organa = 0;
		int dlya_organa2 = 0;
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
		int pribor_chai = -1;

		int spear = -1;
		int fakel = -1;
		int look = -1;

		double infection = -1;
		double bolezn = -1;
		double imunitet = 175;

		int faza = 5;
		bool mednaya_pech = 0;
		int krov_sto = 0;
		int peredoz_lek = 0;

		std::cout << txt22;
		++zabeg;
		while (igra) {
			int s = dlyashapok(chislo);
			int f = dlyashapok(chislo);

			int szeleza = podarok(chislo);
			int dereva = podarok(chislo);
			int Nickel = podarok(chislo);
			int Copper = podarok(chislo);

			int sf = shapka[s].kak + sharf[f].kak;
			int chai = kakoy_chai(chislo);

			int otvet = otvety(chislo);
			int ES = podarok(chislo);
			int ME = podarok(chislo);
			int esme = (es[ES].kak + metall[ME].kak);

			bool prodolszit_put = 0;
			bool mozhno_v_les = 1;
			bool mozhno_v_pisheru = 1;
			bool mozhno_listya = 1;

			bool uslovie_ukusa = 0;
			bool uslovie_bite = 0;
			bool uslovie_bite2 = 0;
			bool uslovie_bite_esme = 0;

			bool peredoz_lekk = 0;
			bool inffection = 1;
			bool bollezn = 1;

			if (!(esme >= anti_bite && zele[chai].kak == bite2 - 1) && (sf <= bite || zele[chai].kak >= bite2 || (zele[chai].kak == bite2 - 1 && esme <= bite_esme))) {
				uslovie_ukusa = 1;
				if (sf <= bite) { uslovie_bite = 1; }
				if (zele[chai].kak >= bite2) { uslovie_bite2 = 1; }
				if (zele[chai].kak == bite2 - 1 && esme <= bite_esme) { uslovie_bite_esme = 1; }
			}

			if (dlya_organa == 0) { if (organ == 0) { bite += 1; dlya_organa = 1; } }
			if (dlya_organa == 1) { if (organ == 1) { bite -= 1; dlya_organa = 0; } }

			if (dlya_organa2 == 0) { if (organ2 == 0) { anti_bite += 2; dlya_organa2 = 1; } }
			if (dlya_organa2 == 1) { if (organ2 == 1) { anti_bite -= 2; dlya_organa2 = 0; } }

			if (cota == 0) { if (cat > 0) { bite -= 1; cota = 1; } }
			if (cota == 1) { if (cat == 0) { bite += 1; cota = 0; } }

			if (faza > 0) {
				if (uslovie_ukusa) {
					if (zele[chai].kak == bite2 - 1 && esme <= bite_esme && sf <= bite && infection < 0) {
						golo -= 1;
						infection = 30;
						inffection = 1;
					}
					else if (sf <= bite && zele[chai].kak >= bite2 && organ == 1) { organ = 0; }
					else if (sf <= bite - 1 && zele[chai].kak == bite2 - 1 && organ2 == 1) { organ2 = 0; }
					else { golo -= 1; }
				}
			}
			int cikl2 = 0;
			do {
				cikl2 = 0;
				if (faza > 0) {
					if (uslovie_ukusa) { std::cout << txt23; }


					std::string shp = null;
					std::string shf = null;
					std::string e = null;
					std::string m = null;
					std::string c = null;
					pishutsya_nazvaniya_shapok(shp, shf, c, e, m, s, f, chai, ES, ME);

					std::cout << txt36 << txt100 << shp << txt101 << txt37 << txt100 << shf << txt101 << txt38 << txt100 << c << txt101 << "\n";

					std::cout << txt47 << txt100 << e << txt101 << txt48 << txt100 << m << txt101 << txt49;
					if (pokozat == 1) { std::cout << txt110 << shp << ":  " << txt100 << shapka[s].kak << txt101 << "  " << shf << ":  " << txt100 << sharf[f].kak << txt101 << "  " << c << ":  " << txt100 << zele[chai].kak << txt101 << "  " << e << ":  " << txt100 << es[ES].kak << txt101 << "  " << m << ":  " << txt100 << metall[ME].kak << txt101 << txt49; pokozat = 0; }

					std::cout << txt52;
					znacheniya_igroka(organ, infection, imunitet, organ2, krov, bolezn);
					std::cout << txt50;
				}
				else if (faza <= 0) {
					std::cout << txt51 << txt52 << txt553;
					if (mozhno_v_pisheru) { std::cout << txt554; }
					if ((spear > -1 || fakel > -1 || look > -1) && mozhno_v_les) { std::cout << txt551; }
					if (mozhno_listya) { std::cout << txt0554; }

					std::cout << txt552;
					znacheniya_igroka(organ, infection, imunitet, organ2, krov, bolezn);
				}
				if (bint > 0) { std::cout << txt0555 << txt100 << bint << txt101; }
				if (bint > 0 && vector_krov.size() > 0) { std::cout << txt00555; }
				if (vector_lekarstvo.size() > 0) { std::cout << txt701 << txt100 << vector_lekarstvo.size() << txt101 << txt0701; }
				
				if (iron > 0) { std::cout << txt56 << txt100 << iron << txt101; }
				if (copper > 0) { std::cout << txt57 << txt100 << copper << txt101; }
				if (derevo > 0) { std::cout << txt58 << txt100 << derevo << txt101; }
				if (coal > 0) { std::cout << txt59 << txt100 << coal << txt101; }
				if (nickel > 0) { std::cout << txt60 << txt100 << nickel << txt101; }
				if (steel.kolichestvo > 0) { std::cout << txt61 << txt100 << steel.kolichestvo << txt101; }
				if (pribor > -1) { std::cout << txt62 << txt100 << pribor << txt101 << txt062; }
				if (priborf > -1) { std::cout << txt63 << txt100 << priborf << txt101 << txt063; }
				if (invertor > -1) { std::cout << txt64 << txt100 << invertor << txt101 << txt064; }
				if (cat > -1) { std::cout << txt65 << txt100 << cat << txt101; }
				if (pribor_metall > -1) { std::cout << txt66 << txt100 << pribor_metall << txt101 << txt065; }
				if (pribor_es > -1) { std::cout << txt67 << txt100 << pribor_es << txt101 << txt066; }
				if (znachenie_metall > -1) { std::cout << txt68 << txt100 << znachenie_metall << txt101 << txt067; }
				if (znachenie_es > -1) { std::cout << txt69 << txt100 << znachenie_es << txt101 << txt068; }
				if (znachenie_chai > -1) { std::cout << txt70 << txt100 << znachenie_chai << txt101 << txt069; }
				if (pribor_chai > -1) { std::cout << txt700 << txt100 << pribor_chai << txt101 << txt0700; }
				if (listya > 0) { std::cout << txtListya << txt100 << listya << txt101; }
				if (spear > -1) { std::cout << txt121 << txt100 << spear << txt101; }
				if (fakel > -1) { std::cout << txt122 << txt100 << fakel << txt101; }
				if (look > -1) { std::cout << txt123 << txt100 << look << txt101; }
				if (vector_zhgut.size() > 0) { std::cout << txt018 << txt100 << vector_zhgut.size() << txt101; }
				if (vector_zhgut.size() > 0 && vector_krov.size() > 0) { std::cout << txt019; }

				std::cout << txt72 << proideno << txt73 << vsego_proideno << txt072 << record << txt71 << txt073 << zabeg << "\n\n\n";
				bool cikl = 0;
				do {
					cikl = 0;
					int chto = vvod();
					if (chto == 1 && faza > 0) {
						if (uslovie_bite) {
							operation(1, s, f);
						}
						else if (uslovie_bite2) { operation(2, chai); }
						else if (uslovie_bite_esme) { operation(4, ES, ME); }
						else {
							if (sf == bite + 1) {
								razgovor(otvet, szeleza, dereva, Nickel, Copper, copper, iron, nickel, derevo);
							}
							else {
								operation(0, s, f);
							}
						}
					}
					else if (chto == 2 && faza > 0) {
						if (uslovie_bite2) { operation(3, chai); }
						else if (uslovie_bite) {
							operation(0, s, f);
						}
						else if (uslovie_bite_esme) {
							operation(4, ES, ME);
						}
					}
					else if (chto == 3 && faza > 0 && !uslovie_ukusa) {
						if (sf >= bite + 2) {
							razgovor(otvet, szeleza, dereva, Nickel, Copper, copper, iron, nickel, derevo);
						}
						else {
							operation(0, s, f);
						}
					}
					else if (chto == 9) {
						craft(pribor, priborf, invertor, organ, imunitet, infection, cat, pribor_metall, pribor_es, znachenie_metall, znachenie_es, znachenie_chai, spear, fakel, look, pribor_chai, organ2, iron, nickel, derevo, copper, coal, steel.kolichestvo, listya, bint, steel.kachestvo, mednaya_pech);
						cikl2 = 1;
					}
					else if (chto == 4 && faza > 0) {
						if (uslovie_bite_esme || !(uslovie_bite || uslovie_bite2)) {
							operation(5, ES, ME);
						}
						else if (uslovie_bite) {
							operation(0, s, f);
						}
						else if (uslovie_bite2) { operation(2, chai); }

					}
					else if (chto == 9201) {
						int y = 0;
						for (int x = 0; x < shapka.size(); ++x) {
							std::cout << " шапка: " << shapka[x].kak << "|" << " шарф: " << sharf[x].kak << "\n";
						}
						for (int x = 0; x < zele.size(); ++x) {
							std::cout << " чай: " << zele[x].kak << "\n";
						}
						txt50 += "*были использованы читы*";
						cikl2 = 1;
					}
					else if (chto == 11 && pribor > 0 && faza > 0) {
						pribor -= 1;
						std::cout << txt95 << shapka[s].kak << "\n";
						cikl2 = 1;
					}
					else if (chto == 22 && priborf > 0 && faza > 0) {
						priborf -= 1;
						std::cout << txt96 << sharf[f].kak << "\n";
						cikl2 = 1;
					}
					else if (chto == 33 && invertor > 0 && faza > 0) {
						--invertor;
						if (shapka[s].kak == 1) { shapka[s].kak = -1; }
						else if (shapka[s].kak == -1) { shapka[s].kak = 1; }
						if (sharf[f].kak == 1) { sharf[f].kak = -1; }
						else if (sharf[f].kak == -1) { sharf[f].kak = 1; }
						std::cout << txt127;
						cikl2 = 1;
					}
					else if (chto == 44 && pribor_metall > 0 && faza > 0 && metall[ME].kak < 4) {
						--pribor_metall;
						metall[ME].kak += 1;
						std::cout << txt94;
						cikl2 = 1;
					}
					else if (chto == 55 && pribor_es > 0 && faza > 0 && es[ES].kak < 4) {
						--pribor_es;
						es[ES].kak += 1;
						std::cout << txt93;
						cikl2 = 1;
					}
					else if (chto == 66 && znachenie_metall > 0 && faza > 0) {
						--znachenie_metall;
						std::cout << txt97 << metall[ME].kak << "\n";
						cikl2 = 1;
					}
					else if (chto == 77 && znachenie_es > 0 && faza > 0) {
						--znachenie_es;
						std::cout << txt98 << es[ES].kak << "\n";
						cikl2 = 1;
					}
					else if (chto == 88 && znachenie_chai > 0 && faza > 0) {
						--znachenie_chai;
						std::cout << txt99 << zele[chai].kak << "\n";
						cikl2 = 1;
					}
					else if (chto == 99 && pribor_chai > 0 && faza > 0 && zele[chai].kak > 0) {
						--pribor_chai;
						zele[chai].kak -= 1;
						std::cout << txt92;
						cikl2 = 1;
					}
					else if (chto == 0) {
						int x = menu(proideno,zabeg);
						if (x == 1) { igra = 0; cikl2 = 0; cikl = 0; }
						else { cikl2 = 1; cikl = 0; }
						prodolszit_put = 1;
					}
					else if (chto == 1 && faza == 0) { prodolszit_put = 1; cikl = 0; cikl2 = 0; }
					else if (chto == 4 && faza == 0) { cikl = 0; cikl2 = 0; }
					else if (chto == 7089) { txt51 += "&были использованы читы&"; faza = 1; }
					else if (chto == 2 && faza == 0 && mozhno_v_pisheru == 1) { pishera(mozhno_v_pisheru, spear, iron, nickel, proideno); mozhno_listya = 0; }
					else if (chto == 3 && faza == 0 && mozhno_v_les == 1 && (spear > -1 || fakel > -1 || look > -1)) { cikl2 = 1; les(spear, fakel, look, mozhno_v_les, derevo,infection); mozhno_listya = 0; }
					else if (chto == 5 && mozhno_listya) { sobrat_listya(listya, mozhno_listya); mozhno_v_pisheru = 0;  mozhno_v_les = 0; }
					else if (chto == 6 && bint > 0 && vector_krov.size() > 0) { krov_bint(bint); cikl2 = 1; }
					else if (chto == 10 && vector_lekarstvo.size() > 0) { lechit_bolezn(bolezn, infection, krov, imunitet); peredoz_lekk = 1; cikl2 = 1; }
					else if (chto == 7 && vector_zhgut.size() > 0 && vector_krov.size() > 0) { zhgut_operation(); cikl2 = 1; }
					else { std::cout << txt20; cikl2 = 1; cikl = 0; }

				} while (cikl);
			} while (cikl2 || (prodolszit_put == 0 && faza <= 0));
			if (golo <= 0) {
				std::cout << txt111;
				igra = 0;
			}
			if (infection > -1 && infection < 100 && inffection) {
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
				else {
					infection -= 1.4;
					imunitet -= 1.5;

				}
			}
			else if (infection >= 100) {
				golo /= 2;
				infection = -1;
			}
			if (faza > 0 && igra == 1) { ++proideno; }
			if (cat > 0 && faza > 0) { --cat; }
			
		    if (peredoz_lekk && peredoz_lek <= 0) { peredoz_lek += 5; }
			else if (peredoz_lekk && peredoz_lek > 0) { peredoz_lek += 5; vector_krov.push_back({1}); }
			else if (peredoz_lek > 0) { --peredoz_lek; }

			if (prodolszit_put) { faza = 5; }
			else if (faza > 0) { --faza; }
			if (krov_sto > 0) { --krov_sto; }

			if (krov <= 0) { golo -= 2; }
			else if (krov > 100 && krov_sto <= 0) { vector_krov.push_back({ 1 }); krov_sto = 5; }
			for (int index = 0; index < vector_krov.size(); ++index) {
				
				if(vector_krov[index].index_ > -1 && vector_krov[index].timer_zhguta > 0) {
					--vector_krov[index].timer_zhguta;
				}
				else if (vector_krov[index].index_ > -1 && vector_krov[index].timer_zhguta == 0) {
					infection += 3.0;
				}
				else {
					int sluchano = chance(chislo);
					if (vector_krov[index].tyazhest == 1) { if (sluchano <= 1.0 && bolezn <= -1.0) { bolezn = 20.0; bollezn = 0; } krov -= 2.0; }
					else if (vector_krov[index].tyazhest == 2) { if (sluchano <= 1.0 && bolezn <= -1.0) { bolezn = 20.0; bollezn = 0; }krov -= 3.0; }
					else if (vector_krov[index].tyazhest == 3) { if (sluchano <= 1.0 && bolezn <= -1.0) { bolezn = 20.0; bollezn = 0; }krov -= 5.0; }
					else if (vector_krov[index].tyazhest == 4) { if (sluchano <= 1.0 && bolezn <= -1.0) { bolezn = 20.0; bollezn = 0; }krov -= 6.0; }
				}

			}
			if (bolezn > -1 && bollezn && bolezn < 100) {
				if (imunitet <= 50) {
					bolezn += 7.1;
					imunitet -= 0.5;
				}
				else if (imunitet <= 100) {
					bolezn += 0.5;
					imunitet -= 7.1;
				}
				else if (imunitet <= 150) {
					bolezn += 1.5;
					imunitet -= 1.5;
				}
				else if (imunitet <= 200) {
					bolezn -= 0.5;
					imunitet -= 4.2;
				}
				else if (imunitet <= 250) {
					bolezn -= 1.6;
					imunitet -= 8.6;
				}
				else {
					bolezn -= 2.3;
					imunitet -= 2.0;
				}
			}
			else if (bolezn >= 100) {
				golo = 0;
				bolezn = -1;
			}
			save(proideno,zabeg);
			if (proideno >= porog_sbrosa) {
				porog_sbrosa += 100;
				create();
			}

		}
	}
	std::cout << " конец\n ";
	return 0;}