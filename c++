subclass(subclass parameters): parent_class(superclass parameters) {
. . .
}

class derived_class_name : derivation_mode base_class_name
{data member and member function declarations};

class base_class {
private:
int a;
float x;
protected:
int b;
float y;
public:
int c;
float z;
};

class subclass_1 : public base_class {. . .};
class subclass_2 : private base_class {. . .};
class subclass_3 : private base_class {
base_class :: c;
. . .
}

class Thread { . . . };
class Drawing { . . . };
class DrawThread : public Thread, public Drawing { . . . };


class Shape {
public:
virtual void draw() = 0;
. . .
};
class Circle : public Shape {
public:
void draw() { . . . }
. . .
};
class Rectangle : public Shape {
public:
void draw() { . . . }
. . .
};
class Square : public Rectangle {
public:
void draw() { . . . }
. . .
};

Square* sq = new Square;
Rectangle* rect = new Rectangle;
Shape* ptr_shape;
ptr_shape = sq;
ptr_shape->draw();
rect->draw();
