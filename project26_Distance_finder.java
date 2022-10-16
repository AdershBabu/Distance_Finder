package project26_Distance_finder;
import java.util.*;
import java.lang.*;
class Distance{
	double length;
	double  finder(double a,double b,double c,double d) {
		length=Math.sqrt((b-a)*(b-a)+(d-c)*(d-c));
		
		
		return(length);
	}
}

public class project26_Distance_finder {

	public static void main(String[] args) {
		Scanner a=new Scanner(System.in);
		Distance e=new Distance();
		double x_1=a.nextDouble();
		double x_2=a.nextDouble();
		double y_1=a.nextDouble();
		double y_2=a.nextDouble();
		System.out.println(e.finder(x_1, x_2, y_1, y_2));
		

	}

}
