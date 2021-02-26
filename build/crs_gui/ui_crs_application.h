/********************************************************************************
** Form generated from reading UI file 'crs_application.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRS_APPLICATION_H
#define UI_CRS_APPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CRSApplication
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line;
    QTabWidget *tab_widget;
    QWidget *tab_setup;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *group_box_load;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *vertical_layout_part_selector;
    QFrame *line_4;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QVBoxLayout *vertical_layout_sm_interface;
    QWidget *tab_log;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *group_box_Log;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *vertical_layout_log;

    void setupUi(QWidget *CRSApplication)
    {
        if (CRSApplication->objectName().isEmpty())
            CRSApplication->setObjectName(QStringLiteral("CRSApplication"));
        CRSApplication->resize(667, 673);
        verticalLayout = new QVBoxLayout(CRSApplication);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(CRSApplication);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        line = new QFrame(CRSApplication);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        tab_widget = new QTabWidget(CRSApplication);
        tab_widget->setObjectName(QStringLiteral("tab_widget"));
        tab_widget->setEnabled(true);
        tab_setup = new QWidget();
        tab_setup->setObjectName(QStringLiteral("tab_setup"));
        verticalLayout_6 = new QVBoxLayout(tab_setup);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        group_box_load = new QGroupBox(tab_setup);
        group_box_load->setObjectName(QStringLiteral("group_box_load"));
        verticalLayout_2 = new QVBoxLayout(group_box_load);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        vertical_layout_part_selector = new QVBoxLayout();
        vertical_layout_part_selector->setObjectName(QStringLiteral("vertical_layout_part_selector"));

        verticalLayout_2->addLayout(vertical_layout_part_selector);


        verticalLayout_6->addWidget(group_box_load);

        line_4 = new QFrame(tab_setup);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_4);

        line_2 = new QFrame(tab_setup);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_6->addWidget(line_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_3 = new QLabel(tab_setup);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        vertical_layout_sm_interface = new QVBoxLayout();
        vertical_layout_sm_interface->setObjectName(QStringLiteral("vertical_layout_sm_interface"));

        verticalLayout_3->addLayout(vertical_layout_sm_interface);


        verticalLayout_6->addLayout(verticalLayout_3);

        tab_widget->addTab(tab_setup, QString());
        tab_log = new QWidget();
        tab_log->setObjectName(QStringLiteral("tab_log"));
        tab_log->setEnabled(true);
        verticalLayout_4 = new QVBoxLayout(tab_log);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        group_box_Log = new QGroupBox(tab_log);
        group_box_Log->setObjectName(QStringLiteral("group_box_Log"));
        group_box_Log->setEnabled(false);
        verticalLayout_13 = new QVBoxLayout(group_box_Log);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        vertical_layout_log = new QVBoxLayout();
        vertical_layout_log->setObjectName(QStringLiteral("vertical_layout_log"));

        verticalLayout_13->addLayout(vertical_layout_log);


        verticalLayout_4->addWidget(group_box_Log);

        tab_widget->addTab(tab_log, QString());

        verticalLayout->addWidget(tab_widget);


        retranslateUi(CRSApplication);

        tab_widget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CRSApplication);
    } // setupUi

    void retranslateUi(QWidget *CRSApplication)
    {
        CRSApplication->setWindowTitle(QApplication::translate("CRSApplication", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("CRSApplication", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600;\">Collaborative Robotic Sanding</span></p></body></html>", Q_NULLPTR));
        group_box_load->setTitle(QApplication::translate("CRSApplication", "1. Load Part", Q_NULLPTR));
        label_3->setText(QApplication::translate("CRSApplication", "2. Process Control", Q_NULLPTR));
        tab_widget->setTabText(tab_widget->indexOf(tab_setup), QApplication::translate("CRSApplication", "Main", Q_NULLPTR));
        group_box_Log->setTitle(QApplication::translate("CRSApplication", "Log Messages", Q_NULLPTR));
        tab_widget->setTabText(tab_widget->indexOf(tab_log), QApplication::translate("CRSApplication", "Log", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CRSApplication: public Ui_CRSApplication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRS_APPLICATION_H
