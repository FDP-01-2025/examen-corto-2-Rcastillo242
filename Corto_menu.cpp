#include <iostream>
using namespace std;

int main() {
    int edad, cliente, opcion;
    double saldo = 1000.0;
    double precio = 0.0, total = 0.0;
    double descuento = 0.0;

    // Paso 1
    cout << " Que edad tienes? ";
    cin >> edad;

    if (edad < 16) {
        cout << "No puedes continuar con la compra." << endl;
        return 0;
    }

    // Paso 2
    cout << "Que tipo de cliente eres?\n";
    cout << "1. Estudiante\n";
    cout << "2. Profesional\n";
    cout << "3. Ver todos\n";
    cout << "Opcion: ";
    cin >> cliente;

    switch (cliente) {
        case 1:
            cout << "\n--- Dispositivos para Estudiantes (20% de descuento) ---\n";
            cout << "1. Laptop Basica: $900\n";
            cout << "2. Tablet Estudiantil: $600\n";
            cout << "3. Chromebook: $700\n";
            cout << "Seleccione una opcion: ";
            cin >> opcion;

            switch (opcion) {
                case 1:
                    precio = 900;
                    descuento = 0.20;
                    break;
                case 2:
                    precio = 600;
                    descuento = 0.20;
                    break;
                case 3:
                    precio = 700;
                    descuento = 0.20;
                    break;
                default:
                    cout << "Opcion no valida.\n";
                    return 0;
            }
            break;

        case 2:
            cout << "\n--- Dispositivos para Profesionales (10% de descuento) ---\n";
            cout << "1. Laptop Avanzada: $1500\n";
            cout << "2. Tablet Pro: $1200\n";
            cout << "3. Estacion de Trabajo: $2000\n";
            cout << "Seleccione una opcion: ";
            cin >> opcion;

            switch (opcion) {
                case 1:
                    precio = 1500;
                    descuento = 0.10;
                    break;
                case 2:
                    precio = 1200;
                    descuento = 0.10;
                    break;
                case 3:
                    precio = 2000;
                    descuento = 0.10;
                    break;
                default:
                    cout << "Opcion no valida.\n";
                    return 0;
            }
            break;

        case 3:
            cout << "\n--- Todos los Dispositivos ---\n";
            cout << "1. Laptop Basica: $900 (Estudiante)\n";
            cout << "2. Tablet Estudiantil: $600 (Estudiante)\n";
            cout << "3. Chromebook: $700 (Estudiante)\n";
            cout << "4. Laptop Avanzada: $1500 (Profesional)\n";
            cout << "5. Tablet Pro: $1200 (Profesional)\n";
            cout << "6. Estacion de Trabajo: $2000 (Profesional)\n";
            cout << "Seleccione una opcion: ";
            cin >> opcion;

            switch (opcion) {
                case 1:
                    precio = 900;
                    descuento = 0.20;
                    break;
                case 2:
                    precio = 600;
                    descuento = 0.20;
                    break;
                case 3:
                    precio = 700;
                    descuento = 0.20;
                    break;
                case 4:
                    precio = 1500;
                    descuento = 0.10;
                    break;
                case 5:
                    precio = 1200;
                    descuento = 0.10;
                    break;
                case 6:
                    precio = 2000;
                    descuento = 0.10;
                    break;
                default:
                    cout << "Opcion no valida.\n";
                    return 0;
            }
            break;

        default:
            cout << "Tipo de cliente invalido.\n";
            return 0;
    }

    // Paso 4: calculo del total y comparacion con saldo
    total = precio * (1 - descuento);
    cout << "\nPrecio con descuento: $" << total << endl;

    if (saldo >= total) {
        cout << "Compra exitosa!" << endl;
        cout << "Saldo restante: $" << saldo - total << endl;
    } else {
        cout << "No tienes suficiente dinero." << endl;
        cout << "Te faltan: $" << total - saldo << endl;
    }

    // Paso 5: mensaje final
    cout << "\nGracias por usar el sistema de compras." << endl;

    return 0;
}
