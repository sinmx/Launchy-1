/*
Launchy: Application Launcher
Copyright (C) 2007  Josh Karlin

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#ifndef GUI_H
#define GUI_H

#include "ui_dlg.h"
#include "globals.h"


class Gui : public QWidget, private Ui::Dlg
{
	Q_OBJECT
private:
	QList<WebySite> sites;
public:
	Gui(QWidget* parent);
	~Gui() { this->hide(); }
	void writeOptions();
	QString defaultName;

public slots:
	void newRow();
	void remRow();
	void dragEnter(QDragEnterEvent *event);
	void drop(QDropEvent *event);
	void makeDefault();
	void clearDefault();

private:
	void appendRow(const QString& name, const QString& path);
};

#endif 
