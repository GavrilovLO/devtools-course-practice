// Copyright 2022 Gavrilov Leonid

#include "include/polygon_area.h"

#include <cmath>
#include <string>
#include <utility>

Polygon::Polygon() {}

int const Polygon::getVertexNum() { return this->vertexes.size(); }

void Polygon::addVertex(const std::pair<double, double>& new_vertex) {
  for (int i = 0; i < getVertexNum(); i++)
    if (vertexes[i] == new_vertex)
      throw std::string("This vertex already exists");
  vertexes.push_back(new_vertex);
}

void Polygon::deleteVertex(std::pair<double, double> vertex) {
  bool f = 0;
  for (int i = 0; i < getVertexNum(); i++)
    if (vertexes[i] == vertex) {
      vertexes.erase(vertexes.begin() + i);
      f = 1;
      break;
    }
  if (f == 0) throw std::string("This vertex doesn't exist");
}

void Polygon::deleteVertexByNumber(int number) {
  if (number < 0 || number > getVertexNum() || getVertexNum() == 0) {
    throw std::string("This vertex doesn't exist");
  } else {
    vertexes.erase(vertexes.begin() + number);
  }
}

double Polygon::countPolygonArea() {
  if (getVertexNum() < 3)
    throw std::string("It's not a polygon. Add more points");
  double s = 0, sum1 = 0, sum2 = 0;
  vertexes.push_back(vertexes[0]);
  for (int i = 0; i < getVertexNum() - 1; i++) {
    sum1 += vertexes[i].first * vertexes[i + 1].second;
    sum2 += vertexes[i].second * vertexes[i + 1].first;
  }
  vertexes.pop_back();
  s = fabs(sum1 - sum2) / 2;
  return s;
}
