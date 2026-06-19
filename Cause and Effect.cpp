#include <iostream>
#include <random>
#include <chrono>
#include <vector>
#include <fstream>
#include <thread>
#include <string>
#include <conio.h>
#include "text.h"
#include <mutex>
int iii = 2;
int skoko_chaev = 3;
int potok = 1;

int proideno = 0;
int sec = 0;
int record = 0;
int languge = 0;

int vremya = 0;
int vsego_proideno = 0;

int save_time = 0;
int save_proideno = 0;
std::mutex save_mutex;

double iron = 0;
double copper = 0;
double derevo = 0;
double coal = 0;
double nickel = 0;
double steel = 0;

std::mt19937 chislo(std::chrono::steady_clock::now().time_since_epoch().count());
std::uniform_int_distribution j(-1, 1);
std::uniform_int_distribution da(0, skoko_chaev);
std::uniform_int_distribution dlyashapok(0, iii);
std::uniform_int_distribution bite_chai(0, 4);
std::uniform_int_distribution podarok(0, 3);
std::uniform_int_distribution otvety(1, 2);
std::uniform_int_distribution chance(1, 100);

struct kto {
	int kak;
	double kg;};

struct cave {
	int x = 0;
	int y = 0;
	int id = -1;
};
std::vector<cave> entity{
	{0,0,0},
};
cave igrok;
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
		save_mutex.lock();
		++sec;
		save_mutex.unlock();
	}

}
);
void save() {
	std::ofstream file("Cause_and_Effect_save_file.txt");
		if (!file) { return; }
		file << vsego_proideno << " " << vremya << " " << record << " " << languge;
}
void read_save() {
	std::ifstream file("Cause_and_Effect_save_file.txt");
		if (!file) { return; }
		file >> save_proideno >> save_time >> record >> languge;
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
int craft(int& pribor, int& priborf, int& invertor, bool& organ, double& imunitet, double& infection, int& cat, int& pribor_metall, int& pribor_es, int& znachenie_metall, int& znachenie_es, int& znachenie_chai, int& spear, int& fakel, int& look, int& pribor_chai, bool& organ2) {
	std::cout << txt2;
	if (iron >= 0.600 && pribor <= -1) { std::cout << txt3; }
	if (iron >= 0.600 && derevo >= 0.150 && priborf <= -1) { std::cout << txt4; }
	if (iron >= 1.3 && invertor <= -1) { std::cout << txt5; }
	if (derevo >= 0.31) { std::cout << txt6; }
	if (nickel >= 0.300 && (pribor > -1 || priborf > -1 || invertor > -1 || cat > -1 || pribor_metall > -1 || znachenie_metall > -1 || pribor_es > -1 || znachenie_es > -1 || znachenie_chai > -1 || pribor_chai > -1)) { std::cout << txt7; }
	if (nickel >= 0.600 && organ == 0) { std::cout << txt8; }
	if (nickel >= 0.100 && iron >= 0.200) { std::cout << txt9; }
	if (nickel >= 0.080 && iron >= 0.150 && infection > -1) { std::cout << txt10; }
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
	else if (chto == 7 && nickel >= 0.100 && iron >= 0.200) {
		imunitet += 15;
		nickel -= 0.100;
		iron -= 0.200;
	}
	else if (chto == 8 && nickel >= 0.080 && iron >= 0.150 && infection > -1) {
		infection -= 15;
		nickel -= 0.080;
		iron -= 0.150;
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
	else if (chto == 0) { return 0; }
	else { std::cout << txt20; }

	return 0;
}
void menu2() {
	create();
}
int menu() {
	int r = 0;
	do{
		r = 0;
		std::cout << txt0 << txt1;
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
		else if (chto == 4) { languge = 0; r = 1; }
		else if (chto == 5) { languge = 1; english(); r = 1; }
	} while (r);
	menu2();
	return 1;
}
void sobrat(int x, int y) {
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
		if (entity[index].id == 3 && ((entity[index].x == x && entity[index].y == y) || (entity[index].x == x + 1 && entity[index].y == y) || (entity[index].x == x - 1 && entity[index].y == y) || (entity[index].x == x && entity[index].y == y + 1) || (entity[index].x == x && entity[index].y == y - 1))) {
			if (boevoy > 0 && spear > -1) {
				--spear;
				std::cout << txt128;
			}
			else {
				golo -= 1;
				std::cout << txt126;
			}
			entity.erase(entity.begin()+index);
			--index;
		}
		++index;
	}
}
void pishera(bool& mozhno_v_pisheru,int& spear) {
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
		++razmer;
	}
	int ruda_nickel = 5;
	int ruda_iron = 5;
	int lovushka = 15;
	for (int x = 0; x < 5; ++x) {
		for (int y = 0; y < 20; ++y) {
			int sluchano = chance(chislo);
			if (sluchano <= 5 && ruda_nickel > 0) {
				entity.push_back({x,y,1});
				--ruda_nickel;
			}
			else if (sluchano <= 10 && ruda_iron > 0) {
				entity.push_back({ x,y,2 });
				--ruda_iron;
			}
			else if (sluchano <= 20 && !(x <= 2 && y <= 2)) {
				entity.push_back({ x,y,3 });
				--lovushka;
			}
		}
		if (ruda_nickel <= 0 && ruda_iron <= 0 && lovushka <= 0) { break; }
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
		case 69: { sobrat(entity[0].x, entity[0].y); break; }
		case 101: { sobrat(entity[0].x, entity[0].y); break; }
		case 102: { boevoy = 2; break; }
		case 70: { boevoy = 2; break; }
		};
		proverka_lovushka(entity[0].x,entity[0].y,boevoy,spear);
		int chto = 0;
		for (int x = 0; x < 5; ++x) {
			for (int y = 0; y < 20; ++y) {
				
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
						else { chto = 0; }
					}
				}
				switch (chto) {
				case 0: { std::cout << "."; break; }
				case 1: { std::cout << "|"; break; }
				case 2: { std::cout << "&"; break; }
				case 3: { std::cout << "@"; break; }
				case 4: { std::cout << ","; break; }
				}

			}
			std::cout << '\n';}
		std::cout << '\n';
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
		if (boevoy > 0) { --boevoy; }
	}
	mozhno_v_pisheru = 0;
}
void les(int& spear, int& fakel, int& look,bool& mozhno_v_les) {
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



	if (!pobeda) { std::cout << txt116; --golo; }
	else { std::cout << txt115; derevo += 0.400; }

	mozhno_v_les = 0;
}
void znacheniya_igroka(bool organ, double infection, double imunitet, bool organ2) {
	std::cout << txt502 << txt100 << golo << txt101 << txt53 << txt100 << organ << txt101 << txt54 << txt100 << infection << txt101 << txt55 << txt100 << imunitet << txt101 << txt053 << txt100 << organ2 << txt101;
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
		std::cout << txt92; --zele[index].kak;
	}
	else if (x == 3 && zele[index].kak < 4) {
		std::cout << txt77; ++zele[index].kak;
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
void razgovor(int otvet,int szeleza,int dereva,int Nickel,int Copper) {
	int chto;
	if (otvet == 1) {
		std::cout << txt80;
		chto = vvod();
	}
	else if (otvet == 2) {
		std::cout << txt81;
		chto = vvod();
		if (chto == 1) {
			std::cout << txt82;
			chto = vvod();
			if (chto == 1) { std::cout << txt83; }
		}
		else if (chto == 2) {
			std::cout << txt84;
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
int main()
{
	system("chcp 1251 > nul");
	read_save();
	if (languge == 1) { english(); }

	while (shapka.size() < 1 || sharf.size() < 1 || zele.size() < 1 ){
		menu();
	}
	while(true){
	read_save();

	igra = 1;
	golo = 15;
	int bite = -1;
	int bite2 = 3;
	int bite_esme = 2;
	int anti_bite = 6;

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
	double imunitet = 175;
	int inffection = 0;
	
	int faza = 5;
	

	std::cout << txt22;
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
		
		bool prodolszit_put = 0;
		bool mozhno_v_les = 1;
		bool mozhno_v_pisheru = 1;

		bool uslovie_ukusa = 0;
		bool uslovie_bite = 0;
		bool uslovie_bite2 = 0;
		bool uslovie_bite_esme = 0;

		if (!(esme >= anti_bite && zele[chai].kak == 2) && (sf <= bite || zele[chai].kak >= bite2 || (zele[chai].kak == bite2 - 1 && esme <= bite_esme))) {
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
				if (zele[chai].kak == (bite2 - 1) && esme <= bite_esme && sf <= bite && infection < 0) {
					golo -= 1;
					infection = 30;
					inffection = 1;
				}
				else if (sf <= bite && zele[chai].kak >= bite2 && organ == 1) { organ = 0; }
				else if (sf <= bite - 1 && zele[chai].kak == 0 && organ2 == 1) { organ2 = 0; }
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
				pishutsya_nazvaniya_shapok(shp,shf,c,e,m,s,f,chai,ES,ME);

				std::cout << txt36 << txt100 << shp << txt101 << txt37 << txt100 << shf << txt101 << txt38 << txt100 << c << txt101 << "\n";
				
				std::cout << txt47 << txt100 << e << txt101 << txt48 << txt100 << m << txt101 << txt49;
				if (pokozat == 1) { std::cout << txt110 << shp << ":  " << txt100 << shapka[s].kak << txt101 << "  " << shf << ":  " << txt100 << sharf[f].kak << txt101 << "  " << c << ":  " << txt100 << zele[chai].kak << txt101 << "  " << e << ":  " << txt100 << es[ES].kak << txt101 << "  " << m << ":  " << txt100 << metall[ME].kak << txt101 << txt49; pokozat = 0; }

				std::cout << txt52;
				znacheniya_igroka(organ,infection,imunitet,organ2);
				std::cout << txt50;
			}
			else {
				std::cout << txt51 << txt52 << txt553;
				if (mozhno_v_pisheru) { std::cout << txt554; }
				if ((spear > -1 || fakel > -1 || look > -1) && mozhno_v_les) { std::cout << txt551; }
				std::cout << txt552;
				znacheniya_igroka(organ, infection, imunitet,organ2);
			}
			if (iron != 0) { std::cout << txt56 << iron; }
			if (copper != 0) { std::cout << txt57 << copper; }
			if (derevo != 0) { std::cout << txt58 << derevo; }
			if (coal != 0) { std::cout << txt59 << coal; }
			if (nickel != 0) { std::cout << txt60 << nickel; }
			if (steel != 0) { std::cout << txt61 << steel; }
			

			
			if (pribor > -1) { std::cout << txt62 << pribor; }
			if (priborf > -1) { std::cout << txt63 << priborf; }
			if (invertor > -1) { std::cout << txt64 << invertor; }
			if (cat > -1) { std::cout << txt65 << cat; }
			if (pribor_metall > -1) { std::cout << txt66 << pribor_metall; }
			if (pribor_es > -1) { std::cout << txt67 << pribor_es; }
			if (znachenie_metall > -1) { std::cout << txt68 << znachenie_metall; }
			if (znachenie_es > -1) { std::cout << txt69 << znachenie_es; }
			if (znachenie_chai > -1) { std::cout << txt70 << znachenie_chai; }
			if (pribor_chai > -1) { std::cout << txt700 << pribor_chai; }

			
			if (spear > -1) { std::cout << txt121 << spear; }
			if (fakel > -1) { std::cout << txt122 << fakel; }
			if (look > -1) { std::cout << txt123 << look; }
			

			std::cout << txt72 << proideno << txt73 << vsego_proideno << txt74 << vremya << txt072 << record << txt71 << "\n\n\n";

			bool cikl = 0;
			do {
				cikl = 0;
				int chto = vvod();
				if (chto == 1 && faza > 0) {
					if (uslovie_bite) {
						operation(1,s,f);
					}
					else if (uslovie_bite2) { operation(3,chai); }
					else if (uslovie_bite_esme) {operation(4,ES,ME);}
					else {
						if (sf == bite + 1) {
							razgovor(otvet,szeleza,dereva,Nickel,Copper);
						}
						else if (sf >= bite + 2) {
							operation(0,s,f);
						}
					}

				}
				else if (chto == 2 && faza > 0) {
					if (uslovie_bite2) { operation(3,chai); }
					else if (uslovie_bite) {
						operation(0,s,f);
					}
					else if (uslovie_bite_esme) {
						operation(4,ES,ME);
					}
				}
				else if (chto == 3 && faza > 0 && !uslovie_ukusa) {
					if (sf >= bite + 2) {
						razgovor(otvet,szeleza,dereva,Nickel,Copper);
					}
					else if (sf == bite + 1) {
						operation(0, s, f);
					}
				}
				else if (chto == 9) {
					craft(pribor, priborf, invertor, organ, imunitet, infection, cat,pribor_metall,pribor_es,znachenie_metall,znachenie_es,znachenie_chai,spear,fakel,look,pribor_chai,organ2);
					cikl2 = 1;
				}
				else if (chto == 4 && faza > 0) {
					if (uslovie_bite_esme || !(uslovie_bite || uslovie_bite2)) {
						operation(5,ES,ME);
					}
					else if (uslovie_bite) {
						operation(0,s,f);
					}
					else if (uslovie_bite2) { operation(3, chai); }

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
					int x = menu();
					if (x == 1) { igra = 0; cikl2 = 0; cikl = 0; }
					else { cikl2 = 1; cikl = 0; }
				}
				else if (chto == 1 && faza == 0) { prodolszit_put = 1; cikl = 0; cikl2 = 0; }
				else if (chto == 4 && faza == 0) { cikl = 0; cikl2 = 0; }
				else if (chto == 7089) { txt51 += "&были использованы читы&"; faza = 1; }
				else if (chto == 2 && faza == 0 && mozhno_v_pisheru == 1) { pishera(mozhno_v_pisheru,spear); }
				else if (chto == 3 && faza == 0 && mozhno_v_les == 1 && (spear > -1 || fakel > -1 || look > -1)) { cikl2 = 1; les(spear, fakel, look, mozhno_v_les); }
				else { std::cout << txt20; cikl2 = 1; }

			} while (cikl);
		} while (cikl2 || (prodolszit_put == 0 && faza <= 0));
		if (golo <= 0) {
			std::cout << txt111;
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
		if (faza > 0 && igra == 1) {++proideno;}
		if (cat > 0 && faza > 0) { --cat; }
		if (prodolszit_put) { faza = 5; }
		else if (faza > 0) { --faza; }

		save_mutex.lock();
		vsego_proideno = proideno + save_proideno;
		vremya = sec + save_time;
		if (proideno > record) { record = proideno; }
		save_mutex.unlock();
		save();
	}
	}
	potok = 0;
	a.join();
	std::cout << " конец\n ";
	return 0;}