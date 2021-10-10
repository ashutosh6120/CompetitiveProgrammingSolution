/*
 * Implement a Polygon class with the following properties:
 * 1. A constructor that takes an array of integer side lengths.
 * 2. A 'perimeter' method that returns the sum of the Polygon's side lengths.
 */
class Polygon {
    constructor(lengths) {
        var polygon_perimeter = 0;
        for (var index in lengths)
            {
                polygon_perimeter += lengths[index];
            }
        
        this.my_perimeter = polygon_perimeter;
    }
    perimeter() 
    {
        return this.my_perimeter;
    }

}



