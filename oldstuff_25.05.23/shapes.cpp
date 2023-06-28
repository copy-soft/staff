#include <iostream>
#include <vector>
#include <memory>
class Vector2D{};

enum ShapeType{
	circle,
	square
};
class Shape{
	public:
	explicit Shape(ShapeType t): type{t}{}
	virtual ~Shape()=default;
	ShapeType getType() const noexcept{return type;};
	private:
	ShapeType type;
};
class Circle:public Shape{
	public:
	explicit Circle(double rad)
	: Shape{circle}
	, radius{rad}{}
	double getRadius() const noexcept;
	private:
	double radius;
};
void translate(Circle&, Vector2D const&);
void rotate(Circle&, double const&);
void draw(Circle const&){std::cout<<"drawing circle"<<std::endl;};
class Square: public Shape{
	public:
	explicit Square(double s)
	: Shape{square}
	, side{s}
	{}
	double getSide() const noexcept;
	private:
	double side;
};
void translate(Square&, Vector2D const&);
void rotate(Square&, Vector2D const&);
void draw(Square const&){std::cout<<"drawing square"<<std::endl;};

void drawAllShapes(std::vector<std::unique_ptr<Shape>> const& shapes)
{
	for(auto const& s:shapes)
	{
		switch(s->getType())
		{
		case circle:
		draw(*static_cast<Circle const*>(s.get()));
		break;
		case square:
		draw(*static_cast<Square const*>(s.get()));		
		break;
		}

	}



}
int main(){
	using Shapes = std::vector<std::unique_ptr<Shape>>;

	Shapes shapes;
	shapes.emplace_back(std::make_unique<Circle>(2.0));
        shapes.emplace_back(std::make_unique<Square>(1.5));
        shapes.emplace_back(std::make_unique<Circle>(4.2));

	drawAllShapes(shapes);
}
