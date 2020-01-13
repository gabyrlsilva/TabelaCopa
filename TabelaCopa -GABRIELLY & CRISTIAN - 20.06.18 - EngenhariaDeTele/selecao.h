struct selecao
{
    int codigo;
    char pais[15];
    char grupo;
};
typedef struct selecao TSelecao;

void mostre_selecao(TSelecao sel)
{
    printf("%02d %-15c %c", sel.codigo, sel.pais, sel.grupo);
}
