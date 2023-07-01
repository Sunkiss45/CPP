#include <iostream>
#include <vector>

// Fusionne deux tableaux triés en un seul tableau trié
void merge(std::vector<int>& arr, int left, int middle, int right) {
    int n1 = middle - left + 1;
    int n2 = right - middle;

    // Création des tableaux temporaires
    std::vector<int> L(n1);
    std::vector<int> R(n2);

    // Copie des données dans les tableaux temporaires
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[middle + 1 + j];

    // Fusion des tableaux temporaires

    int i = 0; // Index initial du premier sous-tableau
    int j = 0; // Index initial du second sous-tableau
    int k = left; // Index initial du tableau fusionné

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copie des éléments restants de L[] s'il y en a
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copie des éléments restants de R[] s'il y en a
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fonction de tri fusion
void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;

        // Tri récursif des deux moitiés
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);

        // Fusion des deux moitiés triées
        merge(arr, left, middle, right);
    }
}

// Fonction utilitaire pour afficher le tableau
void printArray(const std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7};

    std::cout << "Tableau avant le tri : ";
    printArray(arr);

    int n = arr.size();
    mergeSort(arr, 0, n - 1);

    std::cout << "Tableau après le tri : ";
    printArray(arr);

    return 0;
}