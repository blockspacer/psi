/*
 * iconlabel.h - the FancyLabel widget
 * Copyright (C) 2003  Michail Pishchagin
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 *
 */

#ifndef ICONLABEL_H
#define ICONLABEL_H

#include <QWidget>
#include <QLabel>

class PsiIcon;

class IconLabel : public QLabel
{
    Q_OBJECT
    Q_PROPERTY( QString psiIconName READ psiIconName WRITE setPsiIcon )

public:
    IconLabel(QWidget *parent = nullptr);
    ~IconLabel();

    const PsiIcon *psiIcon () const;
    QString psiIconName () const;
    void setPsiIcon (const PsiIcon *, bool copyIcon = true);
    void setPsiIcon (const QString &);

    void setScaledContents(int width, int height);

    class Private;
private:
    Private *d;
};

#endif
