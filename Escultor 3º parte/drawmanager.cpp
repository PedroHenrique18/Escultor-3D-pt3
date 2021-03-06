#include "drawmanager.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <iostream>
#include <algorithm>
#include <qdebug.h>
#include "mainwindow.h"

DrawManager::DrawManager(QWidget *parent) : QWidget(parent)
{
    sculpt = nullptr;
    current_x = 0;
    current_y = 0;
    current_z = 0;
    current_plane = 0;
    selected_square_col = -1;
    selected_square_row = -1;
}

void DrawManager::updateSculptInfo(Sculptor* sculpt, int current_x, int current_y, int current_z, int current_plane)
{
    this->sculpt = sculpt;
    this->current_x = current_x;
    this->current_y = current_y;
    this->current_z = current_z;
    this->current_plane = current_plane;
}

void DrawManager::updateGridInfo()
{
    int n_vertical;
    int n_horizontal;
    int square_size_hor = 0;
    int square_size_ver = 0;

    if(current_plane == 0)
    {
        n_vertical = this->sculpt->getNy();
        n_horizontal = this->sculpt->getNx();
    }
    else if(current_plane == 1)
    {
        n_vertical = this->sculpt->getNz();
        n_horizontal = this->sculpt->getNy();
    }
    else if(current_plane == 2)
    {
        n_vertical = this->sculpt->getNx();
        n_horizontal = this->sculpt->getNz();
    }
    else
    {
        n_vertical = this->sculpt->getNy();
        n_horizontal = this->sculpt->getNx();
    }


    n_ver = n_vertical;
    n_hor = n_horizontal;
    square_size_hor = width()/n_horizontal;
    square_size_ver = height()/n_vertical;


    if (square_size_hor > square_size_ver)
    {
        vertical_grid = true;
        square_size = square_size_ver;
    }
    else
    {
        vertical_grid = false;
        square_size = square_size_hor;
    }
    int actual_width = square_size * n_horizontal;
    int actual_height = square_size * n_vertical;

    margin_size_hor = (width() - actual_width)/2;
    margin_size_ver = (height() - actual_height)/2;

    click_min_valid_hor = margin_size_hor;
    click_max_valid_hor = margin_size_hor + actual_width;
    click_min_valid_ver = margin_size_ver;
    click_max_valid_ver = margin_size_ver + actual_height;

}

void DrawManager::drawBackGround()
{
    this->pen.setColor(QColor(0,0,0));
    this->pen.setStyle(Qt::SolidLine);
    this->pen.setWidth(2);

    this->brush.setColor(Qt::white);
    this->brush.setStyle(Qt::SolidPattern);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setBrush(brush);
    painter.setPen(pen);

    painter.drawRect( QRect(0,0, width(), height() ) );
}

void DrawManager::setCurrent_x(int value)
{
    current_x = value;
}

void DrawManager::setCurrent_y(int value)
{
    current_y = value;
}

void DrawManager::setCurrent_z(int value)
{
    current_z = value;
}

void DrawManager::setCurrent_plane(int value)
{
    current_plane = value;
}

