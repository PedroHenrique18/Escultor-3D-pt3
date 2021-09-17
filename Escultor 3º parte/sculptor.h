#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <string>

using namespace std;

struct Voxel {
  float r,g,b; // Colors
  float a;// Transparency
  bool isOn; // Included or not
};

class Sculptor
{
protected:
    Voxel ***v;// 3D matrix
    float r,g,b,a; // Current drawing color
    int nx,ny,nz; // Dimensions

public:
      Sculptor();
      Sculptor(int _nx, int _ny, int _nz);
      ~Sculptor();
      void setColor(float r, float g, float b, float alpha);
      void putVoxel(int x, int y, int z);
      void cutVoxel(int x, int y, int z);
      void printFigure();
      void writeOFF(char filename);


      int getNx() const;
      int getNy() const;
      int getNz() const;
      Voxel ***getV() const;
};

#endif // SCULPTOR_H
