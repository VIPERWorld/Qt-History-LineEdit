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
#include "history_lineedit_plugin_collection.hpp"
#include "history_lineedit_plugin.hpp"

History_LineEdit_Plugin_Collection::History_LineEdit_Plugin_Collection(QObject *parent) :
    QObject(parent)
{
    widgets.push_back(new History_LineEdit_Plugin(this));
}

QList<QDesignerCustomWidgetInterface *> History_LineEdit_Plugin_Collection::customWidgets() const
{
    return widgets;
}
