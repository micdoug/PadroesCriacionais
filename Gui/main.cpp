#include "motor.h"
#include "motoraco.h"
#include "metalurgicobrasileiro.h"
#include "metalurgicoalemao.h"
#include "motorfire.h"
#include "motorcht.h"
#include "motorap.h"
#include "metalurgicofrances.h"
#include <iostream>

using namespace Entidades;
using namespace FactoryMethod;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
//    QGuiApplication app(argc, argv);

//    QtQuick2ApplicationViewer viewer;
//    viewer.setMainQmlFile(QStringLiteral("qml/Gui/main.qml"));
//    viewer.showExpanded();

//    return app.exec();

    //void (*function) (Metalurgico *)
    auto function = [] (Metalurgico *metalurgico) -> void {
        Motor *motor =  metalurgico->createMotor(Entidades::ALTA);
        cout << motor->descricao() << endl << endl;
        delete motor;
        delete metalurgico;
    };

    auto function2 = [] (Motor *m)  {
        cout << m->ligar() << endl << endl;
        delete m;
    };

    Metalurgico *metalurgico = new MetalurgicoBrasileiro();
    function(metalurgico);

    metalurgico = new MetalurgicoAlemao();
    function(metalurgico);

    metalurgico = new MetalurgicoFrances();
    function(metalurgico);

    Motor *motor = new MotorFire();
    function2(motor);

    motor = new MotorCHT();
    function2(motor);

    motor = new MotorAP();
    function2(motor);

    return 0;
}
