/*
 * Copyright (C) 2011 Nokia Corporation and/or its subsidiary(-ies)
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 */

#ifndef QtWebComboBox_h
#define QtWebComboBox_h

#include "Platform.h"

#include <QtGui/QComboBox>

#ifndef QT_NO_COMBOBOX

namespace WebCore {

class QtWebComboBox : public QComboBox {
    Q_OBJECT
public:
    QtWebComboBox();

    void showPopupAtCursorPosition();
    virtual bool eventFilter(QObject* watched, QEvent*);

Q_SIGNALS:
    void didHide();
};

}

#endif // QT_NO_COMBOBOX

#endif // QtWebComboBox_h
