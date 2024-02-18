/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "myglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    MyGLWidget *openGLWidget;
    QWidget *Menu;
    QWidget *info;
    QLabel *file_name;
    QLabel *vertexes_count;
    QLabel *ribs_count;
    QPushButton *open_file;
    QFrame *line;
    QFrame *line_2;
    QPushButton *make_gif;
    QPushButton *screenshot_start;
    QFrame *line_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *info_obj;
    QWidget *Transform;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *TranslateLayout;
    QLabel *label_Xt;
    QDoubleSpinBox *translate_x;
    QLabel *label_Xt_2;
    QDoubleSpinBox *translate_y;
    QLabel *label_Xt_3;
    QDoubleSpinBox *translaye_z;
    QLabel *info_obj_3;
    QLabel *info_obj_4;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *RotationLayout;
    QLabel *label_Xt_4;
    QDoubleSpinBox *rotation_x;
    QLabel *label_Xt_5;
    QDoubleSpinBox *rotation_y;
    QLabel *label_Xt_6;
    QDoubleSpinBox *rotation_z;
    QLabel *info_obj_5;
    QSlider *scale_value;
    QFrame *line_7;
    QLabel *info_obj_13;
    QFrame *line_5;
    QWidget *customization;
    QLabel *info_obj_6;
    QFrame *line_4;
    QSlider *scale_vertices;
    QSlider *scale_line;
    QFrame *line_8;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *info_obj_7;
    QComboBox *protection;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *info_obj_8;
    QPushButton *background_color;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QLabel *info_obj_10;
    QPushButton *vertices_color;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QPushButton *line_color;
    QLabel *info_obj_12;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QLabel *info_obj_9;
    QComboBox *vertices_slider;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QLabel *info_obj_11;
    QComboBox *line_solid;
    QPushButton *clean_all;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1384, 771);
        MainWindow->setMinimumSize(QSize(1384, 771));
        MainWindow->setMaximumSize(QSize(1384, 771));
        QFont font;
        font.setPointSize(12);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(1384, 771));
        centralwidget->setMaximumSize(QSize(1384, 771));
        centralwidget->setFont(font);
        centralwidget->setStyleSheet(QString::fromUtf8("  background-color: rgb(235, 235, 235);"));
        openGLWidget = new MyGLWidget(centralwidget);
        openGLWidget->setObjectName("openGLWidget");
        openGLWidget->setGeometry(QRect(10, 10, 891, 751));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy);
        openGLWidget->setStyleSheet(QString::fromUtf8(""));
        Menu = new QWidget(centralwidget);
        Menu->setObjectName("Menu");
        Menu->setGeometry(QRect(910, 10, 461, 751));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Quicksand")});
        font1.setPointSize(13);
        font1.setBold(true);
        Menu->setFont(font1);
        Menu->setStyleSheet(QString::fromUtf8(""));
        info = new QWidget(Menu);
        info->setObjectName("info");
        info->setGeometry(QRect(20, 10, 441, 191));
        file_name = new QLabel(info);
        file_name->setObjectName("file_name");
        file_name->setGeometry(QRect(10, 40, 421, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Quicksand")});
        font2.setPointSize(18);
        font2.setBold(true);
        file_name->setFont(font2);
        vertexes_count = new QLabel(info);
        vertexes_count->setObjectName("vertexes_count");
        vertexes_count->setGeometry(QRect(10, 70, 421, 31));
        vertexes_count->setFont(font2);
        ribs_count = new QLabel(info);
        ribs_count->setObjectName("ribs_count");
        ribs_count->setGeometry(QRect(10, 100, 421, 31));
        ribs_count->setFont(font2);
        open_file = new QPushButton(info);
        open_file->setObjectName("open_file");
        open_file->setGeometry(QRect(130, 150, 191, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Quicksand")});
        font3.setBold(true);
        font3.setItalic(false);
        open_file->setFont(font3);
        open_file->setToolTipDuration(1);
        open_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(47, 198, 255);\n"
"  color: white;\n"
"  border-radius: 15px;\n"
"  border: 1px solid #606060;\n"
"\n"
"\n"
"  border-width: 1px;\n"
"}\n"
"\n"
"QPushButton::pressed { \n"
"  background-color: rgb(25, 127, 204);\n"
"  border-style: solid;\n"
"  border-top-color: rgb(18, 108, 70);\n"
"  border-left-color: rgb(18, 108, 70);\n"
"  border-bottom-color: rgb(53, 121, 78);\n"
"  border-right-color: rgb(53, 121, 78);\n"
"  border-width: 1px;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resurses/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        open_file->setIcon(icon);
        open_file->setIconSize(QSize(42, 22));
        line = new QFrame(info);
        line->setObjectName("line");
        line->setGeometry(QRect(0, 130, 441, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(info);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(0, 30, 441, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        make_gif = new QPushButton(info);
        make_gif->setObjectName("make_gif");
        make_gif->setGeometry(QRect(20, 150, 101, 31));
        make_gif->setFont(font3);
        make_gif->setToolTipDuration(1);
        make_gif->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(47, 198, 255);\n"
"  color: white;\n"
"  border-radius: 15px;\n"
"  border: 1px solid #606060;\n"
"\n"
"\n"
"  border-width: 1px;\n"
"}\n"
"\n"
"QPushButton::pressed { \n"
"  background-color: rgb(25, 127, 204);\n"
"  border-style: solid;\n"
"  border-top-color: rgb(18, 108, 70);\n"
"  border-left-color: rgb(18, 108, 70);\n"
"  border-bottom-color: rgb(53, 121, 78);\n"
"  border-right-color: rgb(53, 121, 78);\n"
"  border-width: 1px;\n"
"}"));
        make_gif->setIconSize(QSize(42, 22));
        screenshot_start = new QPushButton(info);
        screenshot_start->setObjectName("screenshot_start");
        screenshot_start->setGeometry(QRect(330, 150, 101, 31));
        screenshot_start->setFont(font3);
        screenshot_start->setToolTipDuration(1);
        screenshot_start->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(47, 198, 255);\n"
"  color: white;\n"
"  border-radius: 15px;\n"
"  border: 1px solid #606060;\n"
"\n"
"\n"
"  border-width: 1px;\n"
"}\n"
"\n"
"QPushButton::pressed { \n"
"  background-color: rgb(25, 127, 204);\n"
"  border-style: solid;\n"
"  border-top-color: rgb(18, 108, 70);\n"
"  border-left-color: rgb(18, 108, 70);\n"
"  border-bottom-color: rgb(53, 121, 78);\n"
"  border-right-color: rgb(53, 121, 78);\n"
"  border-width: 1px;\n"
"}"));
        screenshot_start->setIconSize(QSize(42, 22));
        line_3 = new QFrame(info);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(0, 220, 441, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(info);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 0, 687, 36));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        info_obj = new QLabel(verticalLayoutWidget);
        info_obj->setObjectName("info_obj");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Quicksand")});
        font4.setPointSize(22);
        font4.setBold(true);
        info_obj->setFont(font4);

        verticalLayout->addWidget(info_obj);

        line_2->raise();
        line->raise();
        file_name->raise();
        vertexes_count->raise();
        ribs_count->raise();
        open_file->raise();
        make_gif->raise();
        screenshot_start->raise();
        line_3->raise();
        verticalLayoutWidget->raise();
        Transform = new QWidget(Menu);
        Transform->setObjectName("Transform");
        Transform->setGeometry(QRect(20, 200, 441, 271));
        horizontalLayoutWidget = new QWidget(Transform);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(0, 70, 441, 41));
        TranslateLayout = new QHBoxLayout(horizontalLayoutWidget);
        TranslateLayout->setObjectName("TranslateLayout");
        TranslateLayout->setContentsMargins(0, 0, 0, 0);
        label_Xt = new QLabel(horizontalLayoutWidget);
        label_Xt->setObjectName("label_Xt");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_Xt->sizePolicy().hasHeightForWidth());
        label_Xt->setSizePolicy(sizePolicy1);
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Quicksand")});
        font5.setBold(true);
        label_Xt->setFont(font5);

        TranslateLayout->addWidget(label_Xt);

        translate_x = new QDoubleSpinBox(horizontalLayoutWidget);
        translate_x->setObjectName("translate_x");
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Quicksand")});
        translate_x->setFont(font6);
        translate_x->setMinimum(-99.000000000000000);
        translate_x->setSingleStep(0.100000000000000);

        TranslateLayout->addWidget(translate_x);

        label_Xt_2 = new QLabel(horizontalLayoutWidget);
        label_Xt_2->setObjectName("label_Xt_2");
        sizePolicy1.setHeightForWidth(label_Xt_2->sizePolicy().hasHeightForWidth());
        label_Xt_2->setSizePolicy(sizePolicy1);
        label_Xt_2->setFont(font5);

        TranslateLayout->addWidget(label_Xt_2);

        translate_y = new QDoubleSpinBox(horizontalLayoutWidget);
        translate_y->setObjectName("translate_y");
        translate_y->setFont(font6);
        translate_y->setMinimum(-99.000000000000000);
        translate_y->setSingleStep(0.100000000000000);

        TranslateLayout->addWidget(translate_y);

        label_Xt_3 = new QLabel(horizontalLayoutWidget);
        label_Xt_3->setObjectName("label_Xt_3");
        sizePolicy1.setHeightForWidth(label_Xt_3->sizePolicy().hasHeightForWidth());
        label_Xt_3->setSizePolicy(sizePolicy1);
        label_Xt_3->setFont(font5);

        TranslateLayout->addWidget(label_Xt_3);

        translaye_z = new QDoubleSpinBox(horizontalLayoutWidget);
        translaye_z->setObjectName("translaye_z");
        translaye_z->setFont(font6);
        translaye_z->setMinimum(-99.000000000000000);
        translaye_z->setSingleStep(0.100000000000000);

        TranslateLayout->addWidget(translaye_z);

        info_obj_3 = new QLabel(Transform);
        info_obj_3->setObjectName("info_obj_3");
        info_obj_3->setGeometry(QRect(170, 50, 141, 21));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("Quicksand")});
        font7.setPointSize(19);
        font7.setBold(true);
        info_obj_3->setFont(font7);
        info_obj_4 = new QLabel(Transform);
        info_obj_4->setObjectName("info_obj_4");
        info_obj_4->setGeometry(QRect(170, 120, 121, 21));
        info_obj_4->setFont(font7);
        horizontalLayoutWidget_2 = new QWidget(Transform);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(0, 150, 441, 41));
        RotationLayout = new QHBoxLayout(horizontalLayoutWidget_2);
        RotationLayout->setObjectName("RotationLayout");
        RotationLayout->setContentsMargins(0, 0, 0, 0);
        label_Xt_4 = new QLabel(horizontalLayoutWidget_2);
        label_Xt_4->setObjectName("label_Xt_4");
        sizePolicy1.setHeightForWidth(label_Xt_4->sizePolicy().hasHeightForWidth());
        label_Xt_4->setSizePolicy(sizePolicy1);
        label_Xt_4->setFont(font5);

        RotationLayout->addWidget(label_Xt_4);

        rotation_x = new QDoubleSpinBox(horizontalLayoutWidget_2);
        rotation_x->setObjectName("rotation_x");
        rotation_x->setFont(font6);
        rotation_x->setMinimum(-999.990000000000009);
        rotation_x->setMaximum(999.990000000000009);
        rotation_x->setSingleStep(1.000000000000000);

        RotationLayout->addWidget(rotation_x);

        label_Xt_5 = new QLabel(horizontalLayoutWidget_2);
        label_Xt_5->setObjectName("label_Xt_5");
        sizePolicy1.setHeightForWidth(label_Xt_5->sizePolicy().hasHeightForWidth());
        label_Xt_5->setSizePolicy(sizePolicy1);
        label_Xt_5->setFont(font5);

        RotationLayout->addWidget(label_Xt_5);

        rotation_y = new QDoubleSpinBox(horizontalLayoutWidget_2);
        rotation_y->setObjectName("rotation_y");
        rotation_y->setFont(font6);
        rotation_y->setMinimum(-999.990000000000009);
        rotation_y->setMaximum(999.990000000000009);
        rotation_y->setSingleStep(1.000000000000000);

        RotationLayout->addWidget(rotation_y);

        label_Xt_6 = new QLabel(horizontalLayoutWidget_2);
        label_Xt_6->setObjectName("label_Xt_6");
        sizePolicy1.setHeightForWidth(label_Xt_6->sizePolicy().hasHeightForWidth());
        label_Xt_6->setSizePolicy(sizePolicy1);
        label_Xt_6->setFont(font5);

        RotationLayout->addWidget(label_Xt_6);

        rotation_z = new QDoubleSpinBox(horizontalLayoutWidget_2);
        rotation_z->setObjectName("rotation_z");
        rotation_z->setFont(font6);
        rotation_z->setMinimum(-999.990000000000009);
        rotation_z->setMaximum(999.000000000000000);
        rotation_z->setSingleStep(1.000000000000000);

        RotationLayout->addWidget(rotation_z);

        info_obj_5 = new QLabel(Transform);
        info_obj_5->setObjectName("info_obj_5");
        info_obj_5->setGeometry(QRect(170, 200, 101, 21));
        info_obj_5->setFont(font7);
        scale_value = new QSlider(Transform);
        scale_value->setObjectName("scale_value");
        scale_value->setGeometry(QRect(10, 220, 411, 25));
        scale_value->setMinimum(100);
        scale_value->setMaximum(800);
        scale_value->setSingleStep(1);
        scale_value->setPageStep(1);
        scale_value->setTracking(true);
        scale_value->setOrientation(Qt::Horizontal);
        scale_value->setInvertedAppearance(false);
        line_7 = new QFrame(Transform);
        line_7->setObjectName("line_7");
        line_7->setGeometry(QRect(0, 250, 441, 16));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        info_obj_13 = new QLabel(Transform);
        info_obj_13->setObjectName("info_obj_13");
        info_obj_13->setGeometry(QRect(130, 10, 341, 31));
        info_obj_13->setFont(font4);
        line_5 = new QFrame(Transform);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(0, 0, 441, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_5->raise();
        info_obj_3->raise();
        horizontalLayoutWidget->raise();
        info_obj_4->raise();
        horizontalLayoutWidget_2->raise();
        info_obj_5->raise();
        scale_value->raise();
        line_7->raise();
        info_obj_13->raise();
        customization = new QWidget(Menu);
        customization->setObjectName("customization");
        customization->setGeometry(QRect(20, 460, 441, 251));
        customization->setFont(font5);
        info_obj_6 = new QLabel(customization);
        info_obj_6->setObjectName("info_obj_6");
        info_obj_6->setGeometry(QRect(140, 0, 311, 31));
        info_obj_6->setFont(font4);
        line_4 = new QFrame(customization);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(0, 80, 441, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        scale_vertices = new QSlider(customization);
        scale_vertices->setObjectName("scale_vertices");
        scale_vertices->setGeometry(QRect(0, 140, 211, 31));
        scale_vertices->setMaximum(25);
        scale_vertices->setOrientation(Qt::Horizontal);
        scale_line = new QSlider(customization);
        scale_line->setObjectName("scale_line");
        scale_line->setGeometry(QRect(0, 210, 211, 41));
        scale_line->setMinimum(1);
        scale_line->setMaximum(20);
        scale_line->setSingleStep(1);
        scale_line->setValue(1);
        scale_line->setSliderPosition(1);
        scale_line->setOrientation(Qt::Horizontal);
        line_8 = new QFrame(customization);
        line_8->setObjectName("line_8");
        line_8->setGeometry(QRect(0, 240, 441, 16));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        gridLayoutWidget = new QWidget(customization);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 40, 201, 41));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(1);
        gridLayout->setContentsMargins(0, 4, 12, 5);
        info_obj_7 = new QLabel(gridLayoutWidget);
        info_obj_7->setObjectName("info_obj_7");
        QFont font8;
        font8.setFamilies({QString::fromUtf8("Quicksand")});
        font8.setPointSize(14);
        font8.setBold(true);
        info_obj_7->setFont(font8);

        gridLayout->addWidget(info_obj_7, 0, 0, 1, 1);

        protection = new QComboBox(gridLayoutWidget);
        protection->addItem(QString());
        protection->addItem(QString());
        protection->setObjectName("protection");
        protection->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(protection->sizePolicy().hasHeightForWidth());
        protection->setSizePolicy(sizePolicy2);
        protection->setFont(font1);
        protection->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgb(47, 198, 255);\n"
