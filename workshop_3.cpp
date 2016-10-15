#include <iostream>
#include <string>


class Rapper {
        protected:
		std::string name;
		int money;
                int hoes;
		std::string song_name;
		
		public:
		    Rapper() {};
		    Rapper(int, int);
		    
                    int get_money() {return money;}
                    int get_hoes() {return hoes;}
            
                    Rapper operator+ (const Rapper&);
            
                    virtual std::string get_song(){return song_name;}

};

Rapper::Rapper (int m, int h) {
	money = m;
        hoes = h;
}

Rapper Rapper::operator+ (const Rapper& param) {
	Rapper temp;
	temp.money = money + param.money;
	temp.hoes = hoes + param.hoes;
	return temp;
}

class Eminem: public Rapper {

  public:
	Eminem();
	Eminem(int, int);
	std::string get_song(){return song_name;}
    
};

Eminem::Eminem (int m, int h) {
	name = "Eminem";
	song_name = "Real Slim Shady";
	money = m;
	hoes = h;
}

int main() {
    
    // --- Part 1 ----
    Rapper rapper0(2000, 18);
	std::cout << "Rapper 0 has "<< rapper0.get_money()<<" dollars.\n";
	std::cout << "AND "<< rapper0.get_hoes()<<" hoes.\n";
	
	Rapper rapper1(2000, 18);
	Rapper rapper2(2000, 19);
	Rapper totalRapper = rapper1 + rapper2;
	std::cout << "Rapper 1 and 2 have a total of "<< totalRapper.get_money()<<" dollars.\n";
	std::cout << "AND "<< totalRapper.get_hoes()<<" hoes.\n";
	
	// --- Part 2 ----
	
	std::srand(time(NULL));
	int slim = rand() % 3 + 1;
	Eminem ex(10, 0);
	Eminem em1(100, 1);
	Eminem em2(1000, 2);
        Eminem em3(10000, 3);
    
        std::cout << ex.get_song() << std::endl;
	std::cout << "Will the the real Slim Shady please stand up? \n";
	
	std::cout << ex.get_song() << std::endl;
	std::cout << "Will the the real Slim Shady please stand up? \n";

	if (slim == 1)
		std::cout<< "Eminem 1 has " << em1.get_money() << " dollars.\n";
        else if (slim == 2)
		std::cout<< "Eminem 2 has " << em2.get_money() << " dollars.\n";
	else if (slim == 3)
		std::cout<< "Eminem 3 has " << em3.get_money() << " dollars.\n";
        else
	        std::cout<< "We’re gonna have a problem here.";
}
