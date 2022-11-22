#ifndef ENVIRONMENT_H
#define ENVIRONMENT_H


class Environment
{
public:
    Environment(); // Creates a 30x30 grid
    Environment(float width, float height); // creates a widthxheight grid
    float get_width();
    float get_height();
private:
    float width, height;
};

#endif // ENVIRONMENT_H