"    color: white;\n"
"    border: 1px solid #606060;\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 0px;\n"
"    border-width: 0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: none;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgb(66, 66, 66);\n"
"    color: white;\n"
"}\n"
""));

        gridLayout->addWidget(protection, 0, 1, 1, 1);

        gridLayoutWidget_2 = new QWidget(customization);
        gridLayoutWidget_2->setObjectName("gridLayoutWidget_2");
        gridLayoutWidget_2->setGeometry(QRect(210, 40, 221, 41));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setHorizontalSpacing(1);
        gridLayout_2->setContentsMargins(0, 4, 12, 5);
        info_obj_8 = new QLabel(gridLayoutWidget_2);
        info_obj_8->setObjectName("info_obj_8");
        info_obj_8->setFont(font8);

        gridLayout_2->addWidget(info_obj_8, 0, 0, 1, 1);

        background_color = new QPushButton(gridLayoutWidget_2);
        background_color->setObjectName("background_color");
        sizePolicy2.setHeightForWidth(background_color->sizePolicy().hasHeightForWidth());
        background_color->setSizePolicy(sizePolicy2);
        background_color->setFont(font3);
        background_color->setToolTipDuration(1);
        background_color->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(47, 198, 255);\n"
"  color: white;\n"
"  border-radius: 15px;\n"
"  border: 1px solid #606060;\n"
"\n"
"\n"
"  border-width: 1px;\n"
"}\n"
"\n"
"QPushButton::pressed { \n"
"  background-color: rgb(25, 127, 204);\n"
"  border-style: solid;\n"
"  border-top-color: rgb(18, 108, 70);\n"
"  border-left-color: rgb(18, 108, 70);\n"
"  border-bottom-color: rgb(53, 121, 78);\n"
"  border-right-color: rgb(53, 121, 78);\n"
"  border-width: 1px;\n"
"}"));
        background_color->setIconSize(QSize(42, 22));

        gridLayout_2->addWidget(background_color, 0, 1, 1, 1);

        gridLayoutWidget_3 = new QWidget(customization);
        gridLayoutWidget_3->setObjectName("gridLayoutWidget_3");
        gridLayoutWidget_3->setGeometry(QRect(210, 100, 221, 41));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setHorizontalSpacing(1);
        gridLayout_3->setContentsMargins(0, 4, 12, 5);
        info_obj_10 = new QLabel(gridLayoutWidget_3);
        info_obj_10->setObjectName("info_obj_10");
        info_obj_10->setFont(font8);

        gridLayout_3->addWidget(info_obj_10, 0, 0, 1, 1);

        vertices_color = new QPushButton(gridLayoutWidget_3);
        vertices_color->setObjectName("vertices_color");
        sizePolicy2.setHeightForWidth(vertices_color->sizePolicy().hasHeightForWidth());
        vertices_color->setSizePolicy(sizePolicy2);
        vertices_color->setFont(font3);
        vertices_color->setToolTipDuration(1);
        vertices_color->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(47, 198, 255);\n"
