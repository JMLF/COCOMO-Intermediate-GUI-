#pragma once
#include <math.h>
//classe de calcul pour le model COCOMO1

class C_CALCUL
{
protected: 
	
	//constante des projets organique 
	const float organic_A = 2.4;
	const float organic_B = 1.05;
	const float orgnic_C = 0.38;

	//constante des projets semi-détaché
	const float detached_A = 3.0;
	const float detached_B = 1.12;
	const float detached_C = 0.35;

	//constante des projets imbriqué
	const float embedded_A = 3.6;
	const float embedded_B = 1.20;
	const float embedded_C = 0.32;

	float KLOC; //nombres de lignes de code (en millier)
	float EAF; //effort ajustement factor
	
	int TypeProjetInt;

	float E; //Effort
	float D; //Developpement time
	float P; //most effective number of persons 

public:
	
	enum class TypeDeProjet { ORGANIC, DETACHED,EMBEDDED};

	C_CALCUL(TypeDeProjet type = TypeDeProjet::ORGANIC);

	void setKLOC(float KLOC);
	void setEAF(float EAF);

	float calcul_E();
	float calcul_D(float E);
	float calcul_P(float E, float D);

};

