/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_5;
    QStackedWidget *stackedWidget;
    QWidget *capturaProcesos;
    QGridLayout *gridLayout_3;
    QLabel *programName;
    QGridLayout *gridLayout;
    QLabel *processAcountLB;
    QLabel *quantumLabel;
    QSpinBox *quantumSP;
    QSpinBox *processNumberSP;
    QPushButton *processAcountPB;
    QWidget *mostrarProcesos;
    QGridLayout *gridLayout_4;
    QGroupBox *memoryGB;
    QGridLayout *gridLayout_8;
    QTableWidget *memoryTB;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *globalCountLB;
    QLCDNumber *globalCountLCD;
    QPushButton *startRunPB;
    QGridLayout *gridLayout_2;
    QGroupBox *readyProcessGB;
    QTableWidget *readyProcessesTB;
    QGroupBox *processRuningGB;
    QTableWidget *processRuningTB;
    QGroupBox *finishedGB;
    QTableWidget *finishedTB;
    QGroupBox *blockGB;
    QTableWidget *blockTB;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *newProcessesLB;
    QLCDNumber *newProcessesLCD;
    QLabel *nextProcessLB;
    QLabel *titleLB;
    QWidget *mostrarTiempos;
    QGridLayout *gridLayout_10;
    QGroupBox *timesProcessesGB;
    QGridLayout *gridLayout_9;
    QTableWidget *timesProcessesTB;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1052, 734);
        MainWindow->setMinimumSize(QSize(300, 200));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Light")});
        font.setPointSize(12);
        font.setBold(false);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: #196D94;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_5 = new QGridLayout(centralwidget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setEnabled(true);
        stackedWidget->setStyleSheet(QString::fromUtf8("color: rgb(85, 170, 255);"));
        capturaProcesos = new QWidget();
        capturaProcesos->setObjectName(QString::fromUtf8("capturaProcesos"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu Light")});
        font1.setPointSize(12);
        capturaProcesos->setFont(font1);
        gridLayout_3 = new QGridLayout(capturaProcesos);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        programName = new QLabel(capturaProcesos);
        programName->setObjectName(QString::fromUtf8("programName"));
        programName->setMaximumSize(QSize(231, 18));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Tw Cen MT")});
        font2.setPointSize(14);
        font2.setBold(true);
        programName->setFont(font2);
        programName->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        programName->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(programName, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        processAcountLB = new QLabel(capturaProcesos);
        processAcountLB->setObjectName(QString::fromUtf8("processAcountLB"));
        processAcountLB->setMinimumSize(QSize(96, 24));
        processAcountLB->setMaximumSize(QSize(96, 24));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Segoe UI Semibold")});
        font3.setPointSize(12);
        font3.setBold(true);
        processAcountLB->setFont(font3);
        processAcountLB->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(processAcountLB, 0, 0, 1, 1);

        quantumLabel = new QLabel(capturaProcesos);
        quantumLabel->setObjectName(QString::fromUtf8("quantumLabel"));
        quantumLabel->setMinimumSize(QSize(96, 24));
        quantumLabel->setMaximumSize(QSize(94, 26));
        quantumLabel->setFont(font3);
        quantumLabel->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        gridLayout->addWidget(quantumLabel, 1, 0, 1, 1);

        quantumSP = new QSpinBox(capturaProcesos);
        quantumSP->setObjectName(QString::fromUtf8("quantumSP"));
        quantumSP->setMinimumSize(QSize(40, 24));
        quantumSP->setMaximumSize(QSize(40, 24));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font4.setBold(true);
        quantumSP->setFont(font4);
        quantumSP->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(quantumSP, 1, 1, 1, 1);

        processNumberSP = new QSpinBox(capturaProcesos);
        processNumberSP->setObjectName(QString::fromUtf8("processNumberSP"));
        processNumberSP->setMinimumSize(QSize(40, 24));
        processNumberSP->setMaximumSize(QSize(40, 24));
        processNumberSP->setFont(font4);
        processNumberSP->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0);"));

        gridLayout->addWidget(processNumberSP, 0, 1, 1, 1);

        processAcountPB = new QPushButton(capturaProcesos);
        processAcountPB->setObjectName(QString::fromUtf8("processAcountPB"));
        processAcountPB->setEnabled(false);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Segoe UI Black")});
        font5.setPointSize(10);
        font5.setBold(true);
        processAcountPB->setFont(font5);
        processAcountPB->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(191, 191, 191);"));

        gridLayout->addWidget(processAcountPB, 2, 0, 1, 2);


        gridLayout_3->addLayout(gridLayout, 1, 0, 1, 1);

        stackedWidget->addWidget(capturaProcesos);
        mostrarProcesos = new QWidget();
        mostrarProcesos->setObjectName(QString::fromUtf8("mostrarProcesos"));
        mostrarProcesos->setMaximumSize(QSize(1270, 720));
        gridLayout_4 = new QGridLayout(mostrarProcesos);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        memoryGB = new QGroupBox(mostrarProcesos);
        memoryGB->setObjectName(QString::fromUtf8("memoryGB"));
        memoryGB->setMinimumSize(QSize(321, 650));
        memoryGB->setMaximumSize(QSize(321, 690));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Agency FB")});
        font6.setPointSize(18);
        font6.setBold(true);
        memoryGB->setFont(font6);
        memoryGB->setStyleSheet(QString::fromUtf8("color:rgb(0, 0, 0);"));
        memoryGB->setAlignment(Qt::AlignCenter);
        gridLayout_8 = new QGridLayout(memoryGB);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        memoryTB = new QTableWidget(memoryGB);
        if (memoryTB->columnCount() < 4)
            memoryTB->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        memoryTB->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        memoryTB->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        memoryTB->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        memoryTB->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (memoryTB->rowCount() < 45)
            memoryTB->setRowCount(45);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(4, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(5, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(6, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(7, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(8, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(9, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(10, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(11, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(12, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(13, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(14, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(15, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(16, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(17, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(18, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(19, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(20, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(21, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(22, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(23, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(24, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(25, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(26, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(27, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(28, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(29, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(30, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(31, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(32, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(33, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(34, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(35, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(36, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(37, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(38, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(39, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(40, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(41, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(42, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(43, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        memoryTB->setVerticalHeaderItem(44, __qtablewidgetitem48);
        memoryTB->setObjectName(QString::fromUtf8("memoryTB"));
        memoryTB->setMaximumSize(QSize(300, 16777215));
        memoryTB->setFocusPolicy(Qt::NoFocus);
        memoryTB->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        memoryTB->setEditTriggers(QAbstractItemView::NoEditTriggers);
        memoryTB->horizontalHeader()->setDefaultSectionSize(65);
        memoryTB->verticalHeader()->setDefaultSectionSize(24);

        gridLayout_8->addWidget(memoryTB, 0, 0, 1, 1);


        gridLayout_4->addWidget(memoryGB, 0, 0, 3, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        globalCountLB = new QLabel(mostrarProcesos);
        globalCountLB->setObjectName(QString::fromUtf8("globalCountLB"));
        globalCountLB->setMinimumSize(QSize(165, 27));
        globalCountLB->setMaximumSize(QSize(165, 27));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Agency FB")});
        font7.setPointSize(20);
        font7.setBold(true);
        globalCountLB->setFont(font7);
        globalCountLB->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_3->addWidget(globalCountLB);

        globalCountLCD = new QLCDNumber(mostrarProcesos);
        globalCountLCD->setObjectName(QString::fromUtf8("globalCountLCD"));
        globalCountLCD->setMinimumSize(QSize(164, 27));
        globalCountLCD->setMaximumSize(QSize(164, 27));

        horizontalLayout_3->addWidget(globalCountLCD);


        horizontalLayout->addLayout(horizontalLayout_3);

        startRunPB = new QPushButton(mostrarProcesos);
        startRunPB->setObjectName(QString::fromUtf8("startRunPB"));
        startRunPB->setFont(font6);
        startRunPB->setStyleSheet(QString::fromUtf8("color: black;\n"
"background-color: white;"));

        horizontalLayout->addWidget(startRunPB);


        gridLayout_4->addLayout(horizontalLayout, 2, 1, 1, 3);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        readyProcessGB = new QGroupBox(mostrarProcesos);
        readyProcessGB->setObjectName(QString::fromUtf8("readyProcessGB"));
        readyProcessGB->setMinimumSize(QSize(231, 430));
        readyProcessGB->setMaximumSize(QSize(231, 430));
        readyProcessGB->setFont(font6);
        readyProcessGB->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        readyProcessGB->setAlignment(Qt::AlignCenter);
        readyProcessesTB = new QTableWidget(readyProcessGB);
        if (readyProcessesTB->columnCount() < 3)
            readyProcessesTB->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        readyProcessesTB->setHorizontalHeaderItem(0, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        readyProcessesTB->setHorizontalHeaderItem(1, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        readyProcessesTB->setHorizontalHeaderItem(2, __qtablewidgetitem51);
        readyProcessesTB->setObjectName(QString::fromUtf8("readyProcessesTB"));
        readyProcessesTB->setGeometry(QRect(10, 28, 211, 392));
        readyProcessesTB->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        readyProcessesTB->setEditTriggers(QAbstractItemView::NoEditTriggers);
        readyProcessesTB->horizontalHeader()->setCascadingSectionResizes(false);
        readyProcessesTB->horizontalHeader()->setMinimumSectionSize(32);
        readyProcessesTB->horizontalHeader()->setDefaultSectionSize(65);
        readyProcessesTB->horizontalHeader()->setHighlightSections(true);
        readyProcessesTB->horizontalHeader()->setStretchLastSection(false);
        readyProcessesTB->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(readyProcessGB, 0, 0, 2, 1);

        processRuningGB = new QGroupBox(mostrarProcesos);
        processRuningGB->setObjectName(QString::fromUtf8("processRuningGB"));
        processRuningGB->setMinimumSize(QSize(191, 261));
        processRuningGB->setMaximumSize(QSize(191, 261));
        processRuningGB->setFont(font6);
        processRuningGB->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        processRuningGB->setAlignment(Qt::AlignCenter);
        processRuningTB = new QTableWidget(processRuningGB);
        if (processRuningTB->columnCount() < 1)
            processRuningTB->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        processRuningTB->setHorizontalHeaderItem(0, __qtablewidgetitem52);
        if (processRuningTB->rowCount() < 7)
            processRuningTB->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        processRuningTB->setVerticalHeaderItem(0, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        processRuningTB->setVerticalHeaderItem(1, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        processRuningTB->setVerticalHeaderItem(2, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        processRuningTB->setVerticalHeaderItem(3, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        processRuningTB->setVerticalHeaderItem(4, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        processRuningTB->setVerticalHeaderItem(5, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        processRuningTB->setVerticalHeaderItem(6, __qtablewidgetitem59);
        processRuningTB->setObjectName(QString::fromUtf8("processRuningTB"));
        processRuningTB->setGeometry(QRect(10, 28, 171, 223));
        processRuningTB->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;\n"
""));
        processRuningTB->setEditTriggers(QAbstractItemView::NoEditTriggers);
        processRuningTB->horizontalHeader()->setVisible(false);
        processRuningTB->horizontalHeader()->setCascadingSectionResizes(false);
        processRuningTB->horizontalHeader()->setStretchLastSection(true);
        processRuningTB->verticalHeader()->setCascadingSectionResizes(false);
        processRuningTB->verticalHeader()->setDefaultSectionSize(30);
        processRuningTB->verticalHeader()->setStretchLastSection(false);

        gridLayout_2->addWidget(processRuningGB, 0, 1, 1, 1);

        finishedGB = new QGroupBox(mostrarProcesos);
        finishedGB->setObjectName(QString::fromUtf8("finishedGB"));
        finishedGB->setMinimumSize(QSize(251, 431));
        finishedGB->setMaximumSize(QSize(251, 431));
        finishedGB->setFont(font6);
        finishedGB->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        finishedGB->setAlignment(Qt::AlignCenter);
        finishedTB = new QTableWidget(finishedGB);
        if (finishedTB->columnCount() < 3)
            finishedTB->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        finishedTB->setHorizontalHeaderItem(0, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        finishedTB->setHorizontalHeaderItem(1, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        finishedTB->setHorizontalHeaderItem(2, __qtablewidgetitem62);
        finishedTB->setObjectName(QString::fromUtf8("finishedTB"));
        finishedTB->setGeometry(QRect(10, 28, 231, 393));
        finishedTB->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        finishedTB->setEditTriggers(QAbstractItemView::NoEditTriggers);
        finishedTB->horizontalHeader()->setDefaultSectionSize(75);
        finishedTB->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(finishedGB, 0, 2, 2, 1);

        blockGB = new QGroupBox(mostrarProcesos);
        blockGB->setObjectName(QString::fromUtf8("blockGB"));
        blockGB->setMinimumSize(QSize(191, 169));
        blockGB->setMaximumSize(QSize(191, 169));
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Agency FB")});
        font8.setPointSize(18);
        font8.setBold(true);
        font8.setItalic(false);
        blockGB->setFont(font8);
        blockGB->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        blockGB->setAlignment(Qt::AlignCenter);
        blockTB = new QTableWidget(blockGB);
        if (blockTB->columnCount() < 2)
            blockTB->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        blockTB->setHorizontalHeaderItem(0, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        blockTB->setHorizontalHeaderItem(1, __qtablewidgetitem64);
        blockTB->setObjectName(QString::fromUtf8("blockTB"));
        blockTB->setGeometry(QRect(10, 28, 171, 131));
        blockTB->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;"));
        blockTB->setEditTriggers(QAbstractItemView::NoEditTriggers);
        blockTB->horizontalHeader()->setDefaultSectionSize(75);
        blockTB->horizontalHeader()->setStretchLastSection(false);
        blockTB->verticalHeader()->setVisible(false);

        gridLayout_2->addWidget(blockGB, 1, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 1, 1, 1, 3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        newProcessesLB = new QLabel(mostrarProcesos);
        newProcessesLB->setObjectName(QString::fromUtf8("newProcessesLB"));
        newProcessesLB->setMaximumSize(QSize(169, 23));
        newProcessesLB->setFont(font7);
        newProcessesLB->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(newProcessesLB);

        newProcessesLCD = new QLCDNumber(mostrarProcesos);
        newProcessesLCD->setObjectName(QString::fromUtf8("newProcessesLCD"));
        newProcessesLCD->setMaximumSize(QSize(64, 23));
        newProcessesLCD->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        horizontalLayout_2->addWidget(newProcessesLCD);


        verticalLayout->addLayout(horizontalLayout_2);

        nextProcessLB = new QLabel(mostrarProcesos);
        nextProcessLB->setObjectName(QString::fromUtf8("nextProcessLB"));
        nextProcessLB->setMaximumSize(QSize(225, 50));
        nextProcessLB->setFont(font6);
        nextProcessLB->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));

        verticalLayout->addWidget(nextProcessLB);


        gridLayout_4->addLayout(verticalLayout, 0, 1, 1, 1);

        titleLB = new QLabel(mostrarProcesos);
        titleLB->setObjectName(QString::fromUtf8("titleLB"));
        QFont font9;
        font9.setFamilies({QString::fromUtf8("Verdana")});
        font9.setPointSize(20);
        font9.setBold(true);
        titleLB->setFont(font9);
        titleLB->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        titleLB->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(titleLB, 0, 2, 1, 2);

        stackedWidget->addWidget(mostrarProcesos);
        mostrarTiempos = new QWidget();
        mostrarTiempos->setObjectName(QString::fromUtf8("mostrarTiempos"));
        gridLayout_10 = new QGridLayout(mostrarTiempos);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        timesProcessesGB = new QGroupBox(mostrarTiempos);
        timesProcessesGB->setObjectName(QString::fromUtf8("timesProcessesGB"));
        timesProcessesGB->setFont(font7);
        timesProcessesGB->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        timesProcessesGB->setAlignment(Qt::AlignCenter);
        gridLayout_9 = new QGridLayout(timesProcessesGB);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        timesProcessesTB = new QTableWidget(timesProcessesGB);
        if (timesProcessesTB->columnCount() < 11)
            timesProcessesTB->setColumnCount(11);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(0, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(1, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(2, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(3, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(4, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(5, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(6, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(7, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(8, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(9, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        timesProcessesTB->setHorizontalHeaderItem(10, __qtablewidgetitem75);
        timesProcessesTB->setObjectName(QString::fromUtf8("timesProcessesTB"));
        QFont font10;
        font10.setFamilies({QString::fromUtf8("Ubuntu")});
        font10.setPointSize(10);
        font10.setBold(true);
        timesProcessesTB->setFont(font10);
        timesProcessesTB->setFocusPolicy(Qt::NoFocus);
        timesProcessesTB->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"color: black;\n"
"alternate-background-color: #606060;\n"
"selection-background-color:#282828;\n"
""));
        timesProcessesTB->setEditTriggers(QAbstractItemView::NoEditTriggers);

        gridLayout_9->addWidget(timesProcessesTB, 0, 0, 1, 1);


        gridLayout_10->addWidget(timesProcessesGB, 0, 0, 1, 1);

        stackedWidget->addWidget(mostrarTiempos);

        gridLayout_5->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1052, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        programName->setText(QCoreApplication::translate("MainWindow", "Paginacion Simple", nullptr));
        processAcountLB->setText(QCoreApplication::translate("MainWindow", "No. Procesos:", nullptr));
        quantumLabel->setText(QCoreApplication::translate("MainWindow", "Quantum:", nullptr));
        processAcountPB->setText(QCoreApplication::translate("MainWindow", "ACEPTAR", nullptr));
        memoryGB->setTitle(QCoreApplication::translate("MainWindow", "Memoria", nullptr));
        QTableWidgetItem *___qtablewidgetitem = memoryTB->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Marco", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = memoryTB->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Espacio", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = memoryTB->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Proceso", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = memoryTB->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Estado", nullptr));
        globalCountLB->setText(QCoreApplication::translate("MainWindow", "RELOJ", nullptr));
        startRunPB->setText(QCoreApplication::translate("MainWindow", "Comenzar", nullptr));
        readyProcessGB->setTitle(QCoreApplication::translate("MainWindow", "Listos", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = readyProcessesTB->horizontalHeaderItem(0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = readyProcessesTB->horizontalHeaderItem(1);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "TME", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = readyProcessesTB->horizontalHeaderItem(2);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "TT", nullptr));
        processRuningGB->setTitle(QCoreApplication::translate("MainWindow", "Ejecucion", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = processRuningTB->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "New Column", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = processRuningTB->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = processRuningTB->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "OPE", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = processRuningTB->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "TME", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = processRuningTB->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "TT", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = processRuningTB->verticalHeaderItem(4);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "TR", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = processRuningTB->verticalHeaderItem(5);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "TAM", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = processRuningTB->verticalHeaderItem(6);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "QUANTUM", nullptr));
        finishedGB->setTitle(QCoreApplication::translate("MainWindow", "Terminados", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = finishedTB->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = finishedTB->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "Operacion", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = finishedTB->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "Resultado", nullptr));
        blockGB->setTitle(QCoreApplication::translate("MainWindow", "Bloqueados", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = blockTB->horizontalHeaderItem(0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = blockTB->horizontalHeaderItem(1);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "TTB", nullptr));
        newProcessesLB->setText(QCoreApplication::translate("MainWindow", "NUEVOS", nullptr));
        nextProcessLB->setText(QCoreApplication::translate("MainWindow", "Siguiente Proceso: ", nullptr));
        titleLB->setText(QCoreApplication::translate("MainWindow", "PAGINACION SIMPLE", nullptr));
        timesProcessesGB->setTitle(QCoreApplication::translate("MainWindow", "TIEMPOS DE LOS PROCESOS", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = timesProcessesTB->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = timesProcessesTB->horizontalHeaderItem(1);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "Operacion", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = timesProcessesTB->horizontalHeaderItem(2);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "Resultado", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = timesProcessesTB->horizontalHeaderItem(3);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "T. Estimado", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = timesProcessesTB->horizontalHeaderItem(4);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "T. Llegada", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = timesProcessesTB->horizontalHeaderItem(5);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "T. Finalizacion", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = timesProcessesTB->horizontalHeaderItem(6);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "T. Retorno", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = timesProcessesTB->horizontalHeaderItem(7);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "T. Respuesta", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = timesProcessesTB->horizontalHeaderItem(8);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "T. Espera", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = timesProcessesTB->horizontalHeaderItem(9);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "T. Servicio", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = timesProcessesTB->horizontalHeaderItem(10);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "Estado", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