"  color: white;\n"
"  border-radius: 15px;\n"
"  border: 1px solid #606060;\n"
"\n"
"\n"
"  border-width: 1px;\n"
"}\n"
"\n"
"QPushButton::pressed { \n"
"  background-color: rgb(25, 127, 204);\n"
"  border-style: solid;\n"
"  border-top-color: rgb(18, 108, 70);\n"
"  border-left-color: rgb(18, 108, 70);\n"
"  border-bottom-color: rgb(53, 121, 78);\n"
"  border-right-color: rgb(53, 121, 78);\n"
"  border-width: 1px;\n"
"}"));
        vertices_color->setIconSize(QSize(42, 22));

        gridLayout_3->addWidget(vertices_color, 0, 1, 1, 1);

        gridLayoutWidget_4 = new QWidget(customization);
        gridLayoutWidget_4->setObjectName("gridLayoutWidget_4");
        gridLayoutWidget_4->setGeometry(QRect(210, 170, 221, 41));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(1);
        gridLayout_4->setContentsMargins(0, 4, 12, 5);
        line_color = new QPushButton(gridLayoutWidget_4);
        line_color->setObjectName("line_color");
        sizePolicy2.setHeightForWidth(line_color->sizePolicy().hasHeightForWidth());
        line_color->setSizePolicy(sizePolicy2);
        line_color->setFont(font3);
        line_color->setToolTipDuration(1);
        line_color->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(47, 198, 255);\n"
