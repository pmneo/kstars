/** *************************************************************************
                          rectnode.h  -  K Desktop Planetarium
                             -------------------
    begin                : 20/08/2016
    copyright            : (C) 2016 by Artem Fedoskin
    email                : afedoskin3@gmail.com
 ***************************************************************************/
/** *************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#pragma once

#include <QColor>
#include <QSGGeometryNode>

class QSGGeometry;
class QSGFlatColorMaterial;

/**
 * @class RectNode
 * @short QSGGeometryNode derived class that draws filled and non-filled rectangles
 *
 * @author Artem Fedoskin
 * @version 1.0
 */
class RectNode : public QSGGeometryNode
{
  public:
    explicit RectNode(bool filled = false);

    /**
     * @brief setRect sets rectangle to display
     * @param x - x coordinate of left-top corner
     * @param y - y coordinate of left-top corner
     * @param w - width
     * @param h - height
     */
    void setRect(int x, int y, int w, int h);

    /** setColor sets the color of rectangle */
    void setColor(const QColor &color);

    /**
     * @brief setFilled sets whether the rectangle should be filled or no
     * @param filled true to be filled, false otherwise
     */
    void setFilled(bool filled);

  private:
    QSGGeometry *m_geometry { nullptr };
    QSGFlatColorMaterial *m_material { nullptr };
    bool m_filled { false };
};
