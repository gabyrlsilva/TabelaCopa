struct lista_sel
{
    int num_sel;
    TSelecao selecoes[32];
};
typedef struct lista_sel TListaSel;

void insere_selecao(TListaSel *ls, TSelecao sel)
{
    ls->selecoes[ls->num_sel] = sel;
    ls->num_sel++;
}

void mostre_lista_sel(TListaSel ls)
{
    int i;
    for(i=0; i<ls.num_sel; i++) {
        mostre_selecao(ls.selecoes[i]);
        printf("\n");
    }
}