"  color: white;\n"
"  border-radius: 15px;\n"
"  border: 1px solid #606060;\n"
"\n"
"\n"
"  border-width: 1px;\n"
"}\n"
"\n"
"QPushButton::pressed { \n"
"  background-color: rgb(25, 127, 204);\n"
"  border-style: solid;\n"
"  border-top-color: rgb(18, 108, 70);\n"
"  border-left-color: rgb(18, 108, 70);\n"
"  border-bottom-color: rgb(53, 121, 78);\n"
"  border-right-color: rgb(53, 121, 78);\n"
"  border-width: 1px;\n"
"}"));
        line_color->setIconSize(QSize(42, 22));

        gridLayout_4->addWidget(line_color, 0, 1, 1, 1);

        info_obj_12 = new QLabel(gridLayoutWidget_4);
        info_obj_12->setObjectName("info_obj_12");
        info_obj_12->setFont(font8);

        gridLayout_4->addWidget(info_obj_12, 0, 0, 1, 1);

        gridLayoutWidget_5 = new QWidget(customization);
        gridLayoutWidget_5->setObjectName("gridLayoutWidget_5");
        gridLayoutWidget_5->setGeometry(QRect(0, 100, 201, 41));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setHorizontalSpacing(1);
        gridLayout_5->setContentsMargins(0, 4, 12, 5);
        info_obj_9 = new QLabel(gridLayoutWidget_5);
        info_obj_9->setObjectName("info_obj_9");
        info_obj_9->setFont(font8);

        gridLayout_5->addWidget(info_obj_9, 0, 0, 1, 1);

        vertices_slider = new QComboBox(gridLayoutWidget_5);
        vertices_slider->addItem(QString());
        vertices_slider->addItem(QString());
        vertices_slider->addItem(QString());
        vertices_slider->setObjectName("vertices_slider");
        vertices_slider->setEnabled(true);
        sizePolicy2.setHeightForWidth(vertices_slider->sizePolicy().hasHeightForWidth());
        vertices_slider->setSizePolicy(sizePolicy2);
        vertices_slider->setFont(font1);
        vertices_slider->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgb(47, 198, 255);\n"
