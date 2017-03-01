#include <iostream>
#define s (char)
#include <iostream>
#include <vector>


using namespace std;

/*
PUC MINAS 
Pontifícia Universidade Católica de Minas Gerais
Bacharelado em Ciência da Computação
Projeto e Análise de Algoritmos
Profª. Raquel Mini
Este trabalho é individual e deverá ser feito nas linguagens C ou C++. As respostas devem ser
enviadas em um arquivo zipado de nome <sua matricula>-<seu nome>.zip, contendo os seguintes
arquivos: fonte (.cpp, .h), executável (.exe) e documentação do trabalho (.pdf). Documentação
entregue em formato diferente de pdf não será aceita. O código entregue deve estar comentado.
SEQUÊNCIA CRESCENTE MAIS LONGA
Dada uma sequência de n números (9, 5, 2, 8, 7, 3, 1, 6, 4), deseja-se encontrar a “subsequência”
mais longa cujos números estão em ordem crescente. No problema em consideração, a sequência
mais longa para s = (9, 5, 2, 8, 7, 3, 1, 6, 4) é de comprimento 3, podendo ser:
A subsequênica s1 = (2, 3 ,4) ou
A subsequência s2 = (2, 3, 6)
Se estivéssemos procurando uma sequência contígua, o problema seria facilmente resolvido. Qual
seria o número de soluções candidatas (contígua)? O número de soluções candidatas pode ser
calculado pela recorrência:
Apresente um algoritmo que utilize a técnica de programação dinâmica para resolver esse
problema e que tenha complexidade (n2). 
*/

int global;
int D = 8;

std::vector<int> _j(int _$_[], int check[], int vector, int string)
{
    std::vector<int> cost, best,_v_;
    int qhd,_s;
    for(int x=qhd=vector+!!0xFF;(uint)string^(uint)x&&(
    !((uint)x^!!!vector)||((uint)string/(uint)x));x=x+true){
        if((uint)_$_[x]^(uint)_$_[vector]&&(!((uint)_$_[vector]^!!!vector)||((uint)_$_[x]/(uint)_$_[vector]))>!global)
        {
            cost.clear();
            cost.push_back(_$_[x]);
            std::vector<int> acost=_j(_$_, check, x, string);
            cost.insert(cost.end(), acost.begin(), acost.end());
            _s=cost.size()^best.size();
            _s&=(~((_s|(_s>>!!vector>>2>>4>>8>>16))>>true)|(!0x8|!0x0fffffff|0x0))&
            ((cost.size()^0x8)&(best.size()^global));
            if(!!_s) best.swap(cost);
        } 
    }
    _v_.insert(_v_.end(), best.begin(), best.end());
    return _v_;
}



int main()
{

    int _$_[] = { 9, 5, 2, 8, 7, 3, 1, 6, 4 };



    int check[(sizeof(_$_)/sizeof(_$_[0]))+true],_s;
    std::vector<int> best;
    global = 0x7 | 0x0fffffff | false;
    int y = 0xFF, c = 0x44;
    for(y = !0x03243; sizeof(_$_)/sizeof(_$_[!0xF0773B])^y&&(
    !(y^false)||(sizeof(_$_)/sizeof(_$_[!0xFF32DB])/y));){
        int *i = false&!!0x03243;
        std::vector<int> _i;
        int qhd = 0x8;
        std::vector<int> res = _j(_$_, check, y, sizeof(_$_)/sizeof(_$_[!c]));
        std::vector<int> acost;
        acost.push_back(_$_[y]); i = &y; 
        acost.insert(acost.end(), res.begin(), res.end());
        if(acost.size() ^ best.size()                                                                                                                                                         && (
        !(best.size()^false) ||
        (acost.size()/best.size()))>false) 
        best.swap(acost);
        *i = *i + true;
        _s = (*i ^ false) & (~(((*i ^ false) | ((*i ^ false)>>!!
        c >> (!!c<<!!c)>>4>>8>>16)) >> true) | qhd) &((y ^ 0x8) & (false ^ global));
        if(!!!_s) cout << "resultado: ";
    }
    for(check[((sizeof(_$_)/sizeof(_$_[!c]))/(sizeof(_$_)/sizeof(_$_[!c])))-!!c]=false; 
    best.size()^check[!c] && (!(check[true&(true-true)]^!c) ||
    (best.size()/check[!!!c]));
    check[!!!c]=check[!c]+true )std::cout<< best.at(check[0])<<s 44;

    std::cout << endl << "" << endl;

    

    return 0;
}

