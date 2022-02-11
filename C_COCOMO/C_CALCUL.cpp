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
	E = organic_A * (pow(KLOC,organic_B)) * EAF;
	/*
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
	*/
	return E;
}

float C_CALCUL::calcul_D(float E)
{
	float D;
	D = 2.5 * (pow(E, orgnic_C));
	return D;
}

float C_CALCUL::calcul_P(float E, float D)
{
	float P;
	P = E / D;
	return P;
}
