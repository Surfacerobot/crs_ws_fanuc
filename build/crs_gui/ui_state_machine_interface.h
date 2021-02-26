/********************************************************************************
** Form generated from reading UI file 'state_machine_interface.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATE_MACHINE_INTERFACE_H
#define UI_STATE_MACHINE_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StateMachineInterface
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_3;
    QComboBox *combo_box_sm_available_actions;
    QPushButton *push_button_sm_cancel;
    QPushButton *push_button_sm_approve;
    QLabel *label_sm_actions;
    QLabel *label_sm_current_state;
    QLineEdit *line_edit_sm_current_state;
    QPushButton *push_button_sm_apply;

    void setupUi(QWidget *StateMachineInterface)
    {
        if (StateMachineInterface->objectName().isEmpty())
            StateMachineInterface->setObjectName(QStringLiteral("StateMachineInterface"));
        StateMachineInterface->resize(602, 92);
        verticalLayout = new QVBoxLayout(StateMachineInterface);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        combo_box_sm_available_actions = new QComboBox(StateMachineInterface);
        combo_box_sm_available_actions->setObjectName(QStringLiteral("combo_box_sm_available_actions"));

        gridLayout_3->addWidget(combo_box_sm_available_actions, 2, 1, 1, 1);

        push_button_sm_cancel = new QPushButton(StateMachineInterface);
        push_button_sm_cancel->setObjectName(QStringLiteral("push_button_sm_cancel"));

        gridLayout_3->addWidget(push_button_sm_cancel, 4, 3, 1, 1);

        push_button_sm_approve = new QPushButton(StateMachineInterface);
        push_button_sm_approve->setObjectName(QStringLiteral("push_button_sm_approve"));

        gridLayout_3->addWidget(push_button_sm_approve, 4, 2, 1, 1);

        label_sm_actions = new QLabel(StateMachineInterface);
        label_sm_actions->setObjectName(QStringLiteral("label_sm_actions"));

        gridLayout_3->addWidget(label_sm_actions, 2, 0, 1, 1);

        label_sm_current_state = new QLabel(StateMachineInterface);
        label_sm_current_state->setObjectName(QStringLiteral("label_sm_current_state"));

        gridLayout_3->addWidget(label_sm_current_state, 4, 0, 1, 1);

        line_edit_sm_current_state = new QLineEdit(StateMachineInterface);
        line_edit_sm_current_state->setObjectName(QStringLiteral("line_edit_sm_current_state"));
        line_edit_sm_current_state->setReadOnly(true);

        gridLayout_3->addWidget(line_edit_sm_current_state, 4, 1, 1, 1);

        push_button_sm_apply = new QPushButton(StateMachineInterface);
        push_button_sm_apply->setObjectName(QStringLiteral("push_button_sm_apply"));

        gridLayout_3->addWidget(push_button_sm_apply, 2, 2, 1, 2);


        verticalLayout->addLayout(gridLayout_3);


        retranslateUi(StateMachineInterface);

        QMetaObject::connectSlotsByName(StateMachineInterface);
    } // setupUi

    void retranslateUi(QWidget *StateMachineInterface)
    {
        StateMachineInterface->setWindowTitle(QApplication::translate("StateMachineInterface", "Form", Q_NULLPTR));
        push_button_sm_cancel->setText(QApplication::translate("StateMachineInterface", "Cancel", Q_NULLPTR));
        push_button_sm_approve->setText(QApplication::translate("StateMachineInterface", "Approve", Q_NULLPTR));
        label_sm_actions->setText(QApplication::translate("StateMachineInterface", "State Machine Actions", Q_NULLPTR));
        label_sm_current_state->setText(QApplication::translate("StateMachineInterface", "Current State", Q_NULLPTR));
        push_button_sm_apply->setText(QApplication::translate("StateMachineInterface", "Apply", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StateMachineInterface: public Ui_StateMachineInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATE_MACHINE_INTERFACE_H
