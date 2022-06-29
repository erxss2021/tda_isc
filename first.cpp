#include <iostream>

namespace rectangle
{
  double area( double width , double height )
  {
    return width * height;
  }
}

namespace triangle
{
  double area( double base , double height )
  {
    return ( base * height ) / 2;
  }
}

int main()
{
  double rectangleArea = rectangle::area( 12.9 , 2.5 );
  double triangleArea = triangle::area( 4.0 , 3.0 );

  std::cout << rectangleArea << std::endl << triangleArea << std::endl;
}