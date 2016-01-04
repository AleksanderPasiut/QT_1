#include <QApplication>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>

#define WIDGET_2

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    #ifdef LABEL
        QLabel label("Hello world");
        label.setAlignment(Qt::AlignCenter);
        label.show();
    #endif

    #ifdef WIDGET
        QWidget window;
        QHBoxLayout* mainLayout = new QHBoxLayout(&window);
        QLabel* label1 = new QLabel("One");
        QLabel* label2 = new QLabel("Two");
        mainLayout->addWidget(label1);
        mainLayout->addWidget(label2);
        window.show();
    #endif

    #ifdef WIDGET_2
        QWidget window;
        QGridLayout* Layout = new QGridLayout(&window);
        QLabel* label1 = new QLabel("Qne");
        QLabel* label2 = new QLabel("Two");
        QLabel* label3 = new QLabel("Three");
        QLabel* label4 = new QLabel("Four");
        QLabel* label5 = new QLabel("Five");
        QLabel* label6 = new QLabel("Six");
        Layout->addWidget(label1, 0, 0);
        Layout->addWidget(label2, 0, 1);
        Layout->addWidget(label3, 1, 0);
        Layout->addWidget(label4, 1, 1);
        Layout->addWidget(label5, 2, 0);
        Layout->addWidget(label6, 2, 1);
        window.show();
    #endif

    #ifdef CLOSE_ALL
        QPushButton button("Close all");
        QObject::connect(&button, SIGNAL(released()), &button, SLOT(close()));
        button.show();
    #endif

    return a.exec();
}