void DrawManager::drawGrid()
{
    int margin_hor = 0;
    int margin_ver = 0;
    margin_hor = std::max(0, margin_size_hor);
    margin_ver = std::max(0, margin_size_ver);

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    this->pen.setStyle(Qt::SolidLine);
    this->pen.setWidth(1);
    this->brush.setColor(QColor(200, 200, 200, 0));
    painter.setBrush(brush);
    painter.setPen(pen);
    int r = 0;
    int g = 0;
    int b = 0;
    int a = 0;

    int x0, y0;
    bool voxelEnabled = false;
    for (int row=0; row < n_ver; row++)
    {
        for (int col=0; col < n_hor; col++)
        {
            x0 = (col*square_size) + margin_hor;
            y0 = (row*square_size) + margin_ver;

            if(current_plane == 0)
            {
                voxelEnabled = this->sculpt->getV()[col][row][current_z].isOn;
                r = this->sculpt->getV()[col][row][current_z].r * 200;
                g = this->sculpt->getV()[col][row][current_z].g * 200;
                b = this->sculpt->getV()[col][row][current_z].b * 200;
                a = this->sculpt->getV()[col][row][current_z].a * 200;
            }
            else if(current_plane == 1)
            {

                voxelEnabled = this->sculpt->getV()[current_x][col][row].isOn;
                r = this->sculpt->getV()[current_x][col][row].r * 200;
                g = this->sculpt->getV()[current_x][col][row].g * 200;
                b = this->sculpt->getV()[current_x][col][row].b * 200;
                a = this->sculpt->getV()[current_x][col][row].a * 200;
            }
            else if(current_plane == 2)
            {
                voxelEnabled = this->sculpt->getV()[row][current_y][col].isOn;
                r = this->sculpt->getV()[row][current_y][col].r * 200;
                g = this->sculpt->getV()[row][current_y][col].g * 200;
                b = this->sculpt->getV()[row][current_y][col].b * 200;
                a = this->sculpt->getV()[row][current_y][col].a * 200;
            }
            else
            {
                voxelEnabled = false;
            }


            if(voxelEnabled)
            {
                this->pen.setWidth(2);
                this->pen.setColor(QColor(0,0,0,200));
                this->brush.setColor(QColor(r, g, b, a));
            }
            else
            {
                this->pen.setWidth(1);
                this->pen.setColor(QColor(180,180,180,200));
                this->brush.setColor(QColor(200, 200, 200, 0));
            }

            // selected square
            if (row == selected_square_row && col == selected_square_col)
            {
                this->pen.setWidth(2);
                this->pen.setColor(QColor(Qt::blue));
            }

            painter.setPen(pen);
            painter.setBrush(brush);
            painter.drawRect( QRect(x0, y0, square_size, square_size ) );
        }
    }
}

void DrawManager::paintEvent(QPaintEvent *event)
{
    (void) event;
    drawBackGround();
    if(sculpt != nullptr)
    {
        updateGridInfo();
        drawGrid();
    }
}

void DrawManager::mousePressEvent(QMouseEvent *event)
{
    if(this->sculpt != nullptr)
    {
        if(event->button() == Qt::LeftButton)
        {
            if(event->pos().x() > click_min_valid_hor && event->pos().x() < click_max_valid_hor)
            {
                if(event->pos().y() > click_min_valid_ver && event->pos().y() < click_max_valid_ver)
                {
                    click_x_fixed = event->pos().x() - click_min_valid_hor;
                    click_y_fixed = event->pos().y() - click_min_valid_ver;
                    selected_square_col = click_x_fixed/square_size;
                    selected_square_row = click_y_fixed/square_size;

                    if(current_plane == 0)
                    {
                        current_x = selected_square_col;
                        current_y = selected_square_row;
                    }
                    else if(current_plane == 1)
                    {
                        current_y = selected_square_col;
                        current_z = selected_square_row;
                    }else if(current_plane == 2)
                    {
                        current_z = selected_square_col;
                        current_x = selected_square_row;
                    }
                }
            }
            else
            {
                selected_square_col = -1;
                selected_square_row = -1;
            }
            emit positions(current_x, current_y, current_z, selected_square_row, selected_square_col, true);

        }
    }
}

void DrawManager::mouseMoveEvent(QMouseEvent *event)
{
    if(event->pos().x() > click_min_valid_hor && event->pos().x() < click_max_valid_hor)
    {
        if(event->pos().y() > click_min_valid_ver && event->pos().y() < click_max_valid_ver)
        {
            click_x_fixed = event->pos().x() - click_min_valid_hor;
            click_y_fixed = event->pos().y() - click_min_valid_ver;
            selected_square_col = click_x_fixed/square_size;
            selected_square_row = click_y_fixed/square_size;

            if(current_plane == 0)
            {
                current_x = selected_square_col;
                current_y = selected_square_row;
            }
            else if(current_plane == 1)
            {
                current_y = selected_square_col;
                current_z = selected_square_row;
            }else if(current_plane == 2)
            {
                current_z = selected_square_col;
                current_x = selected_square_row;
            }
        }
    }
    else
    {
        selected_square_col = -1;
        selected_square_row = -1;
    }
    emit positions(current_x, current_y, current_z, selected_square_row, selected_square_col, false);

}
