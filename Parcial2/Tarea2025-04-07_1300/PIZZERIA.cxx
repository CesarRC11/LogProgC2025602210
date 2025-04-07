int main() {
    string pizza;
    string ingredientes;

    pizza = "";
    ingredientes = "";
    cout << "Bienvenido a la pizzería Bella Napoli." << endl;
    cout << "¿Quiere una pizza vegetariana?" << endl;
    cin >> pizza;
    if (!pizza == "Si" || pizza == "No") {
        cout << "Indique si desea una pizza vegetariana o no" << endl;
    } else {
        if (pizza == "si") {
            cout << "Seleccione uno de los ingredientes" << endl;
            cout << "Pimiento" << endl;
            cout << "Tofu" << endl;
            cin >> ingredientes;
            cout << "Tu pizza es vegetariana" << endl;
            cout << "Ingredientes: Mozzarella, Tomate y " << ingredientes << endl;
        } else {
            cout << "Seleccione uno de los ingredientes" << endl;
            cout << "Peperoni" << endl;
            cout << "Jamón" << endl;
            cout << "Salmón" << endl;
            cin >> ingredientes;
            cout << "Tu pizza es no vegetariana" << endl;
            cout << "Ingredientes: Mozzarella, Tomate y " << ingredientes << endl;
        }
    }
    return 0;
}