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
	double kg;
};
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
struct skolko_chego {
	double skolko = 0.0;
	std::string chego = null;
};
struct struct_kachestvo {


};
struct struct_cena {
	std::vector<skolko_chego> vector_skolko_chego;
	std::vector<struct_kachestvo> vector_kachestvo;
	std::string text_nazvanie = null;
	std::string text_kuda_vhodit = null;
};
class item {
	double skolko = -1.0;
	double kachestvo = -1.0;
	struct_cena cena;
public:
	struct_cena& get_cena() { return cena; }
	double get_skolko() { return skolko; }
	void set_plus_skolko(double x) { skolko += x; }
	void set_minus_skolko(double x) { skolko -= x; }
	double get_kachestvo() { return kachestvo; }
	void set_kachestvo(double x) { 
		if (kachestvo < 0) { kachestvo = x; }
		else { kachestvo = (kachestvo + x) / 2; }
	}
};
std::vector<item> vector_item;
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
void create() {
	for (int x = 0; x < vector_item.size(); ++x) {
		if (vector_item[x].get_zaryad(4) < -100) { vector_item.erase(vector_item.begin() + x); --x; }
	}
	int chto = znacheniya_shapok(chislo);
	int chto1 = znacheniya_shapok(chislo);
	int chto2 = bite_chai(chislo);
	for (int x = 0; x < kakaya_shapka; ++x) {
		item s;
		if (chto > 0) { s.set_no_kg(1, chto); }
		else if (chto < 0) { s.set_no_kg(0, chto); }
		s.get_zaryad(7) = 0;
		s.get_zaryad(8) = 1;
		s.get_zaryad(6) = 1;
		s.get_zaryad(5) = 0;
		s.get_zaryad(4) = -1;
		s.get_cena().text = txt36;
		if (x == 0) { s.get_cena().text = txt24; }
		else if (x == 1) { s.get_cena().text2 = txt25; }
		else if (x == 2) { s.get_cena().text3 = txt26; }
		else if (x == 3) { s.get_cena().text4 = txt27; }
		vector_item.push_back(s);

		item f;
		if (chto1 > 0) { f.set_no_kg(1, chto1); }
		else if (chto1 < 0) { f.set_no_kg(0, chto1); }
		f.get_zaryad(7) = 1;
		f.get_zaryad(8) = 1;
		f.get_zaryad(6) = 1;
		f.get_zaryad(5) = 0;
		f.get_zaryad(4) = -1;
		f.get_cena().text = txt37;
		if (x == 0) { f.get_cena().text = txt28; }
		else if (x == 1) { f.get_cena().text2 = txt29; }
		else if (x == 2) { f.get_cena().text3 = txt30; }
		else if (x == 3) { f.get_cena().text4 = txt31; }
		vector_item.push_back(f);

		item c;
		c.set_no_kg(1,chto2);
		c.get_zaryad(7) = 2;
		c.get_zaryad(5) = 1;
		c.get_zaryad(4) = 3;
		c.get_cena().text = txt38;
		if (x == 0) { c.get_cena().text = txt32; }
		else if (x == 1) { c.get_cena().text2 = txt33; }
		else if (x == 2) { c.get_cena().text3 = txt34; }
		else if (x == 3) { c.get_cena().text4 = txt35; }
		vector_item.push_back(c);
	}
}
void UI(int x) {

}
void craft(bool& organ, double& imunitet, double& infection, int& cat, int& spear, int& fakel, int& look, int& pribor_chai, item& iron, item& nickel, item& derevo, item& copper, item& coal, item& steel, item& listya, int& bint, bool& mednaya_pech) {
	double cena_zhgut_steel = 0.100;

	int chto = vvod();
	if (chto == 4 && derevo >= 0.31) { golo += 1; derevo -= 0.31; }
	else if (chto == 5 && nickel >= 0.300 && (cat > -1 || pribor_chai > -1)) {
		nickel -= 0.300;
		int zaryad = 2;
		std::string a = txt17;
		std::string b = txt18;
		std::string c = txt19;
		while (zaryad > 0) {
			std::cout << a + b << txt100;
			if (cat > -1) { std::cout << txtZ4; }
			if (pribor_chai > -1) { std::cout << txtZ10; }
			std::cout << txt101 << "\n";
			int chto = vvod();
			if (chto == 4 && cat > -1) { cat += 10; }
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
		if (chto == 2) { return 0; }
		else if (chto == 3) {std::cout << txt_; r = 1;}
		else if (chto == 4) { languge = 0; russian(); r = 1; save(proideno,zabeg); }
		else if (chto == 5) { languge = 1; english(); r = 1; save(proideno,zabeg); }
	} while (r);
	create();
	return 1;
}
void sobrat(int x, int y, item& iron, item& nickel) {
	int index = 0;
	while (index < entity.size()) {
		if (entity[index].id == 1 && entity[index].x == x && entity[index].y == y) {
			entity.erase(entity.begin() + index);
			--index;
			nickel.set_kg(1,0.02);
			std::cout << txt124;
			break;
		}
		else if (entity[index].id == 2 && entity[index].x == x && entity[index].y == y) {
			entity.erase(entity.begin() + index);
			--index;
			iron.set_kg(1,0.02);
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
void pishera(bool& mozhno_v_pisheru,int& spear, item& iron, item& nickel,int proideno) {
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
void les(int& spear, int& fakel, int& look,bool& mozhno_v_les, item& derevo,double& infection) {
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
	else { std::cout << txt115; derevo.set_kg(1,0.4); }

	mozhno_v_les = 0;
}
void znacheniya_igroka(bool organ, double infection, double imunitet, double krov,double bolezn) {
	std::cout << txt502 << txt100 << golo << txt101 << txt53 << txt100 << organ << txt101 << txt55 << txt100 << imunitet << txt101 << txt129 << txt100 << krov << txt101;
	if (infection > -1) { std::cout << txt54 << txt100 << infection << txt101; }
	if (bolezn > -1) { std::cout << txt054 << txt100 << bolezn << txt101; }
	for (int index = 0; index < vector_krov.size(); ++index) {
		if (vector_krov[index].tyazhest == 1) { std::cout << "\n" << txtUvas << txt055; }
		else if (vector_krov[index].tyazhest == 2) { std::cout << "\n" << txtUvas << txt056; }
		else if (vector_krov[index].tyazhest == 3) { std::cout << "\n" << txtUvas << txt057; }
		else if (vector_krov[index].tyazhest == 4) { std::cout << "\n" << txtUvas << txt058; }
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
}
void razgovor(int otvet,int szeleza,int dereva,int Nickel,int Copper, item& copper, item& iron, item& nickel, item& derevo) {
	int chto = 0;
	bool cikl = 1;
	



	while (cikl) {



	}

}
void pishutsya_nazvaniya_shapok(std::string& shp,std::string& shf, std::string& c,int s,int f,int chai) {
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
}
void sobrat_listya(item& listya,bool& mozhno_listya) {
	int skolko_sobrano = 3;
	
	listya.set_no_kg(1,skolko_sobrano);
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
	else if (languge == 2) { russian(); }
	int proideno = 0;

	bool flag_menu = 0;
	for (int x = 0; x < vector_item.size(); ++x) {
		if (vector_item[x].get_zaryad(4) < -100) { flag_menu = 1; }
	}
	if (flag_menu) { menu(proideno, zabeg); }
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

		item copper;
		copper.get_cena().text = txt57;
		copper.get_cena().text2 = "copper";
		vector_item.push_back(copper);
		item coal;
		coal.get_cena().text = txt59;
		coal.get_cena().text2 = "coal";
		vector_item.push_back(coal);
		item steel;
		steel.get_cena().text = txt61;
		steel.get_cena().text2 = "steel";
		steel.get_cena().text3 = txt061;
		vector_item.push_back(steel);
		item iron;
		iron.get_cena().text = txt56;
		iron.get_cena().text2 = "iron";
		vector_item.push_back(iron);
		item derevo;
		derevo.get_cena().text = txt58;
		derevo.get_cena().text2 = "derevo";
		vector_item.push_back(derevo);
		item nickel;
		nickel.get_cena().text = txt60;
		nickel.get_cena().text2 = "nickel";
		vector_item.push_back(nickel);
		item listya;
		listya.get_cena().text = txtListya;
		listya.get_cena().text2 = "listya";
		vector_item.push_back(listya);
		item bint;
		bint.get_cena().listya = 3;
		bint.get_cena().text = txt1015;
		bint.get_cena().text2 = txt0555;
		bint.get_cena().text3 = txt00555;
		bint.get_cena().text3 = txtK1;
		bint.get_cena().text4 = txtK2;
		bint.get_cena().text5 = txtK3;
		bint.get_cena().text6 = txtK4;
		vector_item.push_back(bint);
		bool pokozat = 1;
		item organ;
		organ.get_zaryad(2) = 1;
		organ.get_cena().text = txt53;
		organ.get_zaryad(9) = 0;
		vector_item.push_back(organ);
		item cat;
		cat.get_cena().derevo = 2.5;
		cat.get_cena().text = txt11;
		cat.get_zaryad(1) = 0;
		cat.get_zaryad(9) = 0;
		vector_item.push_back(cat);
		item pribor_chai;
		pribor_chai.get_cena().iron = 2.0;


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

			

			int otvet = otvety(chislo);

			bool prodolszit_put = 0;
			bool mozhno_v_les = 1;
			bool mozhno_v_pisheru = 1;
			bool mozhno_listya = 1;

			

			bool peredoz_lekk = 0;
			bool inffection = 1;
			bool bollezn = 1;

			

			

			if (faza > 0) {
				
			}
			int cikl2 = 0;
			do {
				cikl2 = 0;
				if (faza > 0) {
					


					std::string shp = null;
					std::string shf = null;
					std::string e = null;
					std::string m = null;
					std::string c = null;
					pishutsya_nazvaniya_shapok(shp, shf, c, s, f, chai);

					std::cout << txt36 << txt100 << shp << txt101 << txt37 << txt100 << shf << txt101 << txt38 << txt100 << c << txt101 << "\n";
					if (pokozat == 1) { std::cout << txt110 << shp << ":  " << txt100 << shapka[s].kak << txt101 << "  " << shf << ":  " << txt100 << sharf[f].kak << txt101 << "  " << c << ":  " << txt100 << zele[chai].kak << txt101 << txt49; pokozat = 0; }

					std::cout << txt52;
					znacheniya_igroka(organ, infection, imunitet, krov, bolezn);
					std::cout << txt50;
				}
				else if (faza <= 0) {
					std::cout << txt51 << txt52 << txt553;
					if (mozhno_v_pisheru) { std::cout << txt554; }
					if ((spear > -1 || fakel > -1 || look > -1) && mozhno_v_les) { std::cout << txt551; }
					if (mozhno_listya) { std::cout << txt0554; }

					std::cout << txt552;
					znacheniya_igroka(organ, infection, imunitet, krov, bolezn);
				}
				if (bint > 0) { std::cout << "\n" << txtUvas << txt0555 << txt100 << bint << txt101; }
				if (bint > 0 && vector_krov.size() > 0) { std::cout << txt00555; }
				if (vector_lekarstvo.size() > 0) { std::cout << txt701 << txt100 << vector_lekarstvo.size() << txt101 << txt0701; }
				
				if (iron.get(2) > 0) { std::cout << "\n" << txtUvas << txt56 << txt100 << iron.get(2) << txt101; }
				if (copper.get(2) > 0) { std::cout << "\n" << txtUvas << txt57 << txt100 << copper.get(2) << txt101; }
				if (derevo.get(2) > 0) { std::cout << "\n" << txtUvas << txt58 << txt100 << derevo.get(2) << txt101; }
				if (coal.get(2) > 0) { std::cout << "\n" << txtUvas << txt59 << txt100 << coal.get(2) << txt101; }
				if (nickel.get(2) > 0) { std::cout << "\n" << txtUvas << txt60 << txt100 << nickel.get(2) << txt101; }
				if (steel.get(2) > 0) { std::cout << "\n" << txtUvas << txt61 << txt100 << steel.get(2) << txt101 << txt061 << txt100 << steel.get(4) << txt101; }
				if (cat > -1) { std::cout << txt65 << txt100 << cat << txt101; }
				if (pribor_chai > -1) { std::cout << txt700 << txt100 << pribor_chai << txt101 << txt0700; }
				if (listya.get(1) > 0) { std::cout << "\n" << txtUvas << txtListya << txt100 << listya.get(1) << txt101; }
				if (spear > -1) { std::cout << txt121 << txt100 << spear << txt101; }
				if (fakel > -1) { std::cout << txt122 << txt100 << fakel << txt101; }
				if (look > -1) { std::cout << txt123 << txt100 << look << txt101; }
				if (vector_zhgut.size() > 0) { std::cout << txt018 << txt100 << vector_zhgut.size() << txt101; }
				if (vector_zhgut.size() > 0 && vector_krov.size() > 0) { std::cout << txt019; }

				std::cout << txt72 << proideno << txt73 << vsego_proideno << txt072 << record << txt073 << zabeg << txt71 << "\n\n\n";
				bool cikl = 0;
				do {
					cikl = 0;
					int chto = vvod();
					if (chto == 1 && faza > 0) {
						if (uslovie_bite) {
							operation(1, s, f);
						}
						else if (uslovie_bite2) { operation(2, chai); }
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
						craft(organ, imunitet, infection, cat, spear, fakel, look, pribor_chai, iron, nickel, derevo, copper, coal, steel, listya, bint, mednaya_pech);
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