#include "C_CALCUL.h"

C_CALCUL::C_CALCUL(TypeDeProjet type)
{
	switch (type)
	{

	case C_CALCUL::TypeDeProjet::ORGANIC:
		TypeProjetInt = 0;
		break;
	case C_CALCUL::TypeDeProjet::DETACHED:
		TypeProjetInt = 1;
		break;
	case C_CALCUL::TypeDeProjet::EMBEDDED:
		TypeProjetInt = 2;
		break;
	default:
		TypeProjetInt = 0;
		break;
	}

}

void C_CALCUL::setKLOC(float KLOC)
{
	this->KLOC = KLOC;
}

void C_CALCUL::setEAF(float EAF)
{
	this->EAF = EAF;
}

float C_CALCUL::calcul_E()
{
	float E;

	switch (TypeProjetInt)
	{
	case 0:
	//	E = organic_A * (KLOC ^ organic_B) * EAF;
		break;
	case 1:
		break;
	case 2:
		break;
	default:
	//	E = organic_A * (KLOC ^ organic_B) * EAF;
		break;
	}
	return 0;
}

float C_CALCUL::calcul_D(float E)
{
	return 0;
}

float C_CALCUL::calcul_P(float E, float D)
{
	return 0;
}
