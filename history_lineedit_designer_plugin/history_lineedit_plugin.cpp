/**

@author Mattia Basaglia

@section License

    Copyright (C) 2013 Mattia Basaglia

    This file is part of Color Widgets.

    Color Widgets is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Color Widgets is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Color Widgets.  If not, see <http://www.gnu.org/licenses/>.

*/
#include "history_lineedit_plugin.hpp"
#include "history_line_edit.hpp"

History_LineEdit_Plugin::History_LineEdit_Plugin(QObject *parent) :
    QObject(parent), initialized(false)
{
}

void History_LineEdit_Plugin::initialize(QDesignerFormEditorInterface *)
{
    initialized = true;
}

bool History_LineEdit_Plugin::isInitialized() const
{
    return initialized;
}

QWidget *History_LineEdit_Plugin::createWidget(QWidget *parent)
{
    return new History_Line_Edit(parent);
}

QString History_LineEdit_Plugin::name() const
{
    return "History_Line_Edit";
}

QString History_LineEdit_Plugin::group() const
{
    return "Input Widgets";
}

QIcon History_LineEdit_Plugin::icon() const
{
    return QIcon::fromTheme("edit-rename");
}

QString History_LineEdit_Plugin::toolTip() const
{
    return "Line Edit with history";
}

QString History_LineEdit_Plugin::whatsThis() const
{
    return "A QLineEdit that remembers and allows to navigate the history of lines  entered in the widget";
}

bool History_LineEdit_Plugin::isContainer() const
{
    return false;
}

QString History_LineEdit_Plugin::domXml() const
{
    return "<ui language=\"c++\">\n"
           " <widget class=\"History_Line_Edit\" name=\"history_line_edit\">\n"
           " </widget>\n"
           "</ui>\n";
}

QString History_LineEdit_Plugin::includeFile() const
{
    return "history_line_edit.hpp";
}


