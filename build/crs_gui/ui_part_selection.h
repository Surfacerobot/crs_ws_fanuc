/********************************************************************************
** Form generated from reading UI file 'part_selection.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PART_SELECTION_H
#define UI_PART_SELECTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PartSelection
{
public:
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout;
    QListWidget *list_widget_parts;
    QFrame *line;
    QListWidget *list_widget_part_paths;
    QPushButton *push_button_load_selected_part;
    QPushButton *push_button_refresh_parts_list;

    void setupUi(QWidget *PartSelection)
    {
        if (PartSelection->objectName().isEmpty())
            PartSelection->setObjectName(QStringLiteral("PartSelection"));
        PartSelection->resize(450, 253);
        verticalLayout_9 = new QVBoxLayout(PartSelection);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        list_widget_parts = new QListWidget(PartSelection);
        list_widget_parts->setObjectName(QStringLiteral("list_widget_parts"));

        horizontalLayout->addWidget(list_widget_parts);

        line = new QFrame(PartSelection);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        list_widget_part_paths = new QListWidget(PartSelection);
        list_widget_part_paths->setObjectName(QStringLiteral("list_widget_part_paths"));

        horizontalLayout->addWidget(list_widget_part_paths);


        verticalLayout_9->addLayout(horizontalLayout);

        push_button_load_selected_part = new QPushButton(PartSelection);
        push_button_load_selected_part->setObjectName(QStringLiteral("push_button_load_selected_part"));

        verticalLayout_9->addWidget(push_button_load_selected_part);

        push_button_refresh_parts_list = new QPushButton(PartSelection);
        push_button_refresh_parts_list->setObjectName(QStringLiteral("push_button_refresh_parts_list"));

        verticalLayout_9->addWidget(push_button_refresh_parts_list);


        retranslateUi(PartSelection);

        QMetaObject::connectSlotsByName(PartSelection);
    } // setupUi

    void retranslateUi(QWidget *PartSelection)
    {
        PartSelection->setWindowTitle(QApplication::translate("PartSelection", "Form", Q_NULLPTR));
        push_button_load_selected_part->setText(QApplication::translate("PartSelection", "Load Selected Part", Q_NULLPTR));
        push_button_refresh_parts_list->setText(QApplication::translate("PartSelection", "Refresh Parts List", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PartSelection: public Ui_PartSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PART_SELECTION_H
