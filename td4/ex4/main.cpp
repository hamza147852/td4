#include <stdio.h>
#include <stdbool.h>

// Definition de la structure produit
typedef struct {
    char type[50]; // Type du produit (ex : "normal", "luxe")
    float prixHT;  // Prix hors taxe
    bool solde;    // Indique si le produit est soldé
} Produit;

// Fonction pour calculer le prix TTC net d'un produit
float calculerPrix(Produit p) {
    float taxe = (p.type[0] == 'l' || p.type[0] == 'L') ? 0.25 : 0.19; // Taxe 25% pour luxe, 19% sinon
    float prixTTC = p.prixHT * (1 + taxe); // Calcul du prix TTC

    if (p.solde) {
        prixTTC *= 0.8; // Appliquer une remise de 20% si le produit est soldé
    }

    return prixTTC;
}

int main() {
    // Creation de produits
    Produit produits[] = {
        {"normal", 100.0, false},
        {"luxe", 200.0, true},
        {"normal", 50.0, true},
        {"luxe", 500.0, false}
    };

    int nbProduits = sizeof(produits) / sizeof(produits[0]);

    // Affichage des prix nets
    for (int i = 0; i < nbProduits; i++) {
        printf("Produit %d: Type=%s, Prix HT=%.2f, Soldé=%s, Prix TTC Net=%.2f\n",
               i + 1,
               produits[i].type,
               produits[i].prixHT,
               produits[i].solde ? "Oui" : "Non",
               calculerPrix(produits[i]));
    }

    return 0;
}