"    color: white;\n"
"    border: 1px solid #606060;\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 0px;\n"
"    border-width: 0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: none;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgb(66, 66, 66);\n"
"    color: white;\n"
"}\n"
"\n"
""));

        gridLayout_5->addWidget(vertices_slider, 0, 1, 1, 1);

        gridLayoutWidget_6 = new QWidget(customization);
        gridLayoutWidget_6->setObjectName("gridLayoutWidget_6");
        gridLayoutWidget_6->setGeometry(QRect(0, 170, 201, 41));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setHorizontalSpacing(1);
        gridLayout_6->setContentsMargins(0, 4, 12, 5);
        info_obj_11 = new QLabel(gridLayoutWidget_6);
        info_obj_11->setObjectName("info_obj_11");
        info_obj_11->setFont(font8);

        gridLayout_6->addWidget(info_obj_11, 0, 0, 1, 1);

        line_solid = new QComboBox(gridLayoutWidget_6);
        line_solid->addItem(QString());
        line_solid->addItem(QString());
        line_solid->setObjectName("line_solid");
        line_solid->setEnabled(true);
        sizePolicy2.setHeightForWidth(line_solid->sizePolicy().hasHeightForWidth());
        line_solid->setSizePolicy(sizePolicy2);
        line_solid->setFont(font1);
        line_solid->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: rgb(47, 198, 255);\n"
