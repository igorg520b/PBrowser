#ifndef OBJECTPROPERTYBROWSER_H
#define OBJECTPROPERTYBROWSER_H

#include <QObject>
#include <QDebug>
#include <QPushButton>
#include <QMap>
#include <QMetaProperty>
#include "qteditorfactory.h"
#include "qttreepropertybrowser.h"
#include "qtpropertymanager.h"
#include "qtvariantproperty.h"

#include "PBrowser_global.h"

class PBROWSER_EXPORT ObjectPropertyBrowser : public QtTreePropertyBrowser
{
    Q_OBJECT

public:
    ObjectPropertyBrowser(QWidget* parent);
    void setActiveObject(QObject *obj);

private:
    QtVariantPropertyManager *variantManager;
    QObject *currentlyConnectedObject = nullptr;
    QMap<QtProperty *, const char*> propertyMap;


private Q_SLOTS:
    void valueChanged(QtProperty *property, const QVariant &value);

public Q_SLOTS:
    void objectUpdated();

};

#endif // OBJECTPROPERTYBROWSER_H
