package lab02;

public class RectangleTest {
    public static void main(String[] args) {
        Rectangle rect = new Rectangle();

        rect.setHeight(-3);
        rect.setWidth(5);
        System.out.println("Perimeter: " + rect.getPerimeter());
        System.out.println("Rectangles color: " + Rectangle.getColor());

        Rectangle rect2 = new Rectangle(3, 5.6);
        System.out.printf("Area: %2f\n", rect2.getAria());
        Rectangle.setColor("red");
        System.out.println("Rectangles color: " + Rectangle.getColor());

    }
}
