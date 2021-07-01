#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

class Ingresso
{
protected:
    float valor;

public:
    Ingresso(float valor);
    void imprimeValor();
    ~Ingresso();
};

class IngressoVIP : public Ingresso
{
private:
    float valorAdicionalVIP;

public:
    IngressoVIP(float valorAdicionalVIP, float valor);
    float getValorVIP();
    ~IngressoVIP();
};

class IngressoNormal : public Ingresso
{
public:
    IngressoNormal(float valor);
    void imprimeTipo();
    ~IngressoNormal();
};

class CamaroteInferior : public IngressoVIP
{
private:
    string localizacao;

public:
    CamaroteInferior(string localizacao, float valorAdicionalVIP, float valor);
    string getLocalizacaoInf();
    void imprimeLocalizacaoInf();
    ~CamaroteInferior();
};

class CamaroteSuperior : public IngressoVIP
{
private:
    string localizacao;
    float valorAdicionalCamarote;

public:
    CamaroteSuperior(string localizacao, float valorAdicionalCamarote, float valorAdicionalVIP, float valor);
    string getLocalizacaoSup();
    void imprimeLocalizacaoSup();
    float getValorCamarote();
    ~CamaroteSuperior();
};

// Métodos das classes _________________________________________________________________________________________________________________________________________________________________________________________
// *************************************************************************************************************************************************************************************************************
// *************************************************************************************************************************************************************************************************************

Ingresso::Ingresso(float valor)
{
    this->valor = valor;
}

void Ingresso::imprimeValor()
{
    cout << "R$" << valor;
}

IngressoVIP::IngressoVIP(float valorAdicionalVIP, float valor) : Ingresso(valor)
{
    this->valorAdicionalVIP = valorAdicionalVIP;
}

float IngressoVIP::getValorVIP()
{
    return valor + valorAdicionalVIP;
}

IngressoNormal::IngressoNormal(float valor) : Ingresso(valor) {}

void IngressoNormal::imprimeTipo()
{
    cout << "Ingresso Normal";
}

CamaroteInferior::CamaroteInferior(string localizacao, float valorAdicionalVIP, float valor) : IngressoVIP(valorAdicionalVIP, valor)
{
    this->localizacao = localizacao;
};

string CamaroteInferior::getLocalizacaoInf()
{
    return localizacao;
}

void CamaroteInferior::imprimeLocalizacaoInf()
{
    cout << "\nLocalizacao: " << getLocalizacaoInf();
}

CamaroteSuperior::CamaroteSuperior(string localizacao, float valorAdicionalCamarote, float valorAdicionalVIP, float valor) : IngressoVIP(valorAdicionalVIP, valor)
{
    this->localizacao = localizacao;
    this->valorAdicionalCamarote = valorAdicionalCamarote;
}

string CamaroteSuperior::getLocalizacaoSup()
{
    return localizacao;
}

void CamaroteSuperior::imprimeLocalizacaoSup()
{
    cout << "\nLocalizacao: " << getLocalizacaoSup();
}

float CamaroteSuperior::getValorCamarote()
{
    return getValorVIP() + valorAdicionalCamarote;
}

// Métodos destrutores  ________________________________________________________________________________________________________________________________________________________________________________________
// *************************************************************************************************************************************************************************************************************
// *************************************************************************************************************************************************************************************************************

Ingresso::~Ingresso(){}

IngressoVIP::~IngressoVIP(){}

IngressoNormal::~IngressoNormal(){}

CamaroteInferior::~CamaroteInferior(){}

CamaroteSuperior::~CamaroteSuperior(){}
