#include <QCoreApplication>
#include <iostream>

using std::cout;

#define print cout <<

int main(int argc, char *argv[]) {

    QCoreApplication a(argc, argv);

    print "Hello World!";

    return a.exec();
}