"    color: white;\n"
"    border: 1px solid #606060;\n"
"    border-radius: 15px;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 0px;\n"
"    border-width: 0px;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: none;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background-color: rgb(66, 66, 66);\n"
"    color: white;\n"
"}\n"
""));

        gridLayout_6->addWidget(line_solid, 0, 1, 1, 1);

        clean_all = new QPushButton(Menu);
        clean_all->setObjectName("clean_all");
        clean_all->setGeometry(QRect(210, 720, 101, 31));
        clean_all->setFont(font3);
        clean_all->setToolTipDuration(1);
        clean_all->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 79, 66);\n"
"  color: white;\n"
"  border-radius: 15px;\n"
"  border: 1px solid #606060;\n"
"\n"
"\n"
"  border-width: 1px;\n"
"}\n"
"\n"
"QPushButton::pressed { \n"
"  background-color: rgb(25, 127, 204);\n"
"  border-style: solid;\n"
"  border-top-color: rgb(18, 108, 70);\n"
"  border-left-color: rgb(18, 108, 70);\n"
"  border-bottom-color: rgb(53, 121, 78);\n"
"  border-right-color: rgb(53, 121, 78);\n"
"  border-width: 1px;\n"
"}"));
        clean_all->setIconSize(QSize(42, 22));
        label_2 = new QLabel(Menu);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(160, 710, 41, 41));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/resurses/images/clean_all.png")));
        label_2->setScaledContents(true);
        label_2->raise();
        info->raise();
        Transform->raise();
        customization->raise();
        clean_all->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "3D_viewer", nullptr));
        file_name->setText(QCoreApplication::translate("MainWindow", "File Name:", nullptr));
        vertexes_count->setText(QCoreApplication::translate("MainWindow", "Vertices count:", nullptr));
        ribs_count->setText(QCoreApplication::translate("MainWindow", "Ribs count:", nullptr));
        open_file->setText(QCoreApplication::translate("MainWindow", "  Open File ", nullptr));
