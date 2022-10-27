// Copyright 2022 Gavrilov Leonid

#ifndef MODULES_GAVRILOV_LEON_POLYGON_AREA_INCLUDE_POLYGON_AREA_H_
#define MODULES_GAVRILOV_LEON_POLYGON_AREA_INCLUDE_POLYGON_AREA_H_

#include <utility>
#include <vector>

class Polygon {
 public:
  int vertex_num;
  std::vector<std::pair<double, double>> vertexes;
  Polygon();
  void addVertex(std::pair<double, double> new_vertex);
  void deleteVertex(std::pair<double, double> vertex);
  void deleteVertexByNumber(int number);
  double countPolygonArea();
};

#endif  // MODULES_GAVRILOV_LEON_POLYGON_AREA_INCLUDE_POLYGON_AREA_H_
