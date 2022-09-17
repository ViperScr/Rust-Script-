struct vec2
{
	double x;
	double y;
};

struct vec1
{
	double x;
	double y;
};

std::vector<vec1> Recoil_Ak47 = { {0, 53}, {-5, 55}, {-25, 55}, {-25, 53}, {-25, 53}, {-27, 60}, {-29, 59}, {-32, 59}, {-35, 60}, {-36, 5
std::vector<vec2> Recoil_Lr300 = { {0, 41}, {-1 47}, {-1, 48}, {0, 50}, {-1, 52}, {0, 53}, {1, 46}, {0, 46}, {-1, 48}, {-1, 48}, {-1, 47}, {-1, 47}, {0, 48}, {-1, 47}, {0, 46}, {-1, 47}, {0, 46}, };

std::vector<vec2> Recoil_Mp5a4 = { , 26}, {0, 26}, {0, 26}, {-1, 25}, {0, 25}, {1, 26}, {0, 26}, {-1, 25}, {0, 25}, , 25}, {0, 25} };

std::vector<vec2> Recoil_Custom_g = { {0, 18}, {-1, 18}, {0, 19}, {2, 19}, {4, 19}, {4, 18}, {5, 18}, {4, 18}, {3, 18}, {-2, 18}, {-2, 18}, {-2, 18}, {-1, 18}, {0, 19}, {-1, 18}, {-2, 18}, {-2, 18}, {-2, 18}, {-2, 18}, {-1, 19}, {-2, 18}, {-2, 19}, {-2, 19 }, {-2, 18}, {-3,  18}, {-2, 18} };
namespace WeaponData {
	struct {
		const double Delay = 133.3333;
	}AK47;
	struct {
		const int Delay = 120;
	}LR300;
	struct {
		const int Delay = 100;
	
	}M39;
}
namespace Multiplyer {
	struct {
		double x8 = 6.31;
		double x16 = 9.38;
		double Holo = 1.2;
		double LegitMode = 0.8;
	}Barrel;

	struct {
		int crouch = 2;
		int none = 1;
	}Crouch;

}