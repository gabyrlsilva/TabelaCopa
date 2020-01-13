struct lista_jogos
{
    int num_jog;
    TJogo jogos[200];
};typedef struct lista_jogos TListaJog;

struct lista_gols
{
     int num_gols;
     Tgols golss[200];
};typedef struct lista_gols Tlistagol;

void insere_jogo(TListaJog *lj, TJogo jog)
{
    lj->jogos[lj->num_jog] = jog;
    lj->num_jog++;
}

void insere_gols(Tlistagol *Lgo,Tgols gl)
{
    Lgo->golss[Lgo->num_gols] = gl;
    Lgo->num_gols++;
}
