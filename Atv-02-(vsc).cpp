int main() {
    const int NProdutos = 5;
    int quantidades[NProdutos];
    double VUnitarios[NProdutos];
    double VTProduto[NProdutos] = {0.0};
    double VTCompra = 0.0;

    for (int i = 0; i < NProdutos; ++i) {
        std::cout << "Digite a quantidade comprada: " << i + 1 << ": ";
        std::cin >> quantidades[i];

        std::cout << "Digite o valor unitario: " << i + 1 << ": ";
        std::cin >> VUnitarios[i];

        VTProduto[i] = quantidades[i] * VUnitarios[i];
        VTCompra += VTProduto[i];
    }

    std::cout << "\nResumo da compra:\n";
    for (int i = 0; i < NProdutos; ++i) {
        std::cout << "Produto " << i + 1 << ": "
                  << quantidades[i] << " unidades x R$"
                  << std::fixed << std::setprecision(2) << VUnitarios[i]
                  << " = R$" << VTProduto[i] << std::endl;
    }
    std::cout << "Valor total da compra: R$" << VTCompra << std::endl;

    return 0;
}
