class Point2D
{
      public:    
            Point2D();   
            Point2D(int x, int y);   
            int getX();
            int getY();
            Point2D operator+(Point2D &p); // 更+笲衡
            Point2D operator+(int &n); // 更+笲衡
            Point2D operator*(Point2D &p); // 更*笲衡    
            Point2D operator-(Point2D &p); // 更-笲衡
 
      private:   
            int X;   
            int Y;
};
