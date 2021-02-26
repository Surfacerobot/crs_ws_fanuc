/********************************************************************************
** Form generated from reading UI file 'polygon_area_selection_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POLYGON_AREA_SELECTION_WIDGET_H
#define UI_POLYGON_AREA_SELECTION_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PolygonAreaSelectionWidget
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_area_selection;
    QPushButton *push_button_clear_selection;
    QPushButton *push_button_apply_selection;

    void setupUi(QWidget *PolygonAreaSelectionWidget)
    {
        if (PolygonAreaSelectionWidget->objectName().isEmpty())
            PolygonAreaSelectionWidget->setObjectName(QStringLiteral("PolygonAreaSelectionWidget"));
        PolygonAreaSelectionWidget->resize(409, 114);
        verticalLayout = new QVBoxLayout(PolygonAreaSelectionWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_area_selection = new QLabel(PolygonAreaSelectionWidget);
        label_area_selection->setObjectName(QStringLiteral("label_area_selection"));

        verticalLayout->addWidget(label_area_selection);

        push_button_clear_selection = new QPushButton(PolygonAreaSelectionWidget);
        push_button_clear_selection->setObjectName(QStringLiteral("push_button_clear_selection"));

        verticalLayout->addWidget(push_button_clear_selection);

        push_button_apply_selection = new QPushButton(PolygonAreaSelectionWidget);
        push_button_apply_selection->setObjectName(QStringLiteral("push_button_apply_selection"));

        verticalLayout->addWidget(push_button_apply_selection);


        retranslateUi(PolygonAreaSelectionWidget);

        QMetaObject::connectSlotsByName(PolygonAreaSelectionWidget);
    } // setupUi

    void retranslateUi(QWidget *PolygonAreaSelectionWidget)
    {
        PolygonAreaSelectionWidget->setWindowTitle(QApplication::translate("PolygonAreaSelectionWidget", "Form", Q_NULLPTR));
        label_area_selection->setText(QApplication::translate("PolygonAreaSelectionWidget", "Area Selection\n"
"(Use Publish Point tool, selection is automatically applied)", Q_NULLPTR));
        push_button_clear_selection->setText(QApplication::translate("PolygonAreaSelectionWidget", "Clear Selection", Q_NULLPTR));
        push_button_apply_selection->setText(QApplication::translate("PolygonAreaSelectionWidget", "Apply Selection", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PolygonAreaSelectionWidget: public Ui_PolygonAreaSelectionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POLYGON_AREA_SELECTION_WIDGET_H
