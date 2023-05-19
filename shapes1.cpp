#include <iostream>
#include <vector>
#include <memory>
#include <variant>
class Vector2D{};

enum ShapeType{
	circle,
	square
};
class Shape{
	public:
	Shape()=default;
	virtual ~Shape()=default;
	virtual void draw() const=0;
};
class Circle:public Shape{
	public:
	explicit Circle(double rad)
	:radius{rad}{}
	double getRadius() const noexcept;
	void draw() const override{std::cout<<"drawing circle"<<std::endl;};
	private:
	double radius;
};
void translate(Circle&, Vector2D const&);
void rotate(Circle&, double const&);
//void Circle::draw(){std::cout<<"drawing circle"<<std::endl;};
class Square: public Shape{
	public:
	explicit Square(double s)
	:
	side{s}
	{}
	double getSide() const noexcept;
	void draw() const override{std::cout<<"drawing square"<<std::endl;};
	private:
	double side;
};
void translate(Square&, Vector2D const&);
void rotate(Square&, Vector2D const&);
//void Square::draw(){std::cout<<"drawing square"<<std::endl;};

void drawAllShapes(std::vector<std::variant<std::unique_ptr<Shape>>> const& shapes)
{
	for(auto const& s:shapes)
	std::visit([](auto&& arg){arg->draw();}, s);


}
int main(){
	using Shapes = std::vector<std::variant<std::unique_ptr<Shape>>>;

	Shapes shapes;
	shapes.emplace_back(std::make_unique<Circle>(2.0));
        shapes.emplace_back(std::make_unique<Square>(1.5));
        shapes.emplace_back(std::make_unique<Circle>(4.2));

	drawAllShapes(shapes);
}