#if QT_CONFIG(shortcut)
        open_file->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        make_gif->setText(QCoreApplication::translate("MainWindow", "Make gif", nullptr));
#if QT_CONFIG(shortcut)
        make_gif->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        screenshot_start->setText(QCoreApplication::translate("MainWindow", "Screenshot", nullptr));
#if QT_CONFIG(shortcut)
        screenshot_start->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        info_obj->setText(QCoreApplication::translate("MainWindow", "Information about the object                     ", nullptr));
        label_Xt->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_Xt_2->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_Xt_3->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        info_obj_3->setText(QCoreApplication::translate("MainWindow", "Translate", nullptr));
        info_obj_4->setText(QCoreApplication::translate("MainWindow", "Rotation", nullptr));
        label_Xt_4->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_Xt_5->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        label_Xt_6->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        info_obj_5->setText(QCoreApplication::translate("MainWindow", "Scale", nullptr));
        info_obj_13->setText(QCoreApplication::translate("MainWindow", "Transformation                   ", nullptr));
        info_obj_6->setText(QCoreApplication::translate("MainWindow", "Customization", nullptr));
        info_obj_7->setText(QCoreApplication::translate("MainWindow", "Protection", nullptr));
        protection->setItemText(0, QCoreApplication::translate("MainWindow", "Central", nullptr));
        protection->setItemText(1, QCoreApplication::translate("MainWindow", "Parallel", nullptr));

        info_obj_8->setText(QCoreApplication::translate("MainWindow", "Backgound", nullptr));
        background_color->setText(QCoreApplication::translate("MainWindow", "Set Color", nullptr));
#if QT_CONFIG(shortcut)
        background_color->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        info_obj_10->setText(QCoreApplication::translate("MainWindow", "Color", nullptr));
        vertices_color->setText(QCoreApplication::translate("MainWindow", "Set Color", nullptr));
#if QT_CONFIG(shortcut)
        vertices_color->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        line_color->setText(QCoreApplication::translate("MainWindow", "Set Color", nullptr));
#if QT_CONFIG(shortcut)
        line_color->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        info_obj_12->setText(QCoreApplication::translate("MainWindow", "Color Line", nullptr));
        info_obj_9->setText(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        vertices_slider->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        vertices_slider->setItemText(1, QCoreApplication::translate("MainWindow", "Cirlce", nullptr));
        vertices_slider->setItemText(2, QCoreApplication::translate("MainWindow", "Square", nullptr));

        info_obj_11->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        line_solid->setItemText(0, QCoreApplication::translate("MainWindow", "Solid", nullptr));
        line_solid->setItemText(1, QCoreApplication::translate("MainWindow", "Dotted", nullptr));

        clean_all->setText(QCoreApplication::translate("MainWindow", "Clean All", nullptr));
#if QT_CONFIG(shortcut)
        clean_all->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
