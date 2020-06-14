/////////////////////////////////////////////////////////////////////////////////////////

/*Check if the given point lies inside or outside a polygon ?
 * 
 * Write a function that takes two arguments as a input and return True if 'p' lies inside the polygon else False.
   Do not use any built-in or library functions. This question is to test you ability to create the required algorithm.

 *Input 1 : array consisting the coordinates of polygon in 2-D
 *Input 2 : coordinated of points in 2-D
 *Output : True if point 'p' lies inside the polygon else False

 *Ex:Input -
   Polygon :  [[1,0], [8,3], [8,8], [1,5]]  $
   P :  [3,5] 
   Output : True
 * 
 */

//////////////////////////////////////////////////////////////////////////////////////////////



class Polygon1
{
	static int MAX_LENGTH = 10000; 
    static class Point  
    { 
        int x; 
        int y; 
  
        public Point(int x, int y) 
        { 
            this.x = x; 
            this.y = y; 
        } 
    }; 
    
    static boolean Inside_Polygon(Point polygon[], int n, Point p) 
    { 
       
        if (n < 3)  
        { 
            return false;  // must be 3 vertices in polygon[] 
        } 
  
       
        Point infinity = new Point(MAX_LENGTH, p.y); 
  
        
        int count = 0, i = 0; 
        do 
        { 
            int next = (i + 1) % n; 
  
            
            if (Intersection(polygon[i], polygon[next], p, infinity))  
            { 
                if (direction(polygon[i], p, polygon[next]) == 0) 
                { 
                    return on_The_Line(polygon[i], p, 
                                     polygon[next]); 
                } 
                count++; 
            } 
            i = next; 
        } while (i != 0); 
  
        
        return (count % 2 == 1); 
    } 
    static boolean Intersection(Point p1, Point q1,Point p2, Point q2)  
    { 
    	
    	int d1 = direction(p1, q1, p2); 
    	int d2 = direction(p1, q1, q2); 
    	int d3 = direction(p2, q2, p1); 
    	int d4 = direction(p2, q2, q1); 

    	
    	if (d1 != d2 && d3 != d4) //if they are intersecting
    		return true; 
    	
    	 
    	if (d1 == 0 && on_The_Line(p1, p2, q1))  //when p2 on the line p1q1 
    		return true; 
    	if (d2 == 0 && on_The_Line(p1, q2, q1))  //when q2 on the line p1q1
    		return true; 
    	if (d3 == 0 && on_The_Line(p2, p1, q2))  //when p1 on the line p2q2
    		return true; 
    	if (d4 == 0 && on_The_Line(p2, q1, q2))  //when q1 on the line p2q2
    		return true; 

    	return false;  // not on the line
    } 
    
    static int direction(Point p, Point q, Point r)  
    { 
        int val = (q.y - p.y) * (r.x - q.x) 
                - (q.x - p.x) * (r.y - q.y); 
  
        if (val == 0)  
        { 
            return 0; 			// colinear 
        } 
        else if(val < 0)
            return 2;          //anti-clockwise direction
            return 1;    	   //clockwise
    } 
    
    static boolean on_The_Line(Point p, Point q, Point r)  
    { 
        if (q.x <= Math.max(p.x, r.x) && 
            q.x >= Math.min(p.x, r.x) && 
            q.y <= Math.max(p.y, r.y) && 
            q.y >= Math.min(p.y, r.y)) 
        { 
            return true; 
        } 
        return false; 
    }
 
	public static void main(String[] args)  
    { 
        Point polygon1[] = {new Point(1, 0), 
                            new Point(8, 3),  
                            new Point(8, 8),  
                            new Point(1, 5)}; 
        int n = polygon1.length; 
        Point p = new Point(3, 5); 
        if (Inside_Polygon(polygon1, n, p))
            System.out.println("Yes");   
        else 
            System.out.println("No");
    }
}