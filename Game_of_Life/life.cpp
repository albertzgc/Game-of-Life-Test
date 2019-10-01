#include "life.h"

int Life::getCol() const {
	return m_col;
}
int Life::getRow() const {
	return m_row;
}
int Life::getHeight() const {
	return m_height;
}
int Life::getWidth() const {
	return m_width;
}
char Life::getFromFigure(int r, int c) const {
	return m_figure[r][c];
}